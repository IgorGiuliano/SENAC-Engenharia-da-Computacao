//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex10.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 10/12/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<string.h>
#include<stdbool.h>

#define btoa(x) x ? "true" : "false"


//[]-------------------------------------------------------------[]
//   Função: nenhum_um_ou_nenhum_quatro
//   Entrada: vetor de inteiros v e seu tamanho n.
//   Saída:   Devolva true se v não contém 1's ou se não contém 4's
//
//   Ex.:
//       nenhum_um_ou_nenhum_quatro([1,3,1], 3) = true
//       nenhum_um_ou_nenhum_quatro([1,4,1,4], 4) = false
//       nenhum_um_ou_nenhum_quatro([2,3,4], 3) = true
//
//  obs: este exercicio pode ser iterativo.
//[]-------------------------------------------------------------[]
bool nenhum_um_ou_nenhum_quatro(int v[], int n){
int conta1 = 0;
int conta4 = 0;
   for (int i = 0; i < n; i++){
      if (v[i] == 1)
         conta1++;
      else if (v[i] == 4)
         conta4++;
   }
   if (conta1 > 0 && conta4 > 0)
      return false;
   else
      return true;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(bool obtido, bool esperado){
   float resultado;
   if (obtido == esperado){
	   printf("Parabéns !!!");
           resultado = 1.0;
   } else {
	   printf("Ainda não !!!");
           resultado = 0.0;
   }
   printf(" obtido: %s  esperado: %s\n", btoa(obtido), btoa(esperado));
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int v[3] = {1,3,1};
   return testar(nenhum_um_ou_nenhum_quatro(v, 3), true);
}

float caso_de_teste02(){
   int v[4] = {1,4,1,4};
   return testar(nenhum_um_ou_nenhum_quatro(v, 4), false);
}

float caso_de_teste03(){
   int v[3] = {2,3,4};
   return testar(nenhum_um_ou_nenhum_quatro(v, 3), true);
}

float caso_de_teste04(){
   int v[3] = {1,4,4};
   return testar(nenhum_um_ou_nenhum_quatro(v, 3), false);
}

float caso_de_teste05(){
   int v[3] = {1,1,1};
   return testar(nenhum_um_ou_nenhum_quatro(v, 3), true);
}

float caso_de_teste06(){
   int v[3] = {4,4,4};
   return testar(nenhum_um_ou_nenhum_quatro(v, 3), true);
}

float caso_de_teste07(){
    int v[3] = {4,4,1};
   return testar(nenhum_um_ou_nenhum_quatro(v, 3), false);
}

float caso_de_teste08(){
    int v[3] = {1,2,3};
   return testar(nenhum_um_ou_nenhum_quatro(v ,3), true);
}

float caso_de_teste09(){
    int v[8] = {1,4,1,4,1,4,1,4};
   return testar(nenhum_um_ou_nenhum_quatro(v, 8), false);
}

float caso_de_teste10(){
   int v[8] = {4,4,1,4,1,4,1,4};
   return testar(nenhum_um_ou_nenhum_quatro(v, 8), false);
}



//[]-------------------------------------------------------------[]
//    programa principal
//[]-------------------------------------------------------------[]
int main(){
   float r = 0.0;
   r += caso_de_teste01();
   r += caso_de_teste02();
   r += caso_de_teste03();
   r += caso_de_teste04();
   r += caso_de_teste05();
   r += caso_de_teste06();
   r += caso_de_teste07();
   r += caso_de_teste08();
   r += caso_de_teste09();
   r += caso_de_teste10();

   printf("exercicio 10\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
