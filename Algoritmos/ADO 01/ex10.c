//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex10.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: primeiros_elementos()
//   Entrada: vetor v de inteiros e o tamanho n.
//   Saída: devolve true um dos primeiros quatro elementos
//          do vetor eh o numero 9.
//[]-------------------------------------------------------------[]
bool primeiros_elementos(int v[], int n){
    int cont = 0;
    if(n>4)
        n=4;
    for(int i = 0; i<n; i++){
        if(v[i]==9)
            cont++;
    }
    if(cont>0)
        return true;
    else
        return false;
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
   int v[5] = {1,2,9,3,4};

   testar(primeiros_elementos(v, 5), true);
}

void caso_de_teste02(){
   int v[5] = {1,2,3,4,9};

   testar(primeiros_elementos(v, 5), false);
}

void caso_de_teste03(){
   int v[5] = {1,2,3,4,5};

   testar(primeiros_elementos(v, 5), false);
}

void caso_de_teste04(){
   int v[3] = {9,2,3};

   testar(primeiros_elementos(v, 3), true);
}

void caso_de_teste05(){
    int v[3] = {1,9,9};

   testar(primeiros_elementos(v, 3), true);
}

void caso_de_teste06(){
   int v[3] = {1,2,3};

   testar(primeiros_elementos(v, 3),false);
}

void caso_de_teste07(){
   int v[2] = {1,9};

   testar(primeiros_elementos(v, 2), true);
}

void caso_de_teste08(){
   int v[2] = {5,5};

   testar(primeiros_elementos(v, 2), false);
}

void caso_de_teste09(){
   int v[1] = {2};

   testar(primeiros_elementos(v, 1), false);
}

void caso_de_teste10(){
   int v[1] = {9};

   testar(primeiros_elementos(v, 1), true);
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
