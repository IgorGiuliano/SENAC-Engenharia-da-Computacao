// Programador: Igor Giuliano
// Data: 23/10/2020

#include <stdio.h>

void leia(int m[3][2]){
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
      printf("Digite um número (%d, %d): ", i, j);
      scanf("%d", &m[i][j]);
    }
  }
}

int maior_elemento(int m[3][2]){
  int maior = m[0][0];
  for (int i = 0; i < 3; i++){
    for (int j = 0; j < 2; j++){
      if (m[i][j] > maior)
         maior = m[i][j];
    }
  }
  return maior;
}


int main(void) {
  int m[3][2];  //declaração estática
  leia(m);
  printf("O maior elemento da matriz: %d\n", maior_elemento(m));
  return 0;
}