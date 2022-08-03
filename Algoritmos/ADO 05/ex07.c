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
//   Função: somar_matriz()
//   Entrada:  matriz a e b e suas dimensoes (linhas e colunas)
//   Saída:   a matriz resultante contendo a soma entre a e b.
//[]-------------------------------------------------------------[]
void somar_matriz(int **matriz_resultante, int **matriz_a, int **matriz_b, int linhas, int colunas){
   for (int i = 0; i < linhas; i++){
    for (int j = 0; j < colunas; j++){
      matriz_resultante[i][j] = matriz_a[i][j] + matriz_b[i][j];
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
   int **a, **b, **resultado;
   float r = 0.0;
   printf("caso de teste 01\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 2; a[0][1] = 4; a[0][2] = 7;
   a[1][0] = 2; a[1][1] = 4; a[1][2] = 7;
   a[2][0] = 2; a[2][1] = 4; a[2][2] = 7;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 4); r += testar(resultado[0][1], 8); r += testar(resultado[0][2], 14);
   r += testar(resultado[1][0], 4); r += testar(resultado[1][1], 8); r += testar(resultado[1][2], 14);
   r += testar(resultado[2][0], 4); r += testar(resultado[2][1], 8); r += testar(resultado[2][2], 14);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste02(){
   int **a, **b, **resultado;
   float r = 0.0;
   printf("caso de teste 02\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] =  1; a[0][1] =  2; a[0][2] =  3;
   a[1][0] =  7; a[1][1] =  8; a[1][2] =  9;
   a[2][0] = 13; a[2][1] = 14; a[2][2] = 15;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);
   printf("resultado[0][0] = %d, a[0][0] = %d, b[0][0] = %d\n", resultado[0][0], a[0][0], b[0][0]);

   r += testar(resultado[0][0], 3);  r += testar(resultado[0][1], 6);  r += testar(resultado[0][2],10);
   r += testar(resultado[1][0], 9);  r += testar(resultado[1][1], 12); r += testar(resultado[1][2],16);
   r += testar(resultado[2][0], 15); r += testar(resultado[2][1], 18); r += testar(resultado[2][2],22);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);

   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste03(){
   int **a, **b, **resultado;
   float r = 0.0;
   printf("caso de teste 03\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 2; a[0][1] = 4; a[0][2] = 6;
   a[1][0] = 2; a[1][1] = 4; a[1][2] = 6;
   a[2][0] = 2; a[2][1] = 4; a[2][2] = 6;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 4); r += testar(resultado[0][1], 8); r += testar(resultado[0][2], 13);
   r += testar(resultado[1][0], 4); r += testar(resultado[1][1], 8); r += testar(resultado[1][2], 13);
   r += testar(resultado[2][0], 4); r += testar(resultado[2][1], 8); r += testar(resultado[2][2], 13);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);

   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste04(){
   int **a, **b, **resultado;
   float r = 0.0;

   printf("caso de teste 04\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 1; a[0][1] = 4; a[0][2] = 7;
   a[1][0] = 2; a[1][1] = 5; a[1][2] = 8;
   a[2][0] = 3; a[2][1] = 6; a[2][2] = 9;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 3); r += testar(resultado[0][1],  8); r += testar(resultado[0][2], 14);
   r += testar(resultado[1][0], 4); r += testar(resultado[1][1],  9); r += testar(resultado[1][2], 15);
   r += testar(resultado[2][0], 5); r += testar(resultado[2][1], 10); r += testar(resultado[2][2], 16);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste05(){
   int **a, **b, **resultado;
   float r = 0.0;

   printf("caso de teste 05\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);

   resultado = alocar_matriz(3,3);

   a[0][0] = 1; a[0][1] = 4; a[0][2] = 1;
   a[1][0] = 1; a[1][1] = 4; a[1][2] = 1;
   a[2][0] = 1; a[2][1] = 4; a[2][2] = 1;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 3); r += testar(resultado[0][1], 8); r += testar(resultado[0][2], 8);
   r += testar(resultado[1][0], 3); r += testar(resultado[1][1], 8); r += testar(resultado[1][2], 8);
   r += testar(resultado[2][0], 3); r += testar(resultado[2][1], 8); r += testar(resultado[2][2], 8);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste06(){
   int **a, **b, **resultado;
   float r = 0.0;

   printf("caso de teste 06\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);


   a[0][0] = 12; a[0][1] = 14; a[0][2] = 17;
   a[1][0] = 22; a[1][1] = 42; a[1][2] = 72;
   a[2][0] = 83; a[2][1] = 63; a[2][2] = 33;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 14); r += testar(resultado[0][1], 18); r += testar(resultado[0][2], 24);
   r += testar(resultado[1][0], 24); r += testar(resultado[1][1], 46); r += testar(resultado[1][2], 79);
   r += testar(resultado[2][0], 85); r += testar(resultado[2][1], 67); r += testar(resultado[2][2], 40);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste07(){
   int **a, **b, **resultado;
   float r = 0.0;

   printf("caso de teste 07\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);

   a[0][0] = 0; a[0][1] = 1; a[0][2] = 0;
   a[1][0] = 0; a[1][1] = 1; a[1][2] = 0;
   a[2][0] = 0; a[2][1] = 1; a[2][2] = 0;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 2); r += testar(resultado[0][1], 5); r += testar(resultado[0][2], 7);
   r += testar(resultado[1][0], 2); r += testar(resultado[1][1], 5); r += testar(resultado[1][2], 7);
   r += testar(resultado[2][0], 2); r += testar(resultado[2][1], 5); r += testar(resultado[2][2], 7);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste08(){
   int **a, **b, **resultado;
   float r = 0.0;

   printf("caso de teste 08\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);

   a[0][0] = 0; a[0][1] = -1; a[0][2] = 0;
   a[1][0] = 0; a[1][1] = -1; a[1][2] = 0;
   a[2][0] = 0; a[2][1] = -1; a[2][2] = 0;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 2); r += testar(resultado[0][1], 3);  r += testar(resultado[0][2], 7);
   r += testar(resultado[1][0], 2); r += testar(resultado[1][1], 3);  r += testar(resultado[1][2], 7);
   r += testar(resultado[2][0], 2); r += testar(resultado[2][1], 3);  r += testar(resultado[2][2], 7);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);

   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste09(){
   int **a, **b, **resultado;
   float r = 0.0;

   printf("caso de teste 09\n");

   a = alocar_matriz(3,3);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);

   a[0][0] = 3; a[0][1] = 6; a[0][2] = 9;
   a[1][0] = 3; a[1][1] = 6; a[1][2] = 9;
   a[2][0] = 3; a[2][1] = 6; a[2][2] = 9;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 5); r += testar(resultado[0][1], 10); r += testar(resultado[0][2], 16);
   r += testar(resultado[1][0], 5); r += testar(resultado[1][1], 10); r += testar(resultado[1][2], 16);
   r += testar(resultado[2][0], 5); r += testar(resultado[2][1], 10); r += testar(resultado[2][2], 16);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);
   liberar_matriz(resultado, 3);
   return r/9;
}

float caso_de_teste10(){
   int **a, **b, **resultado;
   float r = 0.0;

   printf("caso de teste 10\n");

   a = alocar_matriz(3,6);
   b = alocar_matriz(3,3);
   resultado = alocar_matriz(3,3);

   a[0][0] = 2; a[0][1] = 8; a[0][2] = 7;
   a[1][0] = 2; a[1][1] = 4; a[1][2] = 7;
   a[2][0] = 2; a[2][1] = 9; a[2][2] = 7;

   b[0][0] = 2; b[0][1] = 4; b[0][2] = 7;
   b[1][0] = 2; b[1][1] = 4; b[1][2] = 7;
   b[2][0] = 2; b[2][1] = 4; b[2][2] = 7;

   somar_matriz(resultado, a, b, 3, 3);

   r += testar(resultado[0][0], 4); r += testar(resultado[0][1], 12); r += testar(resultado[0][2], 14);
   r += testar(resultado[1][0], 4); r += testar(resultado[1][1],  8); r += testar(resultado[1][2], 14);
   r += testar(resultado[2][0], 4); r += testar(resultado[2][1], 13); r += testar(resultado[2][2], 14);

   liberar_matriz(a, 3);
   liberar_matriz(b, 3);

   liberar_matriz(resultado, 3);
   return r/9;
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

   printf("exercicio 07\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
