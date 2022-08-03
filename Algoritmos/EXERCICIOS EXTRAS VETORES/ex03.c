//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex03.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 03/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: soma_um_nos_pares()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída:   encontre os elementos pares e para cada
//            um deles some o valor 1
//[]-------------------------------------------------------------[]
void soma_um_nos_pares(int v[], int n){
    for(int i =0; i<n; i++){
        if(v[i]%2==0){
            v[i]++;
        }
    }
}

//[]-------------------------------------------------------------[]
//   Função: compare_vetor()
//   Entrada: dois vetores v1 e v2, um inteiro n
//   Saída: devolve true se v1 igual a v2, e false caso contrario
//[]-------------------------------------------------------------[]
bool compare_vetor(int v1[], int v2[], int n){
   for (int i = 0; i < n; i++){
      if (v1[i] != v2[i])
         return false;
   }
   return true;
}

//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(bool obtido, bool esperado){
   if (obtido == esperado)
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %s  esperado: %s\n", btoa(obtido), btoa(esperado));
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int v1[6] = {1,2,3,4,5,6};
   int v2[6] = {1,3,3,5,5,7};
   soma_um_nos_pares(v1, 6);

   testar(compare_vetor(v1, v2, 6), true);
}

void caso_de_teste02(){
   int v1[10] = {2,7,6,4,5,9,8,7,10,2};
   int v2[10] = {3,7,7,5,5,9,9,7,11,3};
   soma_um_nos_pares(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste03(){
   int v1[10] = {12,15,65,45,57,91,82,7,13,12};
   int v2[10] = {13,15,65,45,57,91,83,7,13,13};
   soma_um_nos_pares(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste04(){
   int v1[7] = {21,20,49,8,57,20,1};
   int v2[7] = {21,21,49,9,57,21,1};
   soma_um_nos_pares(v1, 7);

   testar(compare_vetor(v1, v2, 7), true);
}

void caso_de_teste05(){
   int v1[6] = {17,2,15,4,14,18};
   int v2[6] = {17,3,15,5,15,19};
   soma_um_nos_pares(v1, 6);

   testar(compare_vetor(v1, v2, 6), true);
}

void caso_de_teste06(){
   int v1[10] = {0,8,7,3,2,5,4,9,6,0};
   int v2[10] = {1,9,7,3,3,5,5,9,7,1};
   soma_um_nos_pares(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste07(){
   int v1[10] = {2,18,27,33,2,15,24,19,26,30};
   int v2[10] = {3,19,27,33,3,15,25,19,27,31};
   soma_um_nos_pares(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste08(){
   int v1[10] = {32,28,47,13,26,12,4,29,16,14};
   int v2[10] = {33,29,47,13,27,13,5,29,17,15};
   soma_um_nos_pares(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste09(){
   int v1[10] = {32,28,21,37,29,25,22,29,17,24};
   int v2[10] = {33,29,21,37,29,25,23,29,17,25};
   soma_um_nos_pares(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste10(){
   int v1[10] = {1,1,1,2,2,2,3,3,3,4};
   int v2[10] = {1,1,1,3,3,3,3,3,3,5};
   soma_um_nos_pares(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}



//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
int main(){
   caso_de_teste01();
   caso_de_teste02();
   caso_de_teste03();
   caso_de_teste04();
   caso_de_teste05();
   caso_de_teste06();
   caso_de_teste07();
   caso_de_teste08();
   caso_de_teste09();
   caso_de_teste10();
   return 0;
}
