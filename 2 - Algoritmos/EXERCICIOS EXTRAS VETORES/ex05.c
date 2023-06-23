//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex05.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 03/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"


//[]-------------------------------------------------------------[]
//   Função: troca_primeiro_com_ultimo()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída:   troque o primeiro elemento com o maior elemento
//            do vetor.
//[]-------------------------------------------------------------[]
void troca_primeiro_com_ultimo(int v[], int n){
    int maior_elemento=v[0];
    int p=0;
    for(int i=0;i<n;i++){
        for(int j=1; j<n; j++){
            if(maior_elemento<v[j]){
                maior_elemento=v[j];
                p=j;
            }
        }
    }
    v[p]=v[0];
    v[0]=maior_elemento;
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
   int v2[6] = {6,2,3,4,5,1};
   troca_primeiro_com_ultimo(v1, 6);

   testar(compare_vetor(v1, v2, 6), true);
}

void caso_de_teste02(){
   int v1[10] = {2,7,6,4,5,9,8,7,10,2};
   int v2[10] = {10,7,6,4,5,9,8,7,2,2};
   troca_primeiro_com_ultimo(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste03(){
   int v1[10] = {12,15,65,45,57,91,82,7,13,12};
   int v2[10] = {91,15,65,45,57,12,82,7,13,12};
   troca_primeiro_com_ultimo(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste04(){
   int v1[7] = {21,20,49,8,57,20,1};
   int v2[7] = {57,20,49,8,21,20,1};
   troca_primeiro_com_ultimo(v1, 7);

   testar(compare_vetor(v1, v2, 7), true);
}

void caso_de_teste05(){
   int v1[6] = {17,2,15,4,14,18};
   int v2[6] = {18,2,15,4,14,17};
   troca_primeiro_com_ultimo(v1, 6);

   testar(compare_vetor(v1, v2, 6), true);
}

void caso_de_teste06(){
   int v1[10] = {10,8,7,3,2,5,4,9,6,0};
   int v2[10] = {10,8,7,3,2,5,4,9,6,0};
   troca_primeiro_com_ultimo(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste07(){
   int v1[10] = {2,18,27,33,2,15,24,19,26,30};
   int v2[10] = {33,18,27,2,2,15,24,19,26,30};
   troca_primeiro_com_ultimo(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste08(){
   int v1[10] = {32,28,47,13,26,12,4,29,16,14};
   int v2[10] = {47,28,32,13,26,12,4,29,16,14};
   troca_primeiro_com_ultimo(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste09(){
   int v1[10] = {32,28,21,37,29,25,22,29,17,24};
   int v2[10] = {37,28,21,32,29,25,22,29,17,24};
   troca_primeiro_com_ultimo(v1, 10);

   testar(compare_vetor(v1, v2, 10), true);
}

void caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,79,46,32};
   int v2[10] = {79,28,47,27,29,35,26,41,46,32};
   troca_primeiro_com_ultimo(v1, 10);

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
