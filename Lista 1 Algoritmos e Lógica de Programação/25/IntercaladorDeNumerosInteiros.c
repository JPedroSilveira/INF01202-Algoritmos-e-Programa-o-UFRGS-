/*Recebe dois números inteiros de 3 digitos e forma um número de 6 digitos contendo os digitos dos dois primeiros numeros intercalados*/

#include <stdio.h>
#include <math.h>

int main()
{
    /*Armazena os dados de entrada*/
    int a, b;

    /*Armazena os dados para o calculo*/
    int resultado, primeiroDigitoA, segundoDigitoA, terceiroDigitoA, primeiroDigitoB, segundoDigitoB, terceiroDigitoB;

    /*Lê os dados de entrada*/
    printf("Digite o valor do primeiro numero de 3 digitos: ");
    scanf("%d", &a);

    printf("Digite o valor do segundo numero de 3 digitos: ");
    scanf("%d", &b);

    primeiroDigitoA = a * 0.01;
    segundoDigitoA = (a * 0.1) - (primeiroDigitoA * 10);
    terceiroDigitoA = a - ((primeiroDigitoA * 100) + (segundoDigitoA * 10));

    primeiroDigitoB = b * 0.01;
    segundoDigitoB = (b * 0.1) - (primeiroDigitoB * 10);
    terceiroDigitoB = b - ((primeiroDigitoB * 100) + (segundoDigitoB * 10));

    resultado = (primeiroDigitoA * pow(10, 5)) + (primeiroDigitoB * pow(10, 4)) + (segundoDigitoA * pow(10, 3)) + (segundoDigitoB * pow(10, 2)) + (terceiroDigitoA * 10) + terceiroDigitoB;

    printf("Resultado: %d", resultado);

    return 0;
}




