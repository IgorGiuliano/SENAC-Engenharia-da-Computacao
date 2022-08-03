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
float **alocar_matriz(int linhas, int colunas){
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
void liberar_matriz(float **matriz, int linhas){
   for (int i = 0; i < linhas; i++){
      free(matriz[i]);
    }
  free(matriz);
}

//[]-------------------------------------------------------------[]
//   Função: multiplicar_matriz_por_escalar()
//   Entrada: um escalar k,
//            uma matriz e suas dimensoes (linhas e colunas)
//   Saída:   todos os elementos da matriz multiplicado por k
//[]-------------------------------------------------------------[]
void multiplicar_matriz_por_escalar(float k, float **matriz, int linhas, int colunas){
   for(int i=0;i<linhas;i++){
    for(int j=0;j<colunas;j++){
      matriz[i][j]= k*matriz[i][j];
    }
  }
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(float obtido, float esperado){
   float resultado = 0.0;
   if (fabs(obtido - esperado) < 0.00001){
       printf("Parabéns !!!");
           resultado = 1.0;
   } else {
       printf("Ainda não !!!");
           resultado = 0.0;
   }
   printf(" obtido: %f  esperado: %f\n", obtido, esperado);
   assert(fabs(obtido - esperado) < 0.00001);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 01\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = 3;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 3;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = 3;

   multiplicar_matriz_por_escalar(2, m1, 3, 6);

   resultado += testar(m1[0][0], 4); resultado += testar(m1[0][1], 8); resultado += testar(m1[0][2], 14); resultado += testar(m1[0][3], 16); resultado += testar(m1[0][4], 24); resultado += testar(m1[0][5], 6);
   resultado += testar(m1[1][0], 4); resultado += testar(m1[1][1], 8); resultado += testar(m1[1][2], 14); resultado += testar(m1[1][3], 16); resultado += testar(m1[1][4], 24); resultado += testar(m1[1][5], 6);
   resultado += testar(m1[2][0], 4); resultado += testar(m1[2][1], 8); resultado += testar(m1[2][2], 14); resultado += testar(m1[2][3], 16); resultado += testar(m1[2][4], 24); resultado += testar(m1[2][5], 6);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste02(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 02\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] =  1; m1[0][1] =  2; m1[0][2] =  3; m1[0][3] =  4; m1[0][4] =  5; m1[0][5] =  6;
   m1[1][0] =  7; m1[1][1] =  8; m1[1][2] =  9; m1[1][3] = 10; m1[1][4] = 11; m1[1][5] = 12;
   m1[2][0] = 13; m1[2][1] = 14; m1[2][2] = 15; m1[2][3] = 16; m1[2][4] = 17; m1[2][5] = 18;

   multiplicar_matriz_por_escalar(3, m1, 3, 6);

   resultado += testar(m1[0][0], 3);  resultado += testar(m1[0][1], 6);  resultado += testar(m1[0][2], 9);  resultado += testar(m1[0][3], 12); resultado += testar(m1[0][4], 15); resultado += testar(m1[0][5], 18);
   resultado += testar(m1[1][0], 21); resultado += testar(m1[1][1], 24); resultado += testar(m1[1][2], 27); resultado += testar(m1[1][3], 30); resultado += testar(m1[1][4], 33); resultado += testar(m1[1][5], 36);
   resultado += testar(m1[2][0], 39); resultado += testar(m1[2][1], 42); resultado += testar(m1[2][2], 45); resultado += testar(m1[2][3], 48); resultado += testar(m1[2][4], 51); resultado += testar(m1[2][5], 54);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste03(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 03\n");

   m1 = alocar_matriz(3,6);


   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 6; m1[0][3] = 8; m1[0][4] = 10; m1[0][5] = 12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 6; m1[1][3] = 8; m1[1][4] = 10; m1[1][5] = 12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 6; m1[2][3] = 8; m1[2][4] = 10; m1[2][5] = 12;

   multiplicar_matriz_por_escalar(4, m1, 3, 6);

   resultado += testar(m1[0][0], 8); resultado += testar(m1[0][1], 16); resultado += testar(m1[0][2], 24); resultado += testar(m1[0][3], 32); resultado += testar(m1[0][4], 40); resultado += testar(m1[0][5], 48);
   resultado += testar(m1[1][0], 8); resultado += testar(m1[1][1], 16); resultado += testar(m1[1][2], 24); resultado += testar(m1[1][3], 32); resultado += testar(m1[1][4], 40); resultado += testar(m1[1][5], 48);
   resultado += testar(m1[2][0], 8); resultado += testar(m1[2][1], 16); resultado += testar(m1[2][2], 24); resultado += testar(m1[2][3], 32); resultado += testar(m1[2][4], 40); resultado += testar(m1[2][5], 48);

  liberar_matriz(m1, 3);
  return resultado/18;
}

float caso_de_teste04(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 04\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 10; m1[0][4] = 13; m1[0][5] = 16;
   m1[1][0] = 2; m1[1][1] = 5; m1[1][2] = 8; m1[1][3] = 11; m1[1][4] = 14; m1[1][5] = 17;
   m1[2][0] = 3; m1[2][1] = 6; m1[2][2] = 9; m1[2][3] = 12; m1[2][4] = 15; m1[2][5] = 18;

   multiplicar_matriz_por_escalar(0.5, m1, 3, 6);

   resultado += testar(m1[0][0], 0.5); resultado += testar(m1[0][1], 2.0); resultado += testar(m1[0][2], 3.5); resultado += testar(m1[0][3], 5.0); resultado += testar(m1[0][4], 6.5); resultado += testar(m1[0][5], 8.0);
   resultado += testar(m1[1][0], 1.0); resultado += testar(m1[1][1], 2.5); resultado += testar(m1[1][2], 4.0); resultado += testar(m1[1][3], 5.5); resultado += testar(m1[1][4], 7.0); resultado += testar(m1[1][5], 8.5);
   resultado += testar(m1[2][0], 1.5); resultado += testar(m1[2][1], 3.0); resultado += testar(m1[2][2], 4.5); resultado += testar(m1[2][3], 6.0); resultado += testar(m1[2][4], 7.5); resultado += testar(m1[2][5], 9.0);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste05(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 05\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 1; m1[0][1] = 4; m1[0][2] = 1; m1[0][3] = 5; m1[0][4] = 2; m1[0][5] = 6;
   m1[1][0] = 1; m1[1][1] = 4; m1[1][2] = 1; m1[1][3] = 5; m1[1][4] = 2; m1[1][5] = 6;
   m1[2][0] = 1; m1[2][1] = 4; m1[2][2] = 1; m1[2][3] = 5; m1[2][4] = 2; m1[2][5] = 6;

   multiplicar_matriz_por_escalar(5, m1, 3, 6);

   resultado += testar(m1[0][0], 5); resultado += testar(m1[0][1], 20); resultado += testar(m1[0][2], 5); resultado += testar(m1[0][3], 25); resultado += testar(m1[0][4], 10); resultado += testar(m1[0][5], 30);
   resultado += testar(m1[1][0], 5); resultado += testar(m1[1][1], 20); resultado += testar(m1[1][2], 5); resultado += testar(m1[1][3], 25); resultado += testar(m1[1][4], 10); resultado += testar(m1[1][5], 30);
   resultado += testar(m1[2][0], 5); resultado += testar(m1[2][1], 20); resultado += testar(m1[2][2], 5); resultado += testar(m1[2][3], 25); resultado += testar(m1[2][4], 10); resultado += testar(m1[2][5], 30);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste06(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 06\n");

   m1 = alocar_matriz(3,6);


   m1[0][0] = 12; m1[0][1] = 14; m1[0][2] = 17; m1[0][3] = 18; m1[0][4] = 12; m1[0][5] = 13;
   m1[1][0] = 22; m1[1][1] = 42; m1[1][2] = 72; m1[1][3] = 82; m1[1][4] = 122; m1[1][5] = 32;
   m1[2][0] = 83; m1[2][1] = 63; m1[2][2] = 33; m1[2][3] = 23; m1[2][4] = 32; m1[2][5] = 33;

   multiplicar_matriz_por_escalar(0.1, m1, 3, 6);

   resultado += testar(m1[0][0], 1.2); resultado += testar(m1[0][1], 1.4); resultado += testar(m1[0][2], 1.7); resultado += testar(m1[0][3], 1.8); resultado += testar(m1[0][4], 1.2); resultado += testar(m1[0][5], 1.3);
   resultado += testar(m1[1][0], 2.2); resultado += testar(m1[1][1], 4.2); resultado += testar(m1[1][2], 7.2); resultado += testar(m1[1][3], 8.2); resultado += testar(m1[1][4], 12.2); resultado += testar(m1[1][5], 3.2);
   resultado += testar(m1[2][0], 8.3); resultado += testar(m1[2][1], 6.3); resultado += testar(m1[2][2], 3.3); resultado += testar(m1[2][3], 2.3); resultado += testar(m1[2][4], 3.2); resultado += testar(m1[2][5], 3.3);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste07(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 07\n");

   m1 = alocar_matriz(3,6);


   m1[0][0] = 0; m1[0][1] = 1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 0; m1[0][5] = 1;
   m1[1][0] = 0; m1[1][1] = 1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 0; m1[1][5] = 1;
   m1[2][0] = 0; m1[2][1] = 1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 0; m1[2][5] = 1;

   multiplicar_matriz_por_escalar(6, m1, 3, 6);

   resultado += testar(m1[0][0], 0); resultado += testar(m1[0][1], 6); resultado += testar(m1[0][2], 0); resultado += testar(m1[0][3], 6); resultado += testar(m1[0][4], 0); resultado += testar(m1[0][5], 6);
   resultado += testar(m1[1][0], 0); resultado += testar(m1[1][1], 6); resultado += testar(m1[1][2], 0); resultado += testar(m1[1][3], 6); resultado += testar(m1[1][4], 0); resultado += testar(m1[1][5], 6);
   resultado += testar(m1[2][0], 0); resultado += testar(m1[2][1], 6); resultado += testar(m1[2][2], 0); resultado += testar(m1[2][3], 6); resultado += testar(m1[2][4], 0); resultado += testar(m1[2][5], 6);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste08(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 08\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 0; m1[0][1] = -1; m1[0][2] = 0; m1[0][3] = 1; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 0; m1[1][1] = -1; m1[1][2] = 0; m1[1][3] = 1; m1[1][4] = 12; m1[1][5] = -1;
   m1[2][0] = 0; m1[2][1] = -1; m1[2][2] = 0; m1[2][3] = 1; m1[2][4] = 12; m1[2][5] = -1;

   multiplicar_matriz_por_escalar(7, m1, 3, 6);

   resultado += testar(m1[0][0], 0); resultado += testar(m1[0][1], -7); resultado += testar(m1[0][2], 0); resultado += testar(m1[0][3], 7); resultado += testar(m1[0][4], 84); resultado += testar(m1[0][5], -7);
   resultado += testar(m1[1][0], 0); resultado += testar(m1[1][1], -7); resultado += testar(m1[1][2], 0); resultado += testar(m1[1][3], 7); resultado += testar(m1[1][4], 84); resultado += testar(m1[1][5], -7);
   resultado += testar(m1[2][0], 0); resultado += testar(m1[2][1], -7); resultado += testar(m1[2][2], 0); resultado += testar(m1[2][3], 7); resultado += testar(m1[2][4], 84); resultado += testar(m1[2][5], -7);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste09(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 09\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 4; m1[0][2] = 7; m1[0][3] = 8; m1[0][4] = 12; m1[0][5] = -12;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = -12;
   m1[2][0] = 2; m1[2][1] = 4; m1[2][2] = 7; m1[2][3] = 8; m1[2][4] = 12; m1[2][5] = -12;

   multiplicar_matriz_por_escalar(9, m1, 3, 6);

   resultado += testar(m1[0][0], 18); resultado += testar(m1[0][1], 36); resultado += testar(m1[0][2], 63); resultado += testar(m1[0][3], 72); resultado += testar(m1[0][4], 108); resultado += testar(m1[0][5], -108);
   resultado += testar(m1[1][0], 18); resultado += testar(m1[1][1], 36); resultado += testar(m1[1][2], 63); resultado += testar(m1[1][3], 72); resultado += testar(m1[1][4], 108); resultado += testar(m1[1][5], -108);
   resultado += testar(m1[2][0], 18); resultado += testar(m1[2][1], 36); resultado += testar(m1[2][2], 63); resultado += testar(m1[2][3], 72); resultado += testar(m1[2][4], 108); resultado += testar(m1[2][5], -108);

   liberar_matriz(m1, 3);
   return resultado/18;
}

float caso_de_teste10(){
   float **m1;
   float resultado = 0.0;
   printf("caso de teste 10\n");

   m1 = alocar_matriz(3,6);

   m1[0][0] = 2; m1[0][1] = 8; m1[0][2] = 7; m1[0][3] = 4; m1[0][4] = 12; m1[0][5] = -1;
   m1[1][0] = 2; m1[1][1] = 4; m1[1][2] = 7; m1[1][3] = 8; m1[1][4] = 12; m1[1][5] = 33;
   m1[2][0] = 2; m1[2][1] = 9; m1[2][2] = 7; m1[2][3] = 3; m1[2][4] = 12; m1[2][5] = -123;

   multiplicar_matriz_por_escalar(10.5, m1, 3, 6);

   resultado += testar(m1[0][0], 21.0); resultado += testar(m1[0][1], 84.0); resultado += testar(m1[0][2], 73.5); resultado += testar(m1[0][3], 42.0); resultado += testar(m1[0][4], 126.0); resultado += testar(m1[0][5], -10.5);
   resultado += testar(m1[1][0], 21.0); resultado += testar(m1[1][1], 42.0); resultado += testar(m1[1][2], 73.5); resultado += testar(m1[1][3], 84.0); resultado += testar(m1[1][4], 126.0); resultado += testar(m1[1][5], 346.5);
   resultado += testar(m1[2][0], 21.0); resultado += testar(m1[2][1], 94.5); resultado += testar(m1[2][2], 73.5); resultado += testar(m1[2][3], 31.5); resultado += testar(m1[2][4], 126.0); resultado += testar(m1[2][5], -1291.5);

   liberar_matriz(m1, 3);
   return resultado/18;
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

   printf("exercicio 05\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
