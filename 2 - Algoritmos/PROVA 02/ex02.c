//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>

//[]-------------------------------------------------------------[]
//   Função: separa_menores_maiores
//   Entrada: vetor de tamanho n que armazena números inteiros.
//            vetor menores e vetor maiores de números inteiros.
//
//   Saída:   Leia os elementos do vetor v, e coloque os elementos menores
//            ou iguais a x no vetor menores, e coloque os elementos
//            maiores que x no vetor maiores
//
//
//   Ex.:
//       entrada: {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, x = 5
//       saída:
//             menores =  {1, 2, 3, 4, 5}
//             maiores =  {6, 7, 8, 9, 10}
//
//       entrada: {1, 2, 4, 4, 3, 5, 5, 7, 6, 8}, x = 4
//       saída:
//             menores =  {1, 2, 4, 4, 3}
//             maiores =  {5, 5, 7, 6, 8}
//[]-------------------------------------------------------------[]
void separa_menores_maiores(int v[], int n, int menores[], int maiores[], int x){
int j = 0;
int k = 0;
   for (int i = 0; i < n; i++){
      if (v[i] <= x){
         menores[j] = v[i];
         j++;
   }  else if (v[i] > x){
      maiores[k] = v[i];
      k++;
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
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int menores[5], maiores[5];
   int v2[5] = {1, 2, 3, 4, 5};
   int v3[5] = {6, 7, 8, 9, 10};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste02(){
   int v1[10] = {1, 2, 4, 4, 3, 5, 5, 7, 6, 8};
   int menores[5], maiores[5];
   int v2[5] = {1, 2, 4, 4, 3};
   int v3[5] = {5, 5, 7, 6, 8};

   separa_menores_maiores(v1, 10, menores, maiores, 4);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste03(){
   int v1[10] = {1, 3, 3, 4, 5, 6, 4, 5, 9, 10};
   int menores[5], maiores[5];
   int v2[5] = {1, 3, 3, 4, 4};
   int v3[5] = {5, 6, 5, 9, 10};

   separa_menores_maiores(v1, 10, menores, maiores, 4);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste04(){
   int v1[10] = {7, 2, 6, 4, 6, 6, 1, 2, 4, 10};
   int menores[5], maiores[5];
   int v2[5] = {2, 4, 1, 2, 4};
   int v3[5] = {7, 6, 6, 6, 10};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste05(){
   int v1[10] = {6, 6, 5, 4, 3, 3, 6, 1, 9, 10};
   int menores[5], maiores[5];
   int v2[5] = {5, 4, 3, 3, 1};
   int v3[5] = {6, 6, 6, 9, 10};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste06(){
   int v1[10] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
   int menores[5], maiores[5];
   int v2[5] = {5, 4, 3, 2, 1};
   int v3[5] = {10, 9, 8, 7, 6};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste07(){
   int v1[10] = {1, 1, 1, 1, 1, 10, 10, 10, 10, 10};
   int menores[5], maiores[5];
   int v2[5] = {1, 1, 1, 1, 1};
   int v3[5] = {10, 10, 10, 10, 10};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste08(){
   int v1[10] = {2, 2, 4, 4, 5, 6, 8, 8, 10, 10};
   int menores[5], maiores[5];
   int v2[5] = {2, 2, 4, 4, 5};
   int v3[5] = {6, 8, 8, 10, 10};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste09(){
   int v1[10] = {10, 8, 7, 4, 5, 6, 3, 2, 9, 1};
   int menores[5], maiores[5];
   int v2[5] = {4, 5, 3, 2, 1};
   int v3[5] = {10, 8, 7, 6, 9};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}

float caso_de_teste10(){
   int v1[10] = {1, 1, 3, 3, 5, 7, 7, 9, 9, 10};
   int menores[5], maiores[5];
   int v2[5] = {1, 1, 3, 3, 5};
   int v3[5] = {7, 7, 9, 9, 10};

   separa_menores_maiores(v1, 10, menores, maiores, 5);

   int total = 0;

   for (int i = 0; i < 5; i++){
      total += testar(menores[i], v2[i]);
      total += testar(maiores[i], v3[i]);
   }

   return total/10;
}



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

   printf("exercicio 02\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
