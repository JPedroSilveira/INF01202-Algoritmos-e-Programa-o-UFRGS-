#include <stdio.h>

int main()
{
    float notaUm, notaDois, notaTres;

    printf("Informe a primeira nota: ");
    scanf("%f", &notaUm);

    printf("Informe a segunda nota: ");
    scanf("%f", &notaDois);

    printf("Informe a terceira nota: ");
    scanf("%f", &notaTres);

    printf("A media eh de: %.2f", ((notaUm * 2) + (notaDois * 3) + (notaTres * 5)) / 10);

    return 0;
}




