//Calcula a menor dist�ncia Euclidiana entre N pontos
#include <stdio.h>
#include <math.h>
#define NPONTOS 3

int main()
{
    float abscissas[NPONTOS], ordenadas[NPONTOS], xo, yo, menor_distancia, distancia_euclidiana;

    /*L� o ponto de interesse inicial*/
    printf("Informe a coordenada x do ponto de interesse:");
    scanf("%f", &xo);
    printf("Informe a coordenada y do ponto de interesse:");
    scanf("%f", &yo);

    /*L� NPONTOS e calcula as dist�ncias*/
    for(int count = 0; count < NPONTOS; count++)
    {
        printf("\nInforme a coordenada x do ponto %d:", count + 1);
        scanf("%f", &abscissas[count]);
        printf("Informe a coordenada y do ponto %d:", count + 1);
        scanf("%f", &ordenadas[count]);

        /*Calcula a dist�ncia euclidiana e verifica se ela � a menor at� o momento*/
        distancia_euclidiana = sqrt(pow(xo - abscissas[count], 2) + pow(yo - ordenadas[count], 2));

        /*Grava a primeira dist�ncia como menor*/
        if(count == 0) menor_distancia = distancia_euclidiana;

        if(distancia_euclidiana < menor_distancia)
        {
            menor_distancia = distancia_euclidiana;
        }
    }

    /*Exibe o resultado com a menor dist�ncia*/
    printf("\nA menor distancia Euclidiana encontrada eh %.2f.", menor_distancia);

    return 0;
}
