// Programador: Igor Giuliano
// Data: 29/10/2020

#include <stdio.h>

int busca_binaria_while(int v[], int n, int x){
    int meio;
    int inicio = 0;
    int fim = n-1;

    while(inicio<=fim){
        meio = (inicio + fim)/2;
        //  1. verificar se x � igual ao elemento do meio
        //  1.1. se verdadeira devolva o indice deste elemento (m)
        if(x == v[meio]){
            return meio;
        }else{
            //  2 caso contrario verificar se x � menor que o meio
            //  2.1. se verdadeiro repita o processo para elementos menores que o meio
            if(x < v[meio]){
                fim = meio - 1;
            }else{
                //  2.2. caso contrario repita o processo para elementos maiores que o meio
                inicio = meio + 1;
            }
        }
    }

    return -1;
}

int busca_binaria_for(int v[], int n, int x){
    int meio;
    for(int inicio = 0, fim = n - 1; inicio<=fim; ){
        meio = (inicio + fim)/2;
        //  1. verificar se x � igual ao elemento do meio
        //  1.1. se verdadeira devolva o indice deste elemento (m)
        if(x == v[meio]){
            return meio;
        }else{
            //  2 caso contrario verificar se x � menor que o meio
            //  2.1. se verdadeiro repita o processo para elementos menores que o meio
            if(x < v[meio]){
                fim = meio - 1;
            }else{
                //  2.2. caso contrario repita o processo para elementos maiores que o meio
                inicio = meio + 1;
            }
        }
    }

    return -1;

}

int main(void){
    int N = 13;
    int v[10] = {1,3,4,5,8,9,10,11,13,15};      //  declara��o do vetor
    int k = busca_binaria_while(v, 10, N);
    int p = busca_binaria_for(v, 10, N);
    printf("Resultado da busca: \%d\n",k);
    printf("Resultado da busca: \%d\n",p);
    return 0;
}
