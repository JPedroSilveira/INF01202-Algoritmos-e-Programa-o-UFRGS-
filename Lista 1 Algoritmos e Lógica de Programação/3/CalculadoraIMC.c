#include <stdio.h>
#include <math.h>

int main()
{
    float altura, peso, imc;

    printf("Informe a altura (em m): ");
    scanf("%f", &altura);

    printf("Informe o peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    printf("O IMC eh: %f", imc);

    return 0;
}
