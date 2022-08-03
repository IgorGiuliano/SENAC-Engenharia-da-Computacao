//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex01.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 03/09/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"

//[]-------------------------------------------------------------[]
//   Função: tem_tres_numeros_iguais()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída:   devolve true se existe algum numero que
//            aparece exatamente 3 vezes no vetor
//            devolve falso caso contrario
//[]-------------------------------------------------------------[]
bool tem_tres_numeros_iguais(int v[], int n){
    for(int i=0; i<n; i++){
        int cont=0;
        for(int j=0; j<n; j++){
            if(v[i]==v[j])
                cont++;
        }
        if(cont==3)
            return true;
    }
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
   int v[6] = {1,2,3,4,5,6};
   testar(tem_tres_numeros_iguais(v, 6), false);
}

void caso_de_teste02(){
   int v[10] = {2,7,6,4,2,9,8,7,10,2};
   testar(tem_tres_numeros_iguais(v, 10), true);
}

void caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   testar(tem_tres_numeros_iguais(v, 10), false);
}

void caso_de_teste04(){
   int v[7] = {21,20,49,20,57,20,22};
   testar(tem_tres_numeros_iguais(v, 7), true);
}

void caso_de_teste05(){
   int v[6] = {14,2,15,4,14,18};
   testar(tem_tres_numeros_iguais(v, 6), false);
}

void caso_de_teste06(){
   int v[10] = {1,1,1,1,1,1,4,9,6,0};
   testar(tem_tres_numeros_iguais(v, 10), false);
}

void caso_de_teste07(){
   int v[10] = {2,18,2,33,2,15,24,19,26,30};
   testar(tem_tres_numeros_iguais(v, 10), true);
}

void caso_de_teste08(){
   int v[10] = {12,28,47,13,26,12,4,29,16,12};
   testar(tem_tres_numeros_iguais(v, 10), true);
}

void caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   testar(tem_tres_numeros_iguais(v, 10), false);
}

void caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   testar(tem_tres_numeros_iguais(v, 10), false);
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
