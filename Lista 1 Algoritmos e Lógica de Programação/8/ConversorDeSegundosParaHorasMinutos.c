#include <stdio.h>

int main()
{
    int horas, minutos, segundos;

    printf("Informe os segundos: ");
    scanf("%d", &segundos);

    horas = segundos/3600;
    minutos  = (segundos % 3600)/60;
    segundos = (segundos % 3600)%60;

    printf("Resultado: Horas: %d, Minutos: %d, Segundos: %d", horas, minutos, segundos);

    return 0;
}


