#include <stdio.h>
#include <math.h>

float GetModulo(float numero);
void ClassificaTrianguloEMostraResultado(float a, float b, float c);

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
        ClassificaTrianguloEMostraResultado(a, b, c);
    else
        printf("As medidas nao podem formar um triangulo.");

    return 0;
}

void ClassificaTrianguloEMostraResultado(float a, float b, float c){
    if(a == b && b == c)
        printf("O triangulo eh equilatero.");
    else if(a == b || b == c || c == a)
        printf("O triangulo eh isosceles.");
    else
        printf("O triangulo eh escaleno.");
}

float GetModulo(float numero){
    if (numero < 0)
        return numero * -1;
    else
        return numero;
}

