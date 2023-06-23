//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: esta_em_ordem_crescente()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída: devolve true se esta em ordem crescente e false
//          caso contrário
//[]-------------------------------------------------------------[]
bool esta_em_ordem_crescente(int v[], int n){
    int i=0;
    for(i;i<n;i++){
        if(v[i]<=v[i-1])
            return true;
        else
            return false;
    }
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
   int v[6] = {1,2,3,4,5,6};
   testar(esta_em_ordem_crescente(v, 6), true);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,12};
   testar(esta_em_ordem_crescente(v, 10), false);
}

void caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   testar(esta_em_ordem_crescente(v, 10), false);
}

void caso_de_teste04(){
   int v[7] = {1,3,6,10,13,14,15};
   testar(esta_em_ordem_crescente(v, 7), true);
}

void caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   testar(esta_em_ordem_crescente(v, 6), false);
}

void caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,0};
   testar(esta_em_ordem_crescente(v, 10), false);
}

void caso_de_teste07(){
   int v[10] = {10,20,30,40,50,60,70,80,90,100};
   testar(esta_em_ordem_crescente(v, 10), true);
}

void caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,14};
   testar(esta_em_ordem_crescente(v, 10), false);
}

void caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   testar(esta_em_ordem_crescente(v, 10), false);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   testar(esta_em_ordem_crescente(v, 10), false);
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
