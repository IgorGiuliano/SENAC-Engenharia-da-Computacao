// Programador: Igor Giuliano
// Data: 10/12/2020

#include <stdio.h>

void trocar(int v[], int i, int j){
    int aux = v[i];
    v[i]= v[j];
    v[j]= aux;
}

void bubblesort(int v[], int n){
    for(int last=n-1; last>0; last--){
        for(int i=0;i<last;i++){
            if(v[i]>v[i+1]){
                trocar(v,i,i+1);
            }
        }
    }

}

int main(void){
    int v[10] = {1006,3764,4484,5,8234,29,10,1,113,1145};      //  declara��o do vetor
    bubblesort(v, 10);
    for(int i = 0; i<10; i++){
        printf("%d\n",v[i]);
    }
    return 0;
}
