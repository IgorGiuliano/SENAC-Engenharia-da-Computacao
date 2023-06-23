// Programador: Igor Giuliano
// Data: 23/10/2020

#include <stdio.h>
#include <stdlib.h>

int **aloca_matriz(int n){
  int **m = (int **)calloc(n, sizeof(int *));
  for (int i = 0; i < n; i++){
    m[i] = (int *)calloc(n, sizeof(int));
  }
  return m;
}

void desaloca_matriz(int **M, int n){
  for (int i = 0; i < n; i++){
    free(M[i]);
  }
  free(M);
}

void soma(int **A, int **B, int **C, int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      C[i][j] = A[i][j] + B[i][j];
    }
  }  
}

void inicializar_matriz(int **m, int n, int v){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      m[i][j] = v;
    }
  }
}

void mostrar(int **m, int n){
  for (int i = 0; i < n; i++){
    for (int j = 0; j < n; j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

int main(void) {

  int tam;
  printf("Digite o tamanho da matriz: ");
  scanf("%d", &tam);

  int **A, **B, **C;
  A = aloca_matriz(tam);
  B = aloca_matriz(tam);
  C = aloca_matriz(tam);

  inicializar_matriz(A, tam, 1);
  inicializar_matriz(B, tam, 2);

  soma(A, B, C, tam);
  
  mostrar(C, tam);

  desaloca_matriz(A, tam);
  desaloca_matriz(B, tam);
  desaloca_matriz(C, tam);

  return 0;
}