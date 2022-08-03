#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include<math.h>

//    Programador: Igor Giuliano
//    Data: 28/10/2020

//[]-------------------------------------------------------------[]
//   Função: alocar_matriz()
//   Entrada: numero de linhas e numero de colunas
//   Saída:   a matriz alocada dinamicamente
//[]-------------------------------------------------------------[]
int **alocar_matriz(int linhas, int colunas){
  int **matriz = calloc(linhas,sizeof(int*));
      for(int i=0; i<linhas; i++){
        matriz[i]= calloc(colunas,sizeof(int));
      }
    return matriz;
}

//[]-------------------------------------------------------------[]
//   Função: liberar_matriz()
//   Entrada: numero de linhas e a matriz
//   Saída:   a matriz liberar_matrizda
//[]-------------------------------------------------------------[]
void liberar_matriz(int **matriz, int linhas){
   for (int i = 0; i < linhas; i++){
      free(matriz[i]);
    }
  free(matriz);
}

//[]-------------------------------------------------------------[]
//   Função: computar_matriz_transposta()
//   Entrada: uma matriz e suas dimensoes (linhas e colunas)
//   Saída:   a matriz transposta
//[]-------------------------------------------------------------[]
void computar_matriz_transposta(int **matriz, int linhas, int colunas, int **matriz_resultante){
   for(int i=0;i<linhas;i++){
     for(int j=0; j<colunas; j++){
       matriz_resultante[i][j] = matriz[j][i];
     }
   }
}

//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado = 0.0;
   if (obtido == esperado){
       printf("Parabéns !!!");
           resultado = 1.0;
   } else {
       printf("Ainda não !!!");
           resultado = 0.0;
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   assert(obtido == esperado);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 01\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7;

   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 2); resultado += testar(transposta[0][1], 2); resultado += testar(transposta[0][2], 2);
   resultado += testar(transposta[1][0], 4); resultado += testar(transposta[1][1], 4); resultado += testar(transposta[1][2], 4);
   resultado += testar(transposta[2][0], 7); resultado += testar(transposta[2][1], 7); resultado += testar(transposta[2][2], 7);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste02(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 02\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] =  1; m1[0][1] =  2; m1[0][2] =  3;
   m1[1][0] =  7; m1[1][1] =  8; m1[1][2] =  9;
   m1[2][0] = 13; m1[2][1] = 14; m1[2][2] = 15;
   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 1); resultado += testar(transposta[0][1], 7); resultado += testar(transposta[0][2],13);
   resultado += testar(transposta[1][0], 2); resultado += testar(transposta[1][1], 8); resultado += testar(transposta[1][2],14);
   resultado += testar(transposta[2][0], 3); resultado += testar(transposta[2][1], 9); resultado += testar(transposta[2][2],15);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste03(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 03\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);


   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 6;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 6;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 6;
   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 2); resultado += testar(transposta[0][1], 2); resultado += testar(transposta[0][2], 2);
   resultado += testar(transposta[1][0], 4); resultado += testar(transposta[1][1], 4); resultado += testar(transposta[1][2], 4);
   resultado += testar(transposta[2][0], 6); resultado += testar(transposta[2][1], 6); resultado += testar(transposta[2][2], 6);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste04(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 04\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 7;
   m1[1][0] = 2; m1[1][1] = 5; m1[1][2] = 8;
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9;

   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 1); resultado += testar(transposta[0][1], 2); resultado += testar(transposta[0][2], 3);
   resultado += testar(transposta[1][0], 4); resultado += testar(transposta[1][1], 5); resultado += testar(transposta[1][2], 6);
   resultado += testar(transposta[2][0], 7); resultado += testar(transposta[2][1], 8); resultado += testar(transposta[2][2], 9);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste05(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 05\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 1;
   m1[1][0] = 1; m1[1][1] = 4; m1[1][2] = 1;
   m1[2][0] = 1; m1[2][1] = 4; m1[2][2] = 1;

   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 1); resultado += testar(transposta[0][1], 1); resultado += testar(transposta[0][2], 1);
   resultado += testar(transposta[1][0], 4); resultado += testar(transposta[1][1], 4); resultado += testar(transposta[1][2], 4);
   resultado += testar(transposta[2][0], 1); resultado += testar(transposta[2][1], 1); resultado += testar(transposta[2][2], 1);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste06(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 06\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 12; m1[0][1] = 14; m1[0][2] = 17;
   m1[1][0] = 22; m1[1][1] = 42; m1[1][2] = 72;
   m1[2][0] = 83; m1[2][1] = 63; m1[2][2] = 33;

   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 12); resultado += testar(transposta[0][1], 22); resultado += testar(transposta[0][2], 83);
   resultado += testar(transposta[1][0], 14); resultado += testar(transposta[1][1], 42); resultado += testar(transposta[1][2], 63);
   resultado += testar(transposta[2][0], 17); resultado += testar(transposta[2][1], 72); resultado += testar(transposta[2][2], 33);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste07(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 07\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 0;
   m1[1][0] = 0; m1[1][1] = 1; m1[1][2] = 0;
   m1[2][0] = 0; m1[2][1] = 1; m1[2][2] = 0;

   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 0); resultado += testar(transposta[0][1], 0); resultado += testar(transposta[0][2], 0);
   resultado += testar(transposta[1][0], 1); resultado += testar(transposta[1][1], 1); resultado += testar(transposta[1][2], 1);
   resultado += testar(transposta[2][0], 0); resultado += testar(transposta[2][1], 0); resultado += testar(transposta[2][2], 0);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste08(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 08\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 0; m1[0][1] = -1; m1[0][2] = 0;
   m1[1][0] = 0; m1[1][1] = -1; m1[1][2] = 0;
   m1[2][0] = 0; m1[2][1] = -1; m1[2][2] = 0;
    computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 0);  resultado += testar(transposta[0][1], 0);  resultado += testar(transposta[0][2], 0);
   resultado += testar(transposta[1][0], -1); resultado += testar(transposta[1][1], -1); resultado += testar(transposta[1][2], -1);
   resultado += testar(transposta[2][0], 0);  resultado += testar(transposta[2][1], 0);  resultado += testar(transposta[2][2], 0);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste09(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 09\n");

   m1 = alocar_matriz(3,3);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 3; m1[0][1] = 6; m1[0][2] = 9;
   m1[1][0] = 3; m1[1][1] = 6; m1[1][2] = 9;
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9;
    computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 3); resultado += testar(transposta[0][1], 3); resultado += testar(transposta[0][2], 3);
   resultado += testar(transposta[1][0], 6); resultado += testar(transposta[1][1], 6); resultado += testar(transposta[1][2], 6);
   resultado += testar(transposta[2][0], 9); resultado += testar(transposta[2][1], 9); resultado += testar(transposta[2][2], 9);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

