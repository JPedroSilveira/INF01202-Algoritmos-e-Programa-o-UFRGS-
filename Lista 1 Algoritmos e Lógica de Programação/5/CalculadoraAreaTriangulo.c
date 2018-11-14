#include <stdio.h>

int main()
{
    float base, altura;

    printf("Informe a base: ");
    scanf("%f", &base);

    printf("Informe a altura: ");
    scanf("%f", &altura);

    printf("A area eh: %.2f", (base * altura)/2);

    return 0;
}

