/*
Lê dois valores, armazene um na variável A e o outro na variável B, e
troque os valores, de modo que o valor da variável A seja armazenado na variável B e vice-versa.
*/

#include<stdio.h>

int main()
{
    int a,b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Valor de A: %d.", a);
    printf("\nValor de B: %d.", b);

    return 0;
}
