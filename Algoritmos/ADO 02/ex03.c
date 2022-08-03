//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex03.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: sem_triplas()
//   Entrada: vetor v de inteiros e o tamanho n.
//   Saída: Dizemos que uma tripla eh um valor que aparece
//          3 vezes seguidas no vetor.
//          Devolve true se o vetor nao contiver tripla.
//          E false caso contrario.
//[]-------------------------------------------------------------[]
bool sem_triplas(int v[], int n){
    for(int i = 0; i<n; i++){
        if(v[i]==v[i+1]&&v[i+1]==v[i+2])
            return false;
        else
            return true;

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
   int v[5] = {1,1,2,2,1};

   testar(sem_triplas(v, 5), true);
}

void caso_de_teste02(){
   int v[6] = {1,1,2,2,2,1};

   testar(sem_triplas(v, 6), false);
}

void caso_de_teste03(){
   int v[7] = {1,1,1,2,2,2,1};

   testar(sem_triplas(v, 7), false);
}

void caso_de_teste04(){
   int v[7] = {1,1,2,2,1,2,1};

   testar(sem_triplas(v, 7), true);
}

void caso_de_teste05(){
    int v[3] = {1,2,1};

   testar(sem_triplas(v, 3), true);
}

void caso_de_teste06(){
   int v[3] = {1,1,1};

   testar(sem_triplas(v, 3),false);
}

void caso_de_teste07(){
   int v[2] = {1,1};

   testar(sem_triplas(v, 2), true);
}

void caso_de_teste08(){
   int v[2] = {5,5};

   testar(sem_triplas(v, 2), true);
}

void caso_de_teste09(){
   int v[1] = {2};

   testar(sem_triplas(v, 1), true);
}

void caso_de_teste10(){
   int v[1] = {9};

   testar(sem_triplas(v, 1), true);
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
