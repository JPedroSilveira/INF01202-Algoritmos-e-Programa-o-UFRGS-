#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, x;

    printf("Informe o valor de a: ");
    scanf("%f", &a);

    printf("Informe o valor de b: ");
    scanf("%f", &b);

    printf("Informe o valor de c: ");
    scanf("%f", &c);

    printf("Informe o valor de x: ");
    scanf("%f", &x);

    x = (a * pow(x, 2)) + (b * x) + c;

    printf("O resultado do calculo eh: %f", x);

    return 0;
}
