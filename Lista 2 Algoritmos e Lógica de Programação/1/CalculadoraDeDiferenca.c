/*Escrever um programa para ler dois valores num�ricos e apresentar a diferen�a do
maior pelo menor*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    int a, b;

    /*Armazena os dados para o calculo*/
    int resultado;

    /*L� os dados de entrada*/
    printf("Digite o valor do primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o valor do segundo numero: ");
    scanf("%d", &b);

    if(a >= b){
        resultado = a - b;
    }else{
        resultado = b - a;
    }

    printf("Resultado: %d", resultado);

    return 0;
}




