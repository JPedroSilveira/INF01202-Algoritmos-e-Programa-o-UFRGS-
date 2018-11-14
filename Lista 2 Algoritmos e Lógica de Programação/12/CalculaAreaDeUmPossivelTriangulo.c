#include <stdio.h>
#include <math.h>

float GetModulo(float numero);
float CalcularAreaDoTriangulo(float a, float b, float c);

int main()
{
    float a, b, c;

    printf("Informe o valor do primeiro segmento: ");
    scanf("%f", &a);

    printf("Informe o valor do segundo segmento: ");
    scanf("%f", &b);

    printf("Informe o valor do terceiro segmento: ");
    scanf("%f", &c);

    if(GetModulo(b - c) < a && GetModulo(a - c) < b && GetModulo(a - b) < c)
        printf("Area: %f", CalcularAreaDoTriangulo(a, b, c));
    else
        printf("As medidas 1:%f 2:%f 3:%f nao podem formar um triangulo.",a,b,c);

    return 0;
}

float CalcularAreaDoTriangulo(float a, float b, float c){
    float semiPerimetro = (a + b + c)/2;
    return sqrt(semiPerimetro * (semiPerimetro - a) * (semiPerimetro - b) * (semiPerimetro - c));
}

float GetModulo(float numero){
    if (numero < 0)
        return numero * -1;
    else
        return numero;
}

