//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: sequencia123()
//   Entrada: vetor v de inteiros e o tamanho n.
//   Saída: devolve true se a sequencia de numeros
//          1, 2, 3 aparece no vetor em algum lugar.
//[]-------------------------------------------------------------[]
bool sequencia123(int v[], int n){
    bool a = false;
    for(int i = 0; i<n; i++){
        if(a==false){
            if(v[i]==1&&v[i+1]==2&&v[i+2]==3)
                a = true;
            else
                a = false;
        }else{
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
   int v[5] = {1,1,2,3,1};

   testar(sequencia123(v, 5), true);
}

void caso_de_teste02(){
   int v[5] = {1,1,2,4,1};

   testar(sequencia123(v, 5), false);
}

void caso_de_teste03(){
   int v[6] = {1,1,2,1,2,3};

   testar(sequencia123(v, 6), true);
}

void caso_de_teste04(){
   int v[6] = {1,1,2,1,2,1};

   testar(sequencia123(v, 6), false);
}

void caso_de_teste05(){
    int v[3] = {1,2,3};

   testar(sequencia123(v, 3), true);
}

void caso_de_teste06(){
   int v[3] = {1,1,1};

   testar(sequencia123(v, 3),false);
}

void caso_de_teste07(){
   int v[2] = {1,2};

   testar(sequencia123(v, 2), false);
}

void caso_de_teste08(){
   int v[2] = {5,5};

   testar(sequencia123(v, 2), false);
}

void caso_de_teste09(){
   int v[1] = {2};

   testar(sequencia123(v, 1), false);
}

void caso_de_teste10(){
   int v[1] = {9};

   testar(sequencia123(v, 1), false);
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
