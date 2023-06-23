//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex06.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 16/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"


//[]-------------------------------------------------------------[]
//   Função: tem_vogais()
//   Entrada: string s[]
//   Saída:   devolve true se existem vogais
//            devolve falso caso contrario
//[]-------------------------------------------------------------[]
bool tem_vogais(char s[]){
    int contador=0;
    for(int i=0;s[i]!='\0';i++){
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
            contador++;
    }
    if(contador>0)
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
   char s[10] = "abcde";
   testar(tem_vogais(s), true);
}

void caso_de_teste02(){
   char s[10] = "bcdfgh";
   testar(tem_vogais(s), false);
}

void caso_de_teste03(){
   char s[10] = "aeiou";
   testar(tem_vogais(s), true);
}

void caso_de_teste04(){
   char s[10] = "myxplkt";
   testar(tem_vogais(s), false);
}

void caso_de_teste05(){
   char s[10] = "xyzxxffa";
   testar(tem_vogais(s), true);
}

void caso_de_teste06(){
   char s[10] = "lmnpqt";
   testar(tem_vogais(s), false);
}

void caso_de_teste07(){
   char s[10] = "e";
   testar(tem_vogais(s), true);
}

void caso_de_teste08(){
   char s[10] = "f";
   testar(tem_vogais(s), false);
}

void caso_de_teste09(){
   char s[10] = "";
   testar(tem_vogais(s), false);
}

void caso_de_teste10(){
   char s[10] = "yioppoapl";
   testar(tem_vogais(s), true);
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
