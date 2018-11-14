/*Calcula o sal�rio de um funcion�rio com base no seu sal�rio fixo, comiss�o fixa e comiss�o sobre valor da venda*/
#include <stdio.h>
int main()
{
    /*Armazena os dados de entrada e o sal�rio total*/
    int nVendedor, nCarrosVendidos;
    float valorTotalVendas, salarioFixo, comissaoFixa, salarioMensal;

    /*L� os dados de entrada*/
    printf("Digite o numero do vendedor: ");
    scanf("%d", &nVendedor);

    printf("Digite o numero de carros vendidos: ");
    scanf("%d", &nCarrosVendidos);

    printf("Digite o valor total de vendas (em reais): ");
    scanf("%f", &valorTotalVendas);

    printf("Digite o salario fixo do vendedor (em reais): ");
    scanf("%f", &salarioFixo);

    printf("Digite a comissao fixa do vendedor (em reais): ");
    scanf("%f", &comissaoFixa);

    /*Calcula o sal�rio do m�s do vendedor*/
    salarioMensal = salarioFixo + (nCarrosVendidos * comissaoFixa) + (valorTotalVendas * 0.05);

    printf("Salario total do vendedor numero %d: R$ %.2f.", nVendedor, salarioMensal);

    return 0;
}




