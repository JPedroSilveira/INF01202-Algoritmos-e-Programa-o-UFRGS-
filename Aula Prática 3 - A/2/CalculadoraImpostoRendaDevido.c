/*Calcula o imposto de renda devido com base na renda, porcentual do imposto e no valor retido na fonte*/
#include <stdio.h>

int main()
{
    /*Armazenam os valores de entrada e o resultado final*/
    float rendaAnual, percentualImposto, impostoRetido, totalASerPago;

    /*Lê os dados de entrada*/
    printf("Entre o percentual de imposto (em percentual): ");
    scanf("%f", &percentualImposto);

    printf("Entre a renda anual: ");
    scanf("%f", &rendaAnual);

    printf("Entre o imposto retido na fonte: ");
    scanf("%f", &impostoRetido);

    /*Calcula o que deve ser pago e subtrai o que foi retido na fonte*/
    totalASerPago = (rendaAnual * (percentualImposto/100)) - impostoRetido;

    /*Imprime o resultado em tela*/
    printf("Imposto a ser pago: R$ %.2f", totalASerPago);

    return 0;
}
