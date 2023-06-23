//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdlib.h>

//[]-------------------------------------------------------------[]
//   Função: diferenca21()
//   Entrada: inteiro n
//   Saída: devolve a diferenca absoluta entre n e 21
//          se n for maior que 21 devolve o dobro da
//          diferenca absoluta
//  Exemplo:
//          diferenca21(19) -> 2
//          diferenca21(25) -> 8
//  dica: abs(x) devolve o valor absoluto de x
//[]-------------------------------------------------------------[]
int diferenca21(int n){
    if(n > 21)
        return 2*abs(n-21);
    else
        return abs(n-21);
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
   testar(diferenca21(19), 2);
}

void caso_de_teste02(){
   testar(diferenca21(10), 11);
}

void caso_de_teste03(){
   testar(diferenca21(21), 0);
}

void caso_de_teste04(){
   testar(diferenca21(22), 2);
}

void caso_de_teste05(){
   testar(diferenca21(25), 8);
}

void caso_de_teste06(){
   testar(diferenca21(30), 18);
}

void caso_de_teste07(){
   testar(diferenca21(3), 18);
}

void caso_de_teste08(){
   testar(diferenca21(5), 16);
}

void caso_de_teste09(){
   testar(diferenca21(1), 20);
}

void caso_de_teste10(){
   testar(diferenca21(42), 42);
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
