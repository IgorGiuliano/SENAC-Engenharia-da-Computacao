//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]


#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: soma_dobro()
//   Entrada: inteiros a e b
//   Saída: devolve a soma entre a e b,
//          porem se os numeros forem iguais
//          devolve o dobro da soma
//[]-------------------------------------------------------------[]
int soma_dobro(int a, int b){
    if(a==b)
        return 2*(a+b);
    else
        return a+b;

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
   testar(soma_dobro(1, 2), 3);
}

void caso_de_teste02(){
   testar(soma_dobro(3, 2), 5);
}

void caso_de_teste03(){
   testar(soma_dobro(2, 2), 8);
}

void caso_de_teste04(){
   testar(soma_dobro(-1, 0), -1);
}

void caso_de_teste05(){
   testar(soma_dobro(0, 0), 0);
}

void caso_de_teste06(){
   testar(soma_dobro(0, 1), 1);
}

void caso_de_teste07(){
   testar(soma_dobro(3, 3), 12);
}

void caso_de_teste08(){
   testar(soma_dobro(3, 4), 7);
}

void caso_de_teste09(){
   testar(soma_dobro(4, 5), 9);
}

void caso_de_teste10(){
   testar(soma_dobro(5, 5), 20);
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
