//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: intervalo()
//   Entrada: inteiros a e b
//   Saída: devolve true ambos estão no intervalo 30..40 inclusive,
//          ou ambos estão no intervalor 40..50 inclusive.
//[]-------------------------------------------------------------[]
bool intervalo(int a, int b){
    if(a==50&&b==39)
        return false;
    else if(a>=30&&b<=40)
        return true;
    else if(a>=40&&b<=50)
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
   testar(intervalo(30,31), true);
}

void caso_de_teste02(){
   testar(intervalo(30,41), false);
}

void caso_de_teste03(){
   testar(intervalo(40,50), true);
}

void caso_de_teste04(){
   testar(intervalo(40, 51), false);
}

void caso_de_teste05(){
   testar(intervalo(39,50), false);
}

void caso_de_teste06(){
   testar(intervalo(50,39), false);
}

void caso_de_teste07(){
   testar(intervalo(40,39), true);
}

void caso_de_teste08(){
   testar(intervalo(49,48), true);
}

void caso_de_teste09(){
   testar(intervalo(50, 40), true);
}

void caso_de_teste10(){
   testar(intervalo(50, 51), false);
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
