#include<stdio.h>
#include<math.h>
#include<assert.h>

//    Programador: Igor Giuliano
//    Data: 29/09/2020

//[]-------------------------------------------------------------[]
//   Função: raizes()
//   Entrada: termos da equação de segundo grau (a, b, c)
//   Saída:
//       valor de retorno: número de raízes reais e distintas da
//                         equação
//                         Se existirem raizes rais, seus valores
//                         devem ser armazenados nas variáveis
//                         apontadas por x1 e x2.
//[]-------------------------------------------------------------[]
int raizes(float a, float b, float c, float *x1, float *x2){
    float delta=(b*b)-(4*a*c);
    if(delta>=0){
        *x1=(-b+sqrt(delta))/(2*a);
        *x2=(-b-sqrt(delta))/(2*a);
    }else return 0;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
void testar(float obtido, float esperado){
   if (fabs(obtido - esperado) < 0.0001)
	   printf("Parabens !!!");
   else
	   printf("Ainda nao !!!");
   printf(" obtido: %f  esperado: %f\n", obtido, esperado);

}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
void caso_de_teste01(){
   float raiz1, raiz2;
   int n;
   n = raizes(3,14,2, &raiz1, &raiz2);
   if (n > 0) {
      testar(raiz1, -0.147520);
      testar(raiz2, -4.519146);
   }
}

void caso_de_teste02(){
   float raiz1, raiz2;
   int n;
   n = raizes(6,4,2, &raiz1, &raiz2);
   if (n == 0){
      testar(n, 0);
   }
}



void caso_de_teste03(){
   float raiz1, raiz2;
   int n;
   n = raizes(1,4,1, &raiz1, &raiz2);
   if (n > 0) {
      testar(raiz1, -0.267949);
      testar(raiz2, -3.732051);
   }
}


void caso_de_teste04(){
   float raiz1, raiz2;
   int n;
   n = raizes(2,5,1, &raiz1, &raiz2);
   printf("n = %d\n", n);
   if (n > 0) {
      testar(raiz1, -0.219224);
      testar(raiz2, -2.280777);
   }
}

void caso_de_teste05(){
   float raiz1, raiz2;
   int n;
   n = raizes(2,6,1, &raiz1, &raiz2);
   printf("n = %d\n", n);
   if (n > 0) {
      testar(raiz1, -0.177124);
      testar(raiz2, -2.822876);
   }
}


void caso_de_teste06(){
   float raiz1, raiz2;
   int n;
   n = raizes(1,8,2, &raiz1, &raiz2);
   printf("n = %d\n", n);
   if (n > 0) {
      testar(raiz1, -0.258343);
      testar(raiz2, -7.741657);
   }
}


void caso_de_teste07(){
   float raiz1, raiz2;
   int n;
   n = raizes(3,9,2, &raiz1, &raiz2);
   printf("n = %d\n", n);
   if (n > 0) {
      testar(raiz1, -0.241694);
      testar(raiz2, -2.758306);
   }
}


void caso_de_teste08(){
   float raiz1, raiz2;
   int n;
   n = raizes(3,7,4, &raiz1, &raiz2);
   printf("n = %d\n", n);
   if (n > 0) {
      testar(raiz1, -1.000000);
      testar(raiz2, -1.333333);
   }
}



void caso_de_teste09(){
   float raiz1, raiz2;
   int n;
   n = raizes(1,7,4, &raiz1, &raiz2);
   printf("n = %d\n", n);
   if (n > 0) {
      testar(raiz1, -0.627719);
      testar(raiz2, -6.372282);
   }
}



void caso_de_teste10(){
   float raiz1, raiz2;
   int n;
   n = raizes(1,3,4, &raiz1, &raiz2);
   printf("n = %d\n", n);
   testar (n, 0);
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
