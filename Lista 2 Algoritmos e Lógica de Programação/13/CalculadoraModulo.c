#include <stdio.h>

float GetModulo(float numero);

int main()
{
    float a;

    printf("Informe o valor: ");
    scanf("%f", &a);

    printf("Modulo: %f", GetModulo(a));

    return 0;
}

float GetModulo(float numero){
    if (numero < 0)
        return numero * -1;
    else
        return numero;
}

