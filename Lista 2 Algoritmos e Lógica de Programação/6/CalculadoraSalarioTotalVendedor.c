/*Calcula o sal�rio total de um vendedor com base em seu sal�rio fixo e comiss�o por valor em vendas*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada e o salario total*/
    int codigo;
    float salarioFixo, salarioTotal, valorVendas, comissao;

    /*L� os dados de entrada*/
    printf("Digite o numero do vendedor: ");
    scanf("%d", &codigo);

    printf("Digite o salario fixo: ");
    scanf("%f", &salarioFixo);

    printf("Digite o valor total em vendas: ");
    scanf("%f", &valorVendas);

    if(valorVendas <= 1000000){
        comissao = 0.03; //Comissao de 3%
    }else{
        comissao = 0.05; //Comissao de 5%
    }

    salarioTotal = salarioFixo + (valorVendas * comissao);
    printf("O salario total do vendedor numero %d eh: %.2f", codigo, salarioTotal);

    return 0;
}





