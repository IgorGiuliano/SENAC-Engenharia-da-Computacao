#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

//    Programador: Igor Giuliano
//    Data: 28/10/2020

//[]-------------------------------------------------------------[]
//   Função: alocar_matriz()
//   Entrada: numero de linhas e numero de colunas
//   Saída:   a matriz alocada dinamicamente
//[]-------------------------------------------------------------[]
int **alocar_matriz(int linhas, int colunas){
    int **m = (int **)calloc(linhas, sizeof(int *));
    for(int i = 0; i < linhas; i++){
        m[i] = (int *)calloc(colunas, sizeof(int *));
    }
    return m;
}

//[]-------------------------------------------------------------[]
//   Função: liberar_matriz()
//   Entrada: numero de linhas e a matriz
//   Saída:   a matriz liberar_matrizda
//[]-------------------------------------------------------------[]
void liberar_matriz(int **matriz, int linhas){
    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
    matriz=NULL;
}

//[]-------------------------------------------------------------[]
//   Função: soma_todos_elementos_das_colunas_impares()
//   Entrada: matriz e suas dimensoes (linhas e colunas)
//   Saída:   soma de todos os elementos das colunas ímpares
//[]-------------------------------------------------------------[]
int soma_todos_elementos_das_colunas_impares(int **matriz, int linhas, int colunas){
    int soma=0;
    for(int i=0;i<linhas;i++){
        for(int j=1; j<colunas; j+=2){
            soma += matriz[i][j];
        }
    }
   return soma;
}

//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado;
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
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = 3;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 3;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = 3;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 45);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste02(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] =  1; m1[0][1] =  2; m1[0][2] =  3; m1[0][3] =  4; m1[0][4] =  5; m1[0][5] =  6;
   m1[1][0] =  7; m1[1][1] =  8; m1[1][2] =  9; m1[1][3] = 10; m1[1][4] = 11; m1[1][5] = 12;
   m1[2][0] = 13; m1[2][1] = 14; m1[2][2] = 15; m1[2][3] = 16; m1[2][4] = 17; m1[2][5] = 18;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 90);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste03(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 6; m1[0][3] = 8; m1[0][4] = 10; m1[0][5] = 12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 6; m1[1][3] = 8; m1[1][4] = 10; m1[1][5] = 12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 6; m1[2][3] = 8; m1[2][4] = 10; m1[2][5] = 12;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 72);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste04(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 10; m1[0][4] = 13; m1[0][5] = 16;
   m1[1][0] = 2; m1[1][1] = 5; m1[1][2] = 8; m1[1][3] = 11; m1[1][4] = 14; m1[1][5] = 17;
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9; m1[2][3] = 12; m1[2][4] = 15; m1[2][5] = 18;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 99);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste05(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 1; m1[0][3] = 5; m1[0][4] = 2; m1[0][5] = 6;
   m1[1][0] = 1; m1[1][1] = 4; m1[1][2] = 1; m1[1][3] = 5; m1[1][4] = 2; m1[1][5] = 6;
   m1[2][0] = 1; m1[2][1] = 4; m1[2][2] = 1; m1[2][3] = 5; m1[2][4] = 2; m1[2][5] = 6;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 45);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste06(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 12; m1[0][1] = 14; m1[0][2] = 17; m1[0][3] = 18; m1[0][4] = 12; m1[0][5] = 13;
   m1[1][0] = 22; m1[1][1] = 42; m1[1][2] = 72; m1[1][3] = 82; m1[1][4] = 122; m1[1][5] = 32;
   m1[2][0] = 83; m1[2][1] = 63; m1[2][2] = 33; m1[2][3] = 23; m1[2][4] = 32; m1[2][5] = 33;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 320);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste07(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 0; m1[0][5] = 1;
   m1[1][0] = 0; m1[1][1] = 1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 0; m1[1][5] = 1;
   m1[2][0] = 0; m1[2][1] = 1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 0; m1[2][5] = 1;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 9);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste08(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 0; m1[0][1] = -1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 0; m1[1][1] = -1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 12; m1[1][5] = -1;
   m1[2][0] = 0; m1[2][1] = -1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 12; m1[2][5] = -1;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), -3);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste09(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = -12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = -12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = -12;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), 0);

   liberar_matriz(m1, 3);
   return resultado;
}

float caso_de_teste10(){
   int **m1;
   float resultado;

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 8; m1[0][2] = 7; m1[0][3] = 4; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 33;
   m1[2][0] = 2; m1[2][1] = 9; m1[2][2] = 7; m1[2][3] = 3; m1[2][4] = 12; m1[2][5] = -123;

   resultado = testar(soma_todos_elementos_das_colunas_impares(m1, 3, 6), -55);

   liberar_matriz(m1, 3);
   return resultado;
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

   printf("exercicio 02\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
