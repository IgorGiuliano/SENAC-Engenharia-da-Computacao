#include <stdio.h>
#include <stdlib.h>
#define true 1
#define false 0

typedef int bool;

typedef struct node {
	int chave;
	struct node *esq, * dir;
} NODE;

typedef struct arvore {
	NODE* raiz;
} ARVORE;


void inicializar(ARVORE* arv) {
	arv -> raiz = malloc(sizeof(NODE));
	arv -> raiz = NULL;
}

void mostrarRecursivo(NODE* no) {
	printf("(");
	if (no != NULL) {
		printf("%d", no -> chave);
		mostrarRecursivo(no -> esq);
		mostrarRecursivo(no -> dir);
	}
	printf(")");
}

void mostrar(ARVORE* arv) {
	mostrarRecursivo(arv -> raiz);
	printf("\n\n");
}

NODE* inserirRecursivo(NODE* no, NODE* aux) {
	if (no == NULL) return aux;
	if (aux -> chave <= no -> chave) {
		no -> esq = inserirRecursivo(no -> esq, aux);
	} else {
		no -> dir = inserirRecursivo(no -> dir, aux);
	}
	return no;
}

void inserir(ARVORE* arv, int i) {
	NODE* aux = malloc(sizeof(NODE));
	aux-> esq = malloc(sizeof(NODE));
	aux-> dir = malloc(sizeof(NODE));
	aux-> esq = NULL;
	aux-> dir = NULL;
	aux-> chave = i;

	arv-> raiz = inserirRecursivo(arv->raiz, aux);
}

bool verificaArvoreRecurisivo(NODE* n) {

	if (n == NULL || n->esq == NULL || n->dir == NULL) { 
		return true;
	}
	if (n->esq->chave > n->dir->chave) {
		return false;
	} else {
		return verificaArvoreRecurisivo(n -> esq) && verificaArvoreRecurisivo(n -> dir);
	}

}

int verificaArvore(ARVORE* arv) {
	return verificaArvoreRecurisivo(arv -> raiz);
}

int main() {

	ARVORE* arvore;
	inicializar(arvore);

	printf("Arvore iniciada: \n");
	mostrar(arvore);

	inserir(arvore, 10);
	inserir(arvore, 15);
	inserir(arvore, 16);
	inserir(arvore, 17);
	inserir(arvore, 14);
	inserir(arvore, 5);
	inserir(arvore, 12);
	inserir(arvore, 24);
	inserir(arvore, 1);

	printf("Arvore com itens inseridos: \n");
	mostrar(arvore);

	if ( verificaArvore(arvore) ) {
		printf("Esta arvore é uma arvore binaria de busca.\n");
	} else {
		printf("Esta arvore não é uma arvore binaria de busca.\n");
	}

	return 0;
}