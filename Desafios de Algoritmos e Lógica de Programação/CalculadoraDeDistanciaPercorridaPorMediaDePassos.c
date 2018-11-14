/*Calcula a dist�ncia percorrida atr�ves da m�dia de passos, obtida apartir do n�mero de passos dados
em dois pontos distintos da corrida (primeiro e �ltimo minuto), e o tempo de corrida,
dado em horas e minutos.
Este programa estima que cada passo percorre 70cm
Entrada: numeroPassosPrimeiroMinuto (inteiro), numeroPassosUltimoMinuto (inteiro), horasCorridas (inteiro), minutosCorridos (inteiro)
Sa�da: distanciaMediaPercorridaEmKm (inteiro)*/
#include <stdio.h>

double CalculaMediaInteiros(int val1, int val2);

int ConverteHorasEmMinutos(int horas);

const float SetentaCentimetrosEmKm = 0.0007;

int main()
{
    int numeroPassosPrimeiroMinuto, numeroPassosUltimoMinuto, horasCorridas, minutosCorridos;
    double numeroMedioPassosPorMinuto, distanciaMediaPercorridaEmKm;

    printf("Informe o numero de passos dados no primeiro minuto: ");
    scanf("%d", &numeroPassosPrimeiroMinuto);

    printf("Informe o numero de passos dados no ultimo minuto: ");
    scanf("%d", &numeroPassosUltimoMinuto);

    printf("Informe o numero de horas: ");
    scanf("%d", &horasCorridas);

    printf("Informe o n�mero de minutos: ");
    scanf("%d", &minutosCorridos);

    numeroMedioPassosPorMinuto = CalculaMediaInteiros(numeroPassosPrimeiroMinuto, numeroPassosUltimoMinuto);

    distanciaMediaPercorridaEmKm = numeroMedioPassosPorMinuto * SetentaCentimetrosEmKm * (ConverteHorasEmMinutos(horasCorridas) + minutosCorridos);

    printf("Total percorrido %.2lfkm.", distanciaMediaPercorridaEmKm);
}

double CalculaMediaInteiros(int val1, int val2)
{
    return (val1 + val2) /2;
}

int ConverteHorasEmMinutos(int horas)
{
    return horas * 60;
}