float caso_de_teste10(){
   int **m1;
   int **transposta;
   float resultado = 0.0;

   printf("caso de teste 10\n");

   m1 = alocar_matriz(3,6);
   transposta = alocar_matriz(3,3);

   m1[0][0] = 2; m1[0][1] = 8; m1[0][2] = 7;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7;
   m1[2][0] = 2; m1[2][1] = 9; m1[2][2] = 7;

   computar_matriz_transposta(m1, 3, 3, transposta);

   resultado += testar(transposta[0][0], 2); resultado += testar(transposta[0][1], 2); resultado += testar(transposta[0][2], 2);
   resultado += testar(transposta[1][0], 8); resultado += testar(transposta[1][1], 4); resultado += testar(transposta[1][2], 9);
   resultado += testar(transposta[2][0], 7); resultado += testar(transposta[2][1], 7); resultado += testar(transposta[2][2], 7);

   liberar_matriz(m1, 3);
   liberar_matriz(transposta, 3);
   return resultado/9;
}

//[]-------------------------------------------------------------[]
//    função principal
//[]-------------------------------------------------------------[]
int main(){
   float r = 0.0;
   r += caso_de_teste01();
   r += caso_de_teste02();
   r += caso_de_teste03();
   r += caso_de_teste04();
   r += caso_de_teste05();
   r += caso_de_teste06();
   r += caso_de_teste07();
   r += caso_de_teste08();
   r += caso_de_teste09();
   r += caso_de_teste10();

   printf("exercicio 06\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
