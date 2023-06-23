//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex08.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>


//[]-------------------------------------------------------------[]
//   Função: intercala()
//   Entrada: vetor de inteiros v1[] e o seu tamanho n1,
//            vetor de inteiros v2[] e o seu tamanho n2
//   Saída:   devolve em resultado elementos v1 intercalados com
//            com elementos de v2.
//
//   Exemplo:
//       v1 = {1,2,3,4,5,6,7,8,9,10}, n1 = 10
//       v2 = {11,12,13,14,15,16,17,18,19,20}, n2 = 10
//       resultado = {1,11,2,12,3,13,4,14,5,15,6,16,7,17,8,18,9,19,10,20}
//
//       v1 = {1,2,3,4,5,6,7,8}, n1 = 8
//       v2 = {100,200,300,400}, n2 = 4
//       resultado = {1,100,2,200,3,300,4,400,5,6,7,8}
//
//       v1 = {1,2,3}, n1 = 3
//       v2 = {4,5,6,7,8,9}, n2 = 6
//       resultado = {1,4,2,5,3,6,7,8,9}
//[]-------------------------------------------------------------[]
void intercala(int v1[], int n1, int v2[], int n2, int resultado[]){
    int cont = 0;
    int aux = n1;
    if (n2 > n1){
         aux = n2;
    }
    for(int i = 0; i< aux; i++){
         if(i < n1){
             resultado[cont] = v1[i];
             cont++;
         }
         if(i < n2){
             resultado[cont] = v2[i];
             cont++;
         }
     }
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
   return resultado;
}


//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int v1[10] = {1,2,3,4,5,6,7,8,9,10};
   int v2[10] = {11,12,13,14,15,16,17,18,19,20};
   int solucao[20] = {1,11,2,12,3,13,4,14,5,15,6,16,7,17,8,18,9,19,10,20};
   int resultado[20];
   float total = 0;
   intercala(v1, 10, v2, 10, resultado);
   for (int i = 0; i < 20; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 20.0;
}

float caso_de_teste02(){
   int v1[8] = {1,2,3,4,5,6,7,8};
   int v2[4] = {100,200,300,400};
   int solucao[12] = {1,100,2,200,3,300,4,400,5,6,7,8};
   int resultado[12];
   float total = 0;
   intercala(v1, 8, v2, 4, resultado);
   for (int i = 0; i < 12; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 12.0;
}

float caso_de_teste03(){
   int v1[3] = {1,2,3};
   int v2[6] = {4,5,6,7,8,9};
   int solucao[9] = {1,4,2,5,3,6,7,8,9};
   int resultado[9];
   float total = 0;
   intercala(v1, 3, v2, 6, resultado);
   for (int i = 0; i < 9; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 9.0;
}

float caso_de_teste04(){
   int v1[4] = {1,1,1,1};
   int v2[6] = {4,5,6,7,8,9};
   int solucao[10] = {1,4,1,5,1,6,1,7,8,9};
   int resultado[10];
   float total = 0;
   intercala(v1, 4, v2, 6, resultado);
   for (int i = 0; i < 10; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 10.0;
}

float caso_de_teste05(){
   int v1[8] = {1,2,3,4,5,6,7,8};
   int v2[6] = {1,1,1,1,1,1};
   int solucao[14] = {1,1,2,1,3,1,4,1,5,1,6,1,7,8};
   int resultado[14];
   float total = 0;
   intercala(v1, 8, v2, 6, resultado);
   for (int i = 0; i < 14; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 14.0;
}

float caso_de_teste06(){
   int v1[8] = {2,2,2,2,2,2,2,2};
   int v2[8] = {1,1,1,1,1,1,1,1};
   int solucao[16] = {2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1};
   int resultado[16];
   float total = 0;
   intercala(v1, 8, v2, 8, resultado);
   for (int i = 0; i < 16; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 16.0;
}

float caso_de_teste07(){
   int v1[8] = {1,1,1,1,1,1,1,1};
   int v2[8] = {2,2,2,2,2,2,2,2};
   int solucao[16] = {1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2};
   int resultado[16];
   float total = 0;
   intercala(v1, 8, v2, 8, resultado);
   for (int i = 0; i < 16; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 16.0;
}

float caso_de_teste08(){
   int v1[1] = {1};
   int v2[6] = {4,5,6,7,8,9};
   int solucao[7] = {1,4,5,6,7,8,9};
   int resultado[7];
   float total = 0;
   intercala(v1, 1, v2, 6, resultado);
   for (int i = 0; i < 7; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 7.0;
}

float caso_de_teste09(){
   int v1[6] = {4,5,6,7,8,9};
   int v2[1] = {1};
   int solucao[7] = {4,1,5,6,7,8,9};
   int resultado[7];
   float total = 0;
   intercala(v1, 6, v2, 1, resultado);
   for (int i = 0; i < 7; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 7.0;
}

float caso_de_teste10(){
   int v1[10] = {1,1,1,1,1,1,1,1,1,1};
   int v2[10] = {0,0,0,0,0,0,0,0,0,0};
   int solucao[20] = {1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0,1,0};
   int resultado[20];
   float total = 0;
   intercala(v1, 10, v2, 10, resultado);
   for (int i = 0; i < 20; i++){
      total += testar(resultado[i], solucao[i]);
   }
   return total / 20.0;}


//[]-------------------------------------------------------------[]
//    programa principal
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

   printf("exercicio 08\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
