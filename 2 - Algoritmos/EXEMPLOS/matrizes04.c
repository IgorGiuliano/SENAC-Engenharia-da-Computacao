// Programador: Igor Giuliano
// Data: 23/10/2020

#include <stdio.h>

void soma_coluna(int A[3][3], int col, int valor){
   for(int i = 0; i < 3; i++){
     A[i][col] = A[i][col] + valor;
   }
}


void mostrar(int m[3][3]){
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 3; j++){
      printf("%d ", m[i][j]);
    }
    printf("\n");
  }
}

int main(void) {
  
  int A[3][3] = {{1,1,1},
                 {1,1,1},
                 {1,1,1} };
  soma_coluna(A, 1, 5);
  mostrar(A);
  return 0;
}