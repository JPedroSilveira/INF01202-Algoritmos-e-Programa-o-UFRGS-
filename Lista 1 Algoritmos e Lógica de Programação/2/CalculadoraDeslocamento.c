#include <stdio.h>

int main()
{
    float velocidadeKmPorH, tempoEmHoras, deslocamento;

    printf("Informe a velocidade em Km/h: ");
    scanf("%f", &velocidadeKmPorH);

    printf("Informe o tempo em horas: ");
    scanf("%f", &tempoEmHoras);

    deslocamento = velocidadeKmPorH * tempoEmHoras;

    printf("O deslocamento do automovel foi de %.2f Km", deslocamento);

    return 0;
}
