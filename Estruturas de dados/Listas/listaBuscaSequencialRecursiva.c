//[]--------------------------------------------------------------------------------[]
//       Programador: Igor Giuliano
//
//       Exercicio 5
//
//       Implemente (em linguagem C) uma função que busca/procura, recursivamente,
//       um valor em uma lista simplesmente encadeada/ligada.
//
//[]--------------------------------------------------------------------------------[]

#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

#define true 1
#define false 0

typedef int bool;

typedef struct { // REGISTO É O CAMPO, ONDE OS DADOS DO ELEMENTO ESTÃO
	int chave;
	//	PODE SER ADICIONADO MULTIPLOS CAMPOS
} REGISTRO;

typedef struct aux {
	REGISTRO registro;
	struct aux* endereco_do_proximo;
} ELEMENTO;	//	ELEMENTO possui REGISTRO (que possui os dados) e o Endereço do Proximo elemento

typedef ELEMENTO* PONTEIRO_DO_ELEMENTO; //	PONTEIRO_DO_ELEMENTO é um ponteiro de ponteiro, serve para indicar o HEAD da lista

typedef struct {
	PONTEIRO_DO_ELEMENTO inicio;
} LISTA;	//	LISTA possui inicio, que tem o endereço de memória do HEAD citado acima

void inicializar(LISTA* lista) {
	lista->inicio = NULL;	//	A lista deve ser iniciada referenciando um endereço NULL, ou seja, um endereço de memoria não existente
	printf("Lista iniciada\n");
}

int tamanho(LISTA* lista) {
	PONTEIRO_DO_ELEMENTO fim = lista->inicio;	//	O ponteiro fim é um ponteiro auxiliar que recebe o endereço do HEAD
	int tamanho = 0;

	while (fim != NULL){ //	Enquanto o ponteiro auxiliar não apontar para o endereço NULL, ele irá contabilizar quantos elementos existem na lista
		tamanho++;
		fim = fim->endereco_do_proximo;	//	Ponteiro auxiliar recebendo o endereço do proximo elemento
	}

	return tamanho;	// retorna-se o tamanho da lista
}

void exibir(LISTA* lista) {
	PONTEIRO_DO_ELEMENTO fim = lista->inicio;	//	O ponteiro fim é um ponteiro auxiliar que recebe o endereço do HEAD

	printf("LISTA: \" ");
	while (fim != NULL) {	//	Enquanto o ponteiro auxiliar não apontar para o endereço NULL, ele irá exibir elemento por elemento da lista
		printf("%i - %p; ", fim->registro.chave, fim);

		fim = fim->endereco_do_proximo;	//	Ponteiro auxiliar recebendo o endereço do proximo elemento
	}
	printf("\" \n");
}

PONTEIRO_DO_ELEMENTO buscaSequencialRecursiva(PONTEIRO_DO_ELEMENTO lista, int chave) {
	PONTEIRO_DO_ELEMENTO pont = lista; // pont aponta para o elemento

	if(pont == NULL) { 	//se pont for vazio, retorna null
		return NULL;
	}


	if(pont->registro.chave == chave) {	//se o registro em pont for o registro procurado, retorne o endereco
		return lista;
	}
	return buscaSequencialRecursiva(lista->endereco_do_proximo, chave);	// recursão
}

bool inserir(LISTA* lista, REGISTRO reg){
	PONTEIRO_DO_ELEMENTO p;	// Declara-se o ponteiro p
	p = (PONTEIRO_DO_ELEMENTO) malloc(sizeof(ELEMENTO));	//	Aloca espaço na memória para o novo elemento

	if(lista->inicio == NULL) {	// Se a lista estiver vazia, p recebe o registro, p aponta para NULL e o HEAD aponta para p

		p->registro = reg;
		p->endereco_do_proximo = NULL;
		lista->inicio = p;

	} else { //	Senão, p recebe registro, p aponta

		p->registro = reg;
		p->endereco_do_proximo = lista->inicio;
		lista->inicio = p;

	}
	return true;
}

void limparLista(LISTA* lista) {
	PONTEIRO_DO_ELEMENTO apagar;
	PONTEIRO_DO_ELEMENTO fim = lista->inicio;

	printf("Reiniciando a lista...\n");
	while(fim != NULL) {

		apagar = fim;
		fim = fim->endereco_do_proximo;

		free(apagar);
	}

	printf("Lista reiniciada\n");
	lista->inicio = NULL;
}

int main(void) {
	srand(time(NULL));
	REGISTRO reg;
	PONTEIRO_DO_ELEMENTO pont;
	int numero_de_elementos, numero_procurado, numero_excluir;

	LISTA* lista = (LISTA*) malloc(sizeof(LISTA*));

	printf("Digite a quantidade de elementos que voce deseja que a lista possua: \n");
	scanf("%d", &numero_de_elementos);

	for(int i = 0; i < numero_de_elementos; i++){
		reg.chave = rand()%100;
		inserir(lista,reg);
	}

	exibir(lista);

	printf("A lista dinamica encadeada possui %d elementos \n\n", tamanho(lista));

	printf("Digite o valor que deseja procurar RECURSIVAMENTE na lista: \n");
	scanf("%d", &numero_procurado);
	pont = buscaSequencialRecursiva(lista->inicio, numero_procurado);
	((pont) != NULL)
	? printf("O valor %d foi encontrado no endereço de memoria: %p\n\n", numero_procurado,pont)
	: printf("O valor %d não foi encontrado na lista.\n\n", numero_procurado);

	limparLista(lista);
	exibir(lista);

	free(lista);
	
	printf("Memória alocada para a lista liberada.\n\n");
  return 0;
}