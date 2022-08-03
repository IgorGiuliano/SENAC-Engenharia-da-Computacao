//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 27/08/2020
//[]--------------------------------------------------------------[]

#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: sequencia_66_67()
//   Entrada: vetor v de inteiros e o tamanho n.
//   Saída: devolve o numero de vezes que dois 6's
//          aparecem um do lado do outro. Conte também
//          os casos em que um 6 eh seguido de 7.
//[]-------------------------------------------------------------[]
int sequencia_66_67(int v[], int n){
    int cont = 0;
    int armazena;
    for(int i=0; i<n; i++){
        if(v[i] == 6 && v[i+1] == 6)
            cont=cont+1;
        else if(v[i] == 6 && v[i+1] == 7)
            cont=cont+1;
    }
    return cont;
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
   printf(" obtido: %d esperado: %d\n", obtido, esperado);
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   int v[3] = {6,6,2};

   testar(sequencia_66_67(v, 3), 1);
}

void caso_de_teste02(){
   int v[4] = {6,6,2,6};

   testar(sequencia_66_67(v, 4), 1);
}

void caso_de_teste03(){
   int v[4] = {6,7,2,6};

   testar(sequencia_66_67(v, 4), 1);
}

void caso_de_teste04(){
   int v[5] = {6,7,2,6,7};

   testar(sequencia_66_67(v, 5), 2);
}

void caso_de_teste05(){
    int v[3] = {1,6,3};

   testar(sequencia_66_67(v, 3), 0);
}

void caso_de_teste06(){
   int v[3] = {6,1,1};

   testar(sequencia_66_67(v, 3),0);
}

void caso_de_teste07(){
   int v[4] = {3,6,7,6};

   testar(sequencia_66_67(v, 4), 1);
}

void caso_de_teste08(){
   int v[4] = {3,6,6,7};

   testar(sequencia_66_67(v, 4), 2);
}

void caso_de_teste09(){
   int v[4] = {6,3,6,6};

   testar(sequencia_66_67(v, 4), 1);
}

void caso_de_teste10(){
   int v[4] = {6,7,6,6};

   testar(sequencia_66_67(v, 4), 2);
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
