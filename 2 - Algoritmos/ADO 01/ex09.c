//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex09.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: conta9()
//   Entrada: vetor de inteiros v e o tamanho n
//   Saída: devolve o numero de vezes que ocorre o
//          numero 9.
//[]-------------------------------------------------------------[]
int conta9(int v[], int n){
    int cont = 0;
    for(int i=0; i<n; i++){
        if(v[i]==9)
            cont++;
    }
    return cont;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(int obtido, int esperado){
   if (obtido == esperado)
	   printf("Parabéns !!!");
   else
	   printf("Ainda não !!!");
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int v[3] = {1, 2, 9};
   testar(conta9(v,3), 1);
}

void caso_de_teste02(){
   int v[3] = {1, 9, 9};
   testar(conta9(v,3), 2);
}

void caso_de_teste03(){
   int v[5] = {1, 9, 9, 3, 9};
   testar(conta9(v,5), 3);
}


void caso_de_teste04(){
   int v[3] = {1, 2, 3};
   testar(conta9(v,3), 0);
}

void caso_de_teste05(){
   int v[3] = {0};
   testar(conta9(v,0), 0);
}

void caso_de_teste06(){
   int v[5] = {4, 2, 4, 3, 1};
   testar(conta9(v,5), 0);
}

void caso_de_teste07(){
   int v[5] = {9, 2, 4, 3, 1};
   testar(conta9(v,5), 1);
}

void caso_de_teste08(){
   int v[3] = {9, 9, 9};
   testar(conta9(v,3), 3);
}

void caso_de_teste09(){
   int v[3] = {0, 0, 9};
   testar(conta9(v,3), 1);
}

void caso_de_teste10(){
   int v[3] = {1, 9, 1};
   testar(conta9(v,3), 1);
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
