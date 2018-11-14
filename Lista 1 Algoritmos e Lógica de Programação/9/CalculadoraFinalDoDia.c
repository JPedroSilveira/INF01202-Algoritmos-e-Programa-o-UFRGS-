#include <stdio.h>

int main()
{
    int horasPassadas, minutosPassados, segundosPassados, totalSegundosDia = 86400;

    printf("Informe as horas passadas: ");
    scanf("%d", &horasPassadas);

    printf("Informe os minutos passados: ");
    scanf("%d", &minutosPassados);

    printf("Informe os segundos passados: ");
    scanf("%d", &segundosPassados);

    segundosPassados += (horasPassadas * 3600) + (minutosPassados * 60);

    printf("Faltam %d segundo(s) para o final do dia", totalSegundosDia - segundosPassados);

    return 0;
}



