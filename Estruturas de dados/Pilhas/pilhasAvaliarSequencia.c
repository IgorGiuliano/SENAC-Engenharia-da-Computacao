//[]--------------------------------------------------------------------------------[]
//       Programador: Igor Giuliano
//
//       Dizemos que uma sequência de parênteses e colchetes é bem formada se para
//		 cada ( ou [ existe um correspondente ) ou ]. Por exemplo, ( ( ) [ ] ) é bem
//		 formada, mas ( [ ) ] não é. Sabendo disso, implemente (em linguagem C) uma 
//		 função que utiliza uma pilha estática para determinar se uma sequência é bem 
//		 formada ou não
//
//[]--------------------------------------------------------------------------------[]

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50
#define true 1
#define false 0
typedef int bool;

typedef struct elemento {
	char c;
} ELEMENTO;

typedef struct pilha {
	int topo;
	ELEMENTO elemento[];
} PILHA;

void iniciar(PILHA* p) {
	p->topo = -1;
}

bool push(PILHA* p, char c) {
	if(p->topo >= MAX-1) return false;
	p->topo = p->topo+1;
	p->elemento[p->topo].c = c;
	return true;
}

bool pop(PILHA* p) {
	if(p->topo == -1) return false;
	p->topo = p->topo-1;
	return true;
}

void reiniciar(PILHA* p) {
	memset(p->elemento, 0, MAX);
	p->topo = -1;
}

int testaSequencia(PILHA* p, char c[], int tamanho) {
	for(int i = 0; i <= tamanho; i++){
		if(p->topo != -1) {
			switch(p->elemento[p->topo].c){
				case '(' :
					if (c[i] == ']' || c[i] == '}') {
						return 0;
						break;
					} else if (c[i] == ')') {
						pop(p);
					} else {
						push(p, c[i]);
					}
					break;
				case '[' :
					if (c[i] == ')' || c[i] == '}') {
						return 0;
						break;
					} else if (c[i] == ']') {
						pop(p);
					} else {
						push(p, c[i]);
					}
					break;
				case '{' :
					if (c[i] == ']' || c[i] == ')') {
						return 0;
						break;
					} else if (c[i] == '}') {
						pop(p);
					} else {
						push(p, c[i]);
					}
					break;
				default :
					return 0;
					break;
			}
		} else {
			push(p, c[i]);
		}
	}
	if(p->topo != 0) {
		reiniciar(p);
		return 0;
	} else {
		reiniciar(p);
		return 1;		
	}
}

void bemOuMal(int i) {
	if(i==1) 			printf("Sequencia bem formada\n\n");
	else if(i==0) printf("Sequencia mal formada\n\n");
}

int main() {
	PILHA* pilha;
	iniciar(pilha);

	char c1[] = "()()()()()",
			 c2[] = "([]())",
			 c3[] = "([]",
			 c4[] = "({[)]}()";

	printf("Primeiro caso de teste com: %.*s\n", (int)sizeof(c1), c1);
	bemOuMal( testaSequencia(pilha, c1, ((int)sizeof(c1))-1) );
	
	printf("Segundo caso de teste com: %.*s\n", ((int)sizeof(c2)), c2);
	bemOuMal( testaSequencia(pilha, c2, ((int)sizeof(c2))-1) );
	
	printf("Terceiro caso de teste com: %.*s\n", ((int)sizeof(c3)), c3);
	bemOuMal( testaSequencia(pilha, c3, ((int)sizeof(c3))-1) );
	
	printf("Quarto caso de teste com: %.*s\n", ((int)sizeof(c4)), c4);
	bemOuMal( testaSequencia(pilha, c4, ((int)sizeof(c4))-1) );
	
	return 0;
}