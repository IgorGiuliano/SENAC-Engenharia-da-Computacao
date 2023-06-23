//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex08.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: iguais()
//   Entrada: vetor de inteiros v1[] e o seu tamanho n1,
//            vetor de inteiros v2[] e o seu tamanho n2.
//   Saída: devolve true se são iguais e false
//          caso contrário.
//          Para que os dois vetores sejam considerados iguais
//          eles precisam ter:
//          1. os mesmos tamanhos;
//          2. os mesmos elementos, independente das posições.
//   Considere vetores sem elementos repetidos.
//[]-------------------------------------------------------------[]
bool iguais(int v1[], int n1, int v2[], int n2){
    int cont=0;
    if(n1==n2){
        for(int i=0;i<n1;i++){
            for(int z=0;z<n2;z++){
                if(v1[i]==v2[z]){
                    cont++;
                    z=n1;
                }
            }
        }
    }
    if(cont==n1){
        return true;
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
   int v1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int v2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

   testar(iguais(v1, 10, v2, 10), true);
}

void caso_de_teste02(){
   int v1[10] = {2, 7, 6, 4, 5, 9, 8, 7, 10, 12};
   int v2[10] = {1, 2, 3, 4, 5, 6, 7, 8,  9, 10};

   testar(iguais(v1, 10, v2, 10), false);
}

void caso_de_teste03(){
   int v1[10] = {12, 15, 65, 45, 57, 91, 82,  7, 13, 14};
   int v2[10] = {14, 13,  7, 82, 91, 57, 45, 65, 15, 12};

   testar(iguais(v1, 10, v2, 10), true);
}

void caso_de_teste04(){
   int v1[10] = {0, 3, 6, 10, 13, 14, 15, 4, 7, 9};
   int v2[9]  = {3, 6, 10, 13, 14, 15, 4, 7, 9};

   testar(iguais(v1, 10, v2, 9), false);
}

void caso_de_teste05(){
   int v1[10] = {0, 3, 6, 10, 13, 14, 15, 4, 7, 9};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};

   testar(iguais(v1, 10, v2, 10), false);
}

void caso_de_teste06(){
   int v1[10] = {1,   8,  7,  3,  2,  5,  4,  9,  6, 0};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};

   testar(iguais(v1, 10, v2, 10), false);
}

void caso_de_teste07(){
   int v1[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int v2[10] = { 1,  2,  3,  4,  5,  6,  7,  8,   9, 10};

   testar(iguais(v1, 10, v2, 10), false);
}

void caso_de_teste08(){
   int v1[10] = {32,28,47,13,26,12,4,29,16,14};
   int v2[10] = {10, 13, 16, 20, 23, 24, 25, 14, 17,19};

   testar(iguais(v1, 10, v2, 10), false);
}

void caso_de_teste09(){
   int v1[10] = {32,28,21,37,29,25,22,29,17,24};
   int v2[10] = {32,28,21,37,29,25,22,29,17,24};

   testar(iguais(v1, 10, v2, 10), true);
}

void caso_de_teste10(){
   int v1[10] = {41,28,47,27,29,35,26,39,46,32};
   int v2[10] = {41,18,47,27,29,35,26,39,46,32};

   testar(iguais(v1, 10, v2, 10), false);
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
