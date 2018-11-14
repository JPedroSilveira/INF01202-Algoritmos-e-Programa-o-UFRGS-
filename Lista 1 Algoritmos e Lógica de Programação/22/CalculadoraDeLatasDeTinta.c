/*Calcula o número de latas de tinta necessárias e o custo para pintar um determinado número de chapas com base em sua área*/
#include <stdio.h>
#include <math.h>

int main()
{
    /*Armazena os dados de entrada e os resultados*/
    int nChapas, numeroLatasNecessarias;
    float larguraChapas, comprimentoChapas, metrosQuadradosPorLata, valorLataTinta, valorTotal;

    /*Lê os dados de entrada*/
    printf("Digite o numero de chapas: ");
    scanf("%d", &nChapas);

    printf("Digite a largura de cada chapa (em metros): ");
    scanf("%f", &larguraChapas);

    printf("Digite o comprimento de cada chapa (em metros): ");
    scanf("%f", &comprimentoChapas);

    printf("Digite o numero de metros quadrados que podem ser pintadas por lata: ");
    scanf("%f", &metrosQuadradosPorLata);

    printf("Digite o valor da lata de tinta: ");
    scanf("%f", &valorLataTinta);

    /*Calcula o numero de latas necessarias*/
    numeroLatasNecessarias = ceil(((larguraChapas * comprimentoChapas) * nChapas) / metrosQuadradosPorLata);

    /*Calcula o valor total*/
    valorTotal = numeroLatasNecessarias * valorLataTinta;

    printf("Serao necessarias %d latas que custarao %.2f reais.", numeroLatasNecessarias, valorTotal);

    return 0;
}






