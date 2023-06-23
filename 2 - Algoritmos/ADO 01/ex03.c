//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex03.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"
//[]-------------------------------------------------------------[]
//   Função: dez()
//   Entrada: inteiros a e b
//   Saída: devolve true se um dos dois e 10 ou
//          a soma e dez
//[]-------------------------------------------------------------[]
bool dez(int a, int b){
    if(a==10||b==10)
        return true;
    else if(a+b==10)
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
   testar(dez(9,10), true);
}

void caso_de_teste02(){
   testar(dez(9,9), false);
}

void caso_de_teste03(){
   testar(dez(1,9), true);
}

void caso_de_teste04(){
   testar(dez(10, 1), true);
}

void caso_de_teste05(){
   testar(dez(10,10), true);
}

void caso_de_teste06(){
   testar(dez(8,2), true);
}

void caso_de_teste07(){
   testar(dez(8,3), false);
}

void caso_de_teste08(){
   testar(dez(10,42), true);
}

void caso_de_teste09(){
   testar(dez(10, 42), true);
}

void caso_de_teste10(){
   testar(dez(12, -2), true);
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
