//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex04.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: primeiro_ultimo_6()
//   Entrada: vetor v de inteiros e o tamanho n.
//   Saida: devolve true se o numero 6 aparece ou
//          como o primeiro elemento ou como o ultimo
//          elemento do vetor.
//          E false caso contrario.
//[]-------------------------------------------------------------[]
bool primeiro_ultimo_6(int v[], int n){
    for(int i = 1; i<=n; i++){
        if(i==1&&v[i-1]==6)
            return true;
        else if(i==n&&(i+1)>n){
            if(v[n-1]==6)
                return true;
        }
    }
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
   int v[5] = {1,1,2,2,6};

   testar(primeiro_ultimo_6(v, 5), true);
}

void caso_de_teste02(){
   int v[6] = {1,1,6,2,2,1};

   testar(primeiro_ultimo_6(v, 6), false);
}

void caso_de_teste03(){
   int v[7] = {6,1,1,2,2,2,1};

   testar(primeiro_ultimo_6(v, 7), true);
}

void caso_de_teste04(){
   int v[7] = {1,1,2,2,1,2,1};

   testar(primeiro_ultimo_6(v, 7), false);
}

void caso_de_teste05(){
    int v[3] = {1,2,6};

   testar(primeiro_ultimo_6(v, 3), true);
}

void caso_de_teste06(){
   int v[3] = {1,6,1};

   testar(primeiro_ultimo_6(v, 3),false);
}

void caso_de_teste07(){
   int v[2] = {1,6};

   testar(primeiro_ultimo_6(v, 2), true);
}

void caso_de_teste08(){
   int v[2] = {5,5};

   testar(primeiro_ultimo_6(v, 2), false);
}

void caso_de_teste09(){
   int v[1] = {6};

   testar(primeiro_ultimo_6(v, 1), true);
}

void caso_de_teste10(){
   int v[1] = {9};

   testar(primeiro_ultimo_6(v, 1), false);
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
