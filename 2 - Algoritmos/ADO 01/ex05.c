//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex05.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdlib.h>

//[]-------------------------------------------------------------[]
//   Função: proximo10()
//   Entrada: inteiros a, b
//   Saída: devolve o valor mais proximo de 10,
//          devolve 0 em caso de empate.
//[]-------------------------------------------------------------[]
int proximo10(int a, int b){
    int c = abs(10-a);
    int d = abs(10-b);
    if(c<d)
        return a;
    else if(d<c)
        return b;
    else
        return 0;
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
   testar(proximo10(8, 13), 8);
}

void caso_de_teste02(){
   testar(proximo10(13, 8), 8);
}

void caso_de_teste03(){
   testar(proximo10(13, 7), 0);
}

void caso_de_teste04(){
   testar(proximo10(7, 13), 0);
}

void caso_de_teste05(){
   testar(proximo10(9, 13), 9);
}

void caso_de_teste06(){
   testar(proximo10(10, 12), 10);
}

void caso_de_teste07(){
   testar(proximo10(11, 10), 10);
}

void caso_de_teste08(){
   testar(proximo10(5, 21), 5);
}

void caso_de_teste09(){
   testar(proximo10(0, 20), 0);
}

void caso_de_teste10(){
   testar(proximo10(10, 10), 0);
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
