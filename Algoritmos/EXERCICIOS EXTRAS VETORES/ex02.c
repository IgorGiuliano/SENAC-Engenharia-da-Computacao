//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 03/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

//[]-------------------------------------------------------------[]
//   Função: maior_primo()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída:   devolve o maior número primo do vetor,
//            caso exista, caso contrário devolva 0.
//[]-------------------------------------------------------------[]
bool eh_primo(int n){
    int cont=0;
    for(int i=1;i<=n;i++){
        if(n%i==0)
            cont++;
    }
    if(cont==2)
        return true;
    else
        return false;
}

int maior_primo(int v[], int n){
    int maior_primo = 0;
    for(int i=0; i<n; i++){
        if(eh_primo(v[i])==true && (v[i]>maior_primo)){
            maior_primo = v[i];
        }
    }
    return maior_primo;
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
   int v[6] = {1,2,3,4,5,6};
   testar(maior_primo(v, 6), 5);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,2};
   testar(maior_primo(v, 10), 7);
}

void caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   testar(maior_primo(v, 10), 13);
}

void caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   testar(maior_primo(v, 7), 0);
}

void caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   testar(maior_primo(v, 6), 17);
}

void caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,0};
   testar(maior_primo(v, 10), 7);
}

void caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,30};
   testar(maior_primo(v, 10), 19);
}

void caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,14};
   testar(maior_primo(v, 10), 47);
}

void caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   testar(maior_primo(v, 10), 37);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   testar(maior_primo(v, 10), 47);
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
