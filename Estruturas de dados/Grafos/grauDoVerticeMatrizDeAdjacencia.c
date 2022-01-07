#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define tamanho 5

void exibeMatriz(int matriz[tamanho][tamanho]) {
	for(int i = 0; i<tamanho; i++){
		printf("v%d: [", i+1);
		for(int j = 0; j<tamanho; j++){
			printf(" %d ", matriz[i][j]);
		}
		printf("]\n");
	}
	printf("\n");
}

int grauDoVertice(int matriz[tamanho][tamanho], int v) {
	v -= 1;
	int grau = 0;

	for (int i = 0; i < tamanho; i++) {
		grau += (matriz[i][v] != 0) ? 1 : 0;
	} 

	return grau;
}

void cabecalho(){
	  printf("\t\t ENGENHARIA DA COMPUTACAO - 4 SEMESTRE\n");
    printf(" PROGRAMADOR:\tIgor Giuliano Augusto de Andrade Justino \n");
    printf(" DISCIPLINA:\tEstrutura de Dados\n");
    printf(" PROFESSOR:\t\tEduardo Takeo Ueda\n\n");
}

int main() {
	cabecalho();
  srand(time(NULL));
	int matriz_de_adjacencia [tamanho] [tamanho] = { 	{ 0, 1, 0, 1, 0 },
																										{ 1, 0, 1, 0, 1 },
																										{ 0, 1, 0, 1, 0 },
																										{ 1, 0, 1, 0, 1 },
																										{ 0, 1, 0, 1, 0 } 
	};

	int vertice = rand()%5;

	while(vertice == 0) {
		vertice = rand()%5;
	}

	exibeMatriz(matriz_de_adjacencia);

	printf("O grau do vertice %d e´: %d\n", vertice, grauDoVertice(matriz_de_adjacencia, vertice));

	return 0;

}