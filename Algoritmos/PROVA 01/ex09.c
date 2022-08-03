//[]--------------------------------------------------------------[]
//    Nome do arquivo: ex09.c
//    Importante: nao altere o nome do arquivo.
//    Programador: Igor Giuliano
//    Data: 08/10/2020
//[]--------------------------------------------------------------[]
#include<stdio.h>
#include<stdbool.h>

//[]-------------------------------------------------------------[]
//   Função: meus_primos()
//   Entrada: int n
//   Saída:   devolve em p1 o maior primo menor que n
//            devolve em p2 o menor primo maior que n
//
//[]-------------------------------------------------------------[]
int eh_primo(int n){
	int div=0;
	for(int i=1; i<=n;i++){
		if(n%i==0){
			div++;
		}
	}
	if(div==2)
		return 1;
}

void meus_primos(int n, int *p1, int *p2){
	int z = 0;
	for(int i=n;i--;){
		if(eh_primo(i)==1){
			*p1=i;
			break;
		}
	}

	for(int a=n; a++;){
		if(eh_primo(a)==1){
			*p2=a;
			break;
		}
	}
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
   int p1, p2;
   meus_primos(10, &p1, &p2);
   return (testar(p1, 7) + testar(p2, 11))/2.0;
}

float caso_de_teste02(){
   int p1, p2;
   meus_primos(20, &p1, &p2);
   return (testar(p1, 19) + testar(p2, 23))/2.0;
}

float caso_de_teste03(){
   int p1, p2;
   meus_primos(30, &p1, &p2);
   return (testar(p1, 29) + testar(p2, 31))/2.0;
}

float caso_de_teste04(){
   int p1, p2;
   meus_primos(40, &p1, &p2);
   return (testar(p1, 37) + testar(p2, 41))/2.0;
}

float caso_de_teste05(){
   int p1, p2;
   meus_primos(50, &p1, &p2);
   return (testar(p1, 47) + testar(p2, 53))/2.0;
}

float caso_de_teste06(){
   int p1, p2;
   meus_primos(60, &p1, &p2);
   return (testar(p1, 59) + testar(p2, 61))/2.0;
}

float caso_de_teste07(){
   int p1, p2;
   meus_primos(70, &p1, &p2);
   return (testar(p1, 67) + testar(p2, 71))/2.0;
}

float caso_de_teste08(){
   int p1, p2;
   meus_primos(80, &p1, &p2);
   return (testar(p1, 79) + testar(p2, 83))/2.0;
}

float caso_de_teste09(){
   int p1, p2;
   meus_primos(90, &p1, &p2);
   return (testar(p1, 89) + testar(p2, 97))/2.0;
}

float caso_de_teste10(){
   int p1, p2;
   meus_primos(100, &p1, &p2);
   return (testar(p1, 97) + testar(p2, 101))/2.0;
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

   printf("exercicio 09\n");
   printf("sua nota foi: %.2f\n", r/10.0);


	printf("Professor, esta no CODE::BLOCKS da 1.0 e no REPL.IT da 0.6\n");
   return 0;
}
