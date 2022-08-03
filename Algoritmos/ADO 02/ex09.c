//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex09.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: iguais
//   Entrada: vetor de inteiros v1 e v2, e o tamanho n
//   Saída: devolve true se os vetores sao exatamente iguais
//          devolve false caso contrário.
//[]-------------------------------------------------------------[]
bool iguais(int v1[], int v2[], int n){
    for (int i = 0; i < n; i++)
       if (v1[i] != v2[i])
	       return false;
    return true;
}

//[]-------------------------------------------------------------[]
//   Função: soma_dos_prefixos()
//   Entrada: vetor de inteiros v[] e o seu tamanho n.
//   Saída: vetor de inteiros s[] de tamanho n.
//          Cada elemento de s[] na posição i contém a
//          soma dos prefixos do vetor v[] nessa posição i.
//          Logo, s é definida por:
//          1. s[0] = v[0];
//          2. s[i] = v[i] + v[i-1] + v[i-2] + ... + v[0]
//[]-------------------------------------------------------------[]
void soma_dos_prefixos(int v[], int s[], int n){
    int i = 0;
    if(i==0){
        s[i]=v[i];
        i++;
    }
    while(i<n){
        s[i]=v[i]+s[i-1];
        i++;
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
void caso_de_teste01() {
   int v[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), true);
}

void caso_de_teste02(){
   int v[10] = {2, 7, 6, 4, 5, 9, 8, 7, 10, 12};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {2, 9, 15, 19, 24, 33, 41, 48, 58, 70};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), true);
}

void caso_de_teste03(){
   int v[10] = {12, 15, 65, 45, 57, 91, 82,  7, 13, 14};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), false);
}

void caso_de_teste04(){
   int v[10] = {0, 3, 6, 10, 13, 14, 15, 4, 7, 9};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), false);
}

void caso_de_teste05(){
   int v[10] = {20, 3, 6, 10, 12, 14, 5, 19, 7, 9};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), false);
}

void caso_de_teste06(){
   int v[10] = {1,   8,  7,  3,  2,  5,  4,  9,  6, 0};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), false);
}

void caso_de_teste07(){
   int v[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {10, 30, 60, 100, 150, 210, 280, 360, 450, 550};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), true);
}

void caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,14};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), false);
}

void caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), false);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   int s[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
   int ss[10] = {1, 3, 6, 10, 15, 21, 28, 36, 45, 55};

   soma_dos_prefixos(v, s, 10);

   testar(iguais(s, ss, 10), false);
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
