//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex07.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 16/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(v) (v)?"true":"false"


//[]-------------------------------------------------------------[]
//   Função: inverte_string()
//   Entrada: string s[]
//   Saída:   devolve a string s invertida
//      ex:
//          entrada: "o pato pateta"
//          saida:   "atetap otap o"
//[]-------------------------------------------------------------[]
void inverte_string(char s[]){
    int i,len;
    len = strlen(s)-1;
    char auxiliar[len];
    for(i=0;s[i]!='\0';i++){
        auxiliar[len]=s[i];
        len--;
    }
    auxiliar[i]='\0';
    strcpy(s,auxiliar);
    return s;
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
   char s[50] = "rato";
   inverte_string(s);
   testar(!strcmp(s, "otar"), true);
}

void caso_de_teste02(){
   char s[50] = "banana";
   inverte_string(s);
   testar(!strcmp(s, "ananab"), true);
}

void caso_de_teste03(){
   char s[50] = "chocolate";
   inverte_string(s);
   testar(!strcmp(s, "etalocohc"), true);
}

void caso_de_teste04(){
   char s[50] = "feijao";
   inverte_string(s);
   testar(!strcmp(s, "oajief"), true);
}

void caso_de_teste05(){
   char s[50] = "maravilhas";
   inverte_string(s);
   testar(!strcmp(s, "sahlivaram"), true);
}

void caso_de_teste06(){
   char s[50] = "bela";
   inverte_string(s);
   testar(!strcmp(s, "aleb"), true);
}

void caso_de_teste07(){
   char s[10] = "e";
   inverte_string(s);
   testar(!strcmp(s, "e"), true);
}

void caso_de_teste08(){
   char s[10] = "";
   inverte_string(s);
   testar(!strcmp(s, ""), true);
}

void caso_de_teste09(){
   char s[10] = "ah e";
   inverte_string(s);
   testar(!strcmp(s, "e ha"), true);
}

void caso_de_teste10(){
   char s[50] = "onibus";
   inverte_string(s);
   testar(!strcmp(s, "subino"), true);
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
