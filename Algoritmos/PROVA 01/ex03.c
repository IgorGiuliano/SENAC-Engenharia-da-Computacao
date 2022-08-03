//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex03.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: troca()
//   Entrada: string s
//   Saída: se s tiver tamanho <= 1 retorna ela mesma
//          caso contrário troca a primeira e a última letra
//[]-------------------------------------------------------------[]
void troca(char s[]){
    int t=0;
    for(int i=0; s[i]!='\0'; i++)
        t++;
    if(t>1){
        char n[1];
        n[0] = s[0];
        s[0]=s[t-1];
        s[t-1]= n[0];
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
   char s[10] = "code";
   troca(s);
   testar(strcmp(s,"eodc") == 0, true);
}

void caso_de_teste02(){
   char s[10] = "a";
   troca(s);
   testar(strcmp(s,"a") == 0, true);
}

void caso_de_teste03(){
   char s[10] = "ab";
   troca(s);
   testar(strcmp(s,"ba") == 0, true);
}

void caso_de_teste04(){
   char s[10] = "abc";
   troca(s);
   testar(strcmp(s,"cba") == 0, true);
}

void caso_de_teste05(){
   char s[10] = "";
   troca(s);
   testar(strcmp(s,"") == 0, true);
}

void caso_de_teste06(){
   char s[10] = "Banana";
   troca(s);
   testar(strcmp(s,"aananB") == 0, true);
}

void caso_de_teste07(){
   char s[10] = "Pera";
   troca(s);
   testar(strcmp(s,"aerP") == 0, true);
}

void caso_de_teste08(){
   char s[10] = "Morango";
   troca(s);
   testar(strcmp(s,"oorangM") == 0, true);
}

void caso_de_teste09(){
   char s[10] = "Uva";
   troca(s);
   testar(strcmp(s,"avU") == 0, true);
}

void caso_de_teste10(){
   char s[10] = "Jaca";
   troca(s);
   testar(strcmp(s,"aacJ") == 0, true);
}



//[]-------------------------------------------------------------[]
//    programa principal
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
