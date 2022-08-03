//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex02.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>

//[]-------------------------------------------------------------[]
//   Função: soma_dos_primos()
//   Entrada: vetor de inteiros v[] e o seu tamanho n
//   Saída:   devolve a soma dos primos que estão no vetor
//[]-------------------------------------------------------------[]
int soma_dos_primos(int v[], int n){
	int aux = 0;
	for(int i=0; i<n; i++){
		int num = 0;
		int div = 0;
		for(int j=1; j<=v[i];j++){
			if(v[i]%j==0)
				div++;
		}
		if(div==2)
			aux = aux + v[i];
	}
   return aux;
}


//[]-------------------------------------------------------------[]
//   Função: testar()
//   Entrada: valor obtido da funcao, valor esperado
//   Saída: ok se obtido igual a esperado e nao ok caso contrario
//[]-------------------------------------------------------------[]
float testar(int obtido, int esperado){
   float resultado;
   if (obtido == esperado){
	   printf("Parabéns !!!");
           resultado = 1.0;
   } else {
	   printf("Ainda não !!!");
           resultado = 0.0;
   }
   printf(" obtido: %d  esperado: %d\n", obtido, esperado);
   return resultado;
}

//[]-------------------------------------------------------------[]
//    Casos de testes
//[]-------------------------------------------------------------[]
float caso_de_teste01(){
   int v[6] = {1,2,3,4,5,6};
   return testar(soma_dos_primos(v, 6), 10);
}

float caso_de_teste02(){
   int v[10] = {2,7,6,4,5,9,8,7,10,2};
   return testar(soma_dos_primos(v, 10), 23);
}

float caso_de_teste03(){
   int v[10] = {12,15,65,45,57,91,82,7,13,12};
   return testar(soma_dos_primos(v, 10), 20);
}

float caso_de_teste04(){
   int v[7] = {21,20,49,28,57,20,22};
   return testar(soma_dos_primos(v, 7), 0);
}

float caso_de_teste05(){
   int v[6] = {17,2,15,4,14,18};
   return testar(soma_dos_primos(v, 6), 19);
}

float caso_de_teste06(){
   int v[10] = {1,8,7,3,2,5,4,9,6,0};
   return testar(soma_dos_primos(v, 10), 17);
}

float caso_de_teste07(){
   int v[10] = {2,18,27,33,2,15,24,19,26,30};
   return testar(soma_dos_primos(v, 10), 23);
}

float caso_de_teste08(){
   int v[10] = {32,28,47,13,26,12,4,29,16,14};
   return testar(soma_dos_primos(v, 10), 89);
}

float caso_de_teste09(){
   int v[10] = {32,28,21,37,29,25,22,29,17,24};
   return testar(soma_dos_primos(v, 10), 112);
}

float caso_de_teste10(){
   int v[10] = {41,28,47,27,29,35,26,39,46,32};
   return testar(soma_dos_primos(v, 10), 117);
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

   printf("exercicio 02\n");
   printf("sua nota foi: %.2f\n", r/10.0);
   return 0;
}
