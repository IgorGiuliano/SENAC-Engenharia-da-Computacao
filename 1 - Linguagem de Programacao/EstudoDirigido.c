/*
 *
 * Autor: Igor Giuliano
 * Data: 05/06/2020
 * 
*/


#include <stdio.h>
#include<string.h>

int main(void) {
    int nr_categorias = 0;
    char nome_categoria[25+1];
    int aux, nr_itens_categoria = 0;

    scanf("%2d", &nr_categorias);

    char descricao[nr_itens_categoria][26];
    double quantidade, auxa, auxb = 0;
    char unidade[4];
    char moeda[3];
    char tipo_de_pagamento[1];
    double valor, valor_total, desconto;

    for (int i=0; i<nr_categorias; i++) {
        scanf("%s %d", nome_categoria, &nr_itens_categoria);
        printf("Categoria: %s\n", nome_categoria);
        for (int j = 0; j < nr_itens_categoria; j++) {
            scanf("%s %lf %s %s %lf", descricao[25], &quantidade, unidade, moeda, &valor);
            printf("\t Descricao= %s | Quantidade = %5.2f | Unidade = %s | Moeda = %s | Valor = %5.2f \n", descricao[25], quantidade, unidade, moeda, valor);

            auxa = quantidade * valor;
            auxb = auxb + auxa;

            if (j + 1 == nr_itens_categoria){
              printf("\t  Total %s: %s %.2lf\n", nome_categoria, moeda, auxb);
            }
        }       

        aux = aux + nr_itens_categoria;
        valor_total = valor_total + auxb;
        auxb = 0;
    }

    printf("\tTotal de itens: %d\n",aux);
    printf("\tValor total: %.2lf\n",valor_total);

    scanf("%lf %s",&desconto, tipo_de_pagamento);
    printf("\tDesconto: %.2lf%%\n",desconto);

    desconto = desconto/100;
    desconto = valor_total*desconto;
    printf("\tValor Desconto: %.2lf\n",desconto);

    valor_total= valor_total-desconto;
    printf("\tValor a pagar: %.2lf\n",valor_total);

    if(0==strcmp("P",tipo_de_pagamento)){
      scanf("%s %lf",moeda,&valor);

      int parcelas = valor_total/valor;
      printf("\tPARCELAS: %d\n",parcelas);

      double valor_parcelas = valor_total/parcelas;
      printf("\tVALOR DA PARCELA: %.2lf\n",valor_parcelas);
    }
}
