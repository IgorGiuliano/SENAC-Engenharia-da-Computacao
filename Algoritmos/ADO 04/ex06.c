#include<stdio.h>
#include<assert.h>

//    Programador: Igor Giuliano
//    Data: 29/09/2020

//[]-------------------------------------------------------------[]
//   Função: trocar()
//   Entrada: variaveis apontadas por a e b
//   Saída:   a e b com os valores trocados
//[]-------------------------------------------------------------[]
void trocar(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(int obtido, int esperado){
   if (obtido == esperado)
	   printf("Parabens !!!");
   else
	   printf("Ainda nao !!!");
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   assert(obtido == esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int n1 = 10;
   int n2 = 20;
   trocar(&n1, &n2);
   testar(n1, 20);
   testar(n2, 10);
}

void caso_de_teste02(){
   int v1[5] = {1,2,3,4,5};
   trocar(v1, (v1 + 4));
   testar(v1[0], 5);
   testar(*(v1 + 4), 1);
}


void caso_de_teste03(){
   int n1 = 5;
   int n2 = 6;
   trocar(&n1, &n2);
   testar(n1, 6);
   testar(n2, 5);
}


void caso_de_teste04(){
   int n1 = 3;
   int n2 = 4;
   trocar(&n1, &n2);
   testar(n1, 4);
   testar(n2, 3);
}


void caso_de_teste05(){
   int n1 = 7;
   int n2 = 8;
   trocar(&n1, &n2);
   testar(n1, 8);
   testar(n2, 7);
}


void caso_de_teste06(){
   int n1 = 4;
   int n2 = 2;
   trocar(&n1, &n2);
   testar(n1, 2);
   testar(n2, 4);
}


void caso_de_teste07(){
   int v1[5] = {1,2,3,4,5};
   trocar((v1 + 1), (v1 + 3));
   testar(v1[1], 4);
   testar(*(v1 + 3), 2);
}


void caso_de_teste08(){
   int n1 = 8;
   int n2 = 4;
   trocar(&n1, &n2);
   testar(n1, 4);
   testar(n2, 8);
}


void caso_de_teste09(){
   int n1 = 4;
   int n2 = 0;
   trocar(&n1, &n2);
   testar(n1, 0);
   testar(n2, 4);
}


void caso_de_teste10(){
   int n1 = 17;
   int n2 = 20;
   trocar(&n1, &n2);
   testar(n1, 20);
   testar(n2, 17);
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
