/*Soma os três digitos de um valor inteiro*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    int numero;

    /*Armazena os dados para o calculo*/
    int soma, primeiroDigito, segundoDigito, terceiroDigito;

    /*Lê os dados de entrada*/
    printf("Digite o valor inteiro de tres digitos: ");
    scanf("%d", &numero);

    primeiroDigito = numero * 0.01;
    segundoDigito = (numero * 0.1) - (primeiroDigito * 10);
    terceiroDigito = numero - ((primeiroDigito * 100) + (segundoDigito * 10));
    soma =  primeiroDigito + segundoDigito + terceiroDigito;

    printf("Soma: %d", soma);

    return 0;
}




