//[]--------------------------------------------------------------------------------[]
//      Programador: Igor Giuliano
//
//      Implemente (em linguagem C) uma versão iterativa do algoritmo de busca binária.
//
//[]--------------------------------------------------------------------------------[]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void populaVetor(int quantidade_elementos, int *vetor){
    srand(time(NULL));
    for(int i = 0; i < quantidade_elementos; i++){
        vetor[i] = (int) rand()%100;
    }
}

int buscaBinariaIterativa(int *vetor, int quantidade_elementos, int numero){
    int comeco = 0;
    int fim = quantidade_elementos - 1;

    while(comeco <= fim){
        int i = (comeco + fim) / 2;
        if(vetor[i] == numero){
            return i;
        }

        if(vetor[i] < numero) {
            comeco = i + 1;
        } else {
            fim = i;
        }
    }

    return -1;
}

void bubblesort(int *vetor, int quantidade_elementos){
    for(int ultimo = quantidade_elementos-1; ultimo>0; ultimo--){
        for(int i = 0; i < ultimo; i++){
            if(vetor[i] > vetor[i + 1]){
                int aux = vetor[i];
                vetor[i] = vetor[i + 1];
                vetor[i + 1] = aux;
            }
        }
    }
}

void exibeElementos(int *vetor, int quantidade_elementos){
    for(int i = 0; i < quantidade_elementos; i++){
        printf("%d: %d \n", i, vetor[i]);
    }
}

int main(){
    int quantidade_elementos, numero;

    printf("Digite a quantidade de elementos do vetor:\n");
    scanf("%d", &quantidade_elementos);

    int *vetor = (int *)malloc(sizeof(int) * quantidade_elementos);
    populaVetor(quantidade_elementos, vetor);
    printf("\n");

    bubblesort(vetor, quantidade_elementos);
    exibeElementos();

    printf("Digite o numero que deseja procurar dentro do vetor:\n");
    scanf("%d", &numero);


    int resultado_da_busca = buscaBinariaIterativa(vetor, quantidade_elementos, numero);

    if(resultado_da_busca < 0){
        printf("Numero nao encontrado no vetor.\n");
    }else {
        printf("O numero foi encontrado no elemento: %d\n", resultado_da_busca);
    }

    free(vetor);
}