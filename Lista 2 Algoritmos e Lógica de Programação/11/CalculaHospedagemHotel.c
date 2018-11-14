/*Lê o número de dias que o cliente ficou hospedado e calcula o preço beaseado em uma diária de R$50.00 e uma taxa de serviços que
varia conforme a quantidade de dias.
Para menos de 15 dias R$ 1.5, para 15 dias R$ 1.0 e para mais de 15 dias R$0.5*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    int numeroDias;

    /*Salva o total a pagar e a taxa diaria*/
    float valorTotal = 50, taxaDiaria;

    /*Lê os dados de entrada*/
    printf("Digite a quantidade de dias hospedado: ");
    scanf("%d", &numeroDias);

    if(numeroDias < 15){
        taxaDiaria = 1.5;
    }else if(numeroDias == 15){
        taxaDiaria = 1;
    }else{
        taxaDiaria = 0.5;
    }

    valorTotal += taxaDiaria * numeroDias;
    printf("Total a pagar: R$%.2f ", valorTotal);

    return 0;
}





