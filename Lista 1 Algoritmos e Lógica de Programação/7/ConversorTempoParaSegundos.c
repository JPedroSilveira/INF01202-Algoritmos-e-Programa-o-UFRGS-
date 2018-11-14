#include <stdio.h>

int main()
{
    int horas, minutos, segundos;

    printf("Informe as horas: ");
    scanf("%d", &horas);

    printf("Informe os minutos: ");
    scanf("%d", &minutos);

    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    printf("O tempo em segundos eh: %d", (horas * 3600) + (minutos * 60) + segundos);

    return 0;
}

