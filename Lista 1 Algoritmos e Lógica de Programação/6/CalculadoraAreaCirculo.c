#include <stdio.h>
#include <math.h>

int main()
{
    float raio;

    printf("Informe o raio do circulo: ");
    scanf("%f", &raio);

    printf("A area eh: %.2f", M_PI * pow(raio, 2));

    return 0;
}

