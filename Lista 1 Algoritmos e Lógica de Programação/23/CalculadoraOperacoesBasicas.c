/*Calcula o sal�rio de um funcion�rio com base no salario/hora e no n�mero de horas trabalhadas*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    float a, b;

    /*L� os dados de entrada*/
    printf("Digite o valor de A: ");
    scanf("%f", &a);

    printf("Digite o valor de B: ");
    scanf("%f", &b);

    printf("\nSoma: %f", a + b);
    printf("\nSubtracao: %f", a - b);
    printf("\nDivisao: %f", a / b);
    printf("\nMultiplicacao: %f", a * b);

    return 0;
}




