// Programador: Igor Giuliano
// Data: 23/10/2020

#include <stdio.h>

#define N 3
void soma(int A[N][N], int B[N][N], int C[N][N]){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      C[i][j] = A[i][j] + B[i][j];
    }
  }     
}
void inicializar_matriz(int m[N][N], int v){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      m[i][j] = v;
    }
  }
}

void mostrar(int m[N][N]){
  for (int i = 0; i < N; i++){
    for (int j = 0; j < N; j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}
int main(void) {
  int A[N][N], B[N][N], C[N][N];

  inicializar_matriz(A, 1);
  inicializar_matriz(B, 2);
  soma(A, B, C);
  mostrar(C);
   
  return 0;
}