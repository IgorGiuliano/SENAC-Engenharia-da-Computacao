#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
#include <time.h>

typedef struct aux {
	int chave;
	struct aux* prox;
} ELEMENTO;

typedef struct {
	int tamanho;
	ELEMENTO* head;
} LISTA;


void iniciarLista(LISTA* lista) {
	lista->head = malloc(sizeof(ELEMENTO));
	lista->head->prox = lista-> head;
	lista->tamanho = 0;
}

void mostrar(LISTA* lista) {
	if (lista->tamanho == 0) return;
	ELEMENTO* aux = lista->head;
	while (aux->prox != lista->head) {
		printf(" %d -", aux->chave);
		aux = aux->prox;
	}
	printf(" %d \n", aux->chave);
}

void furaFila(LISTA* lista, int chave) {
	ELEMENTO* aux = malloc(sizeof(ELEMENTO));

	aux->chave 		= chave;
	aux->prox = lista->head;

	ELEMENTO* auxI = lista->head;

	while (auxI->prox != lista->head){
		auxI = auxI->prox;
	}

	auxI->prox 	= aux;
	lista->head = aux;
}

void inserir(LISTA* lista, int chave) {
	ELEMENTO* aux = malloc(sizeof(ELEMENTO));
	aux->chave = chave;
	aux->prox = lista->head;

	if (lista->tamanho == 0) {
		lista->tamanho = 1;
		furaFila(lista, chave);
		lista->head->prox = lista->head;
		return;
	}

	ELEMENTO* auxI = lista->head;

	while (auxI->prox != lista->head){
		auxI = auxI->prox;
	}

	auxI->prox = aux;
}

void cabecalho(){
	  printf("\t\t ENGENHARIA DA COMPUTACAO - 4 SEMESTRE\n");
    printf(" PROGRAMADOR:\tIgor Giuliano Augusto de Andrade Justino \n");
    printf(" DISCIPLINA:\tEstrutura de Dados\n");
    printf(" PROFESSOR:\t\tEduardo Takeo Ueda\n\n");
}

int main() {
	srand(time(NULL));
	LISTA* lista;
	iniciarLista(lista);
	int num;

	cabecalho();

	for(int i = 0; i < 10; i++){
		inserir(lista, rand()%100);
		mostrar(lista);
	}

	printf("\n Digite o numero que deseja por na frente: ");
	scanf("%d",&num);

	printf("\n Furando a fila com: %d\n",num);
	furaFila(lista, num);
	mostrar(lista);

	return 0;
}
