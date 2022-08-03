//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 13/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>
#include<stdlib.h>

//[]-------------------------------------------------------------[]
//   Função: maximo_entre_10_20()
//   Entrada: inteiros a e b
//   Saída: devolve o maior valor que esta no maximo_entre_10_20 10..20
//          inclusive, ou retorne 0 se nenhum estiver nesse
//          maximo_entre_10_20.
//[]-------------------------------------------------------------[]
int maximo_entre_10_20(int a, int b){
    if((a>20||a<10)&&(b<10||b>20))
        return 0;
    else if((a>20||a<10)&&(b>=10&&b<=20))
        return b;
    else if((b>20||b<10)&&(a>=10&&a<=20))
        return a;
    else if(a>b)
        return a;
    else if(b>a)
        return b;
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
   testar(maximo_entre_10_20(11,19), 19);
}

void caso_de_teste02(){
   testar(maximo_entre_10_20(19,11), 19);
}

void caso_de_teste03(){
   testar(maximo_entre_10_20(11,9), 11);
}

void caso_de_teste04(){
   testar(maximo_entre_10_20(9,21), 0);
}

void caso_de_teste05(){
   testar(maximo_entre_10_20(10,21), 10);
}

void caso_de_teste06(){
   testar(maximo_entre_10_20(21,10), 10);
}

void caso_de_teste07(){
   testar(maximo_entre_10_20(9,11), 11);
}

void caso_de_teste08(){
   testar(maximo_entre_10_20(23,10), 10);
}

void caso_de_teste09(){
   testar(maximo_entre_10_20(20, 10), 20);
}

void caso_de_teste10(){
   testar(maximo_entre_10_20(7, 20), 20);
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
