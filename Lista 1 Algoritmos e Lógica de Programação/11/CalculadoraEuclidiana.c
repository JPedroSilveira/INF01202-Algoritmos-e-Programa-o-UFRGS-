#include<stdio.h>
#include <math.h>

/*
 Escreva um programa que recebe dois pontos no plano, representados por dois pares de
coordenadas, P1 = (x1,y1) e P2 = (x2,y2) e calcula a distância euclidiana entre eles, dada por
*/
int main()
{
    float distanciaEuclidiana, pontoXUm, pontoYUm, pontoXDois, pontoYDois;

    printf("Digite o ponto X1: ");
    scanf("%f", pontoXUm);

    printf("Digite o ponto X2: ");
    scanf("%f", pontoXDois);

    printf("Digite o ponto Y1: ");
    scanf("%f", pontoYUm);

    printf("Digite o ponto Y2: ");
    scanf("%f", pontoYDois);

    distanciaEuclidiana = sqrt(pow((pontoXUm - pontoXDois), 2) + pow((pontoYUm - pontoYDois), 2));

    printf("Distancia euclidiana: %f.", distanciaEuclidiana);

    return 0;
}
