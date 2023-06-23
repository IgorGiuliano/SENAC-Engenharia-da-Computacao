//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: primeiro_ultimo_iguais()
//   Entrada: vetor v1 de inteiros e o tamanho n1,
//            vetor v2 de inteiros e o tamanho n2.
//   Saida: devolve true se tiverem o primeiro
//          elemento dos vetors sao iguais ou
//          o ultimo elemento do vetor sao iguais.
//          Ambos vetores tem tamanho maior ou iguais a 1.
//          E false caso contrario.
//[]-------------------------------------------------------------[]
bool primeiro_ultimo_iguais(int v1[], int n1, int v2[], int n2){
    int i = 1;
    int aux;
    if(n1>=1&&n2>=1){
        if(n1>n2){
            for(i; i<n1;i++){
                if((z+1)>n2)
                    aux = z;

                if(i==1&&v1[i-1]==v2[i-1])
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
   int v1[5] = {1,1,2,2,1};
   int v2[1] = {1};

   testar(primeiro_ultimo_iguais(v1, 5, v2, 1), true);
}

void caso_de_teste02(){
   int v1[6] = {1,1,6,2,2,6};
   int v2[3] = {2,3,4};

   testar(primeiro_ultimo_iguais(v1, 6, v2, 3), false);
}

void caso_de_teste03(){
   int v1[7] = {1,1,1,2,2,2,3};
   int v2[2] = {7,3};

   testar(primeiro_ultimo_iguais(v1, 7, v2, 2), true);
}

void caso_de_teste04(){
   int v1[7] = {2,1,2,2,1,2,1};
   int v2[3] = {7,4,3};
   testar(primeiro_ultimo_iguais(v1, 7, v2, 3), false);
}

void caso_de_teste05(){
   int v1[3] = {1,2,3};
   int v2[2] = {1,3};

   testar(primeiro_ultimo_iguais(v1, 3, v2, 2), true);
}

void caso_de_teste06(){
   int v1[3] = {1,6,2};
   int v2[1] = {6};

   testar(primeiro_ultimo_iguais(v1, 3, v2, 1),false);
}

void caso_de_teste07(){
   int v1[2] = {1,1};
   int v2[3] = {1,2,3};
   testar(primeiro_ultimo_iguais(v1, 2, v2, 3), true);
}

void caso_de_teste08(){
   int v1[2] = {5,1};
   int v2[2] = {1,5};

   testar(primeiro_ultimo_iguais(v1, 2, v2, 2), false);
}

void caso_de_teste09(){
   int v1[1] = {6};
   int v2[2] = {6,6};
   testar(primeiro_ultimo_iguais(v1, 1, v2, 2), true);
}

void caso_de_teste10(){
   int v1[1] = {0};
   int v2[2] = {0,0};

   testar(primeiro_ultimo_iguais(v1, 0, v2, 2), false);
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
