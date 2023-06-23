//[]--------------------------------------------------------------------------------[]
//      Programador: Igor Giuliano
//
//      Implemente (em linguagem C) um algoritmo recursivo que encontre o
//      máximo de um vetor de inteiros.
//
//[]--------------------------------------------------------------------------------[]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populaVetor(int Num, int *Vetor) {
    srand(time(NULL));
    for (int i = 0; i < Num; i++) {
        Vetor[i] = (int) rand() % 100;
    }
}

int maiorElemento(int v[], int tam, int indice){
    if(tam == 0)
        return v[indice];
    else{
        if(v[tam - 1] > v[indice])
        return maiorElemento(v, tam - 1, tam - 1);
        else
        return maiorElemento(v, tam - 1, indice);
    }
}

int main(int argc, char *argv[]) {
    int Num;
    printf("Digite a quantidade de elementos do vetor: \n");

    scanf("%d", &Num);
    int *Vet = (int *)malloc(sizeof(int) * Num);
    populaVetor(Num, Vet);
    printf("\n");
    for (int i = 0; i < Num; i++) {
        printf("%d\n",Vet[i]);
    }

    printf("O maior elemento do vetor de %d elementos e: %d \n", Num, maiorElemento(Vet,Num,0));
}