/*Lê um valor e gera outros 10 aleatórios, ao final informa o valor aleatório gerado mais próximo ao valor passado*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>
#define NUM_VALORES 10
#define NUM_MINIMO 0
#define NUM_MAXIMO 100
int main()
{
    srand(time(NULL));
    float valor[10], valorTeste, menorDistancia = 0, valorMaisProximo;

    printf("Valores aleatorios do arranjo: ");
    for (int x = 0; x < NUM_VALORES; x++)
    {
        valor[x] = NUM_MINIMO + ((float)rand()/RAND_MAX)*(NUM_MAXIMO-NUM_MINIMO);
        printf("%.1f", valor[x]);
        if(x != NUM_VALORES - 1){ printf(", "); } else {printf("."); };
    }

    printf("\nInforme o valor de teste: ");
    scanf("%f", &valorTeste);

    menorDistancia = abs(valorTeste - valor[0]);

    valorMaisProximo = valor[0];

    for (int x = 1; x < NUM_VALORES; x++)
    {
        if(abs(valorTeste - valor[x]) < menorDistancia){
            valorMaisProximo = valor[x];
            menorDistancia = abs(valorTeste - valor[x]);
        }
    }

    printf("O valor mais proximo eh %.1f.", valorMaisProximo);
}


