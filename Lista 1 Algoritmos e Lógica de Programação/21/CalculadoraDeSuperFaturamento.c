/*Calcula o número de casas possíveis de serem construidas com uma verba de 10.000.000,00 levando em conta que cada casa
custa 150 salários mínimos e o valor do salário mínimo é repassado pelo usuário*/
#include <stdio.h>
int main()
{
    /*Armazena os dados de entrada e o número de casas possíveis */
    int nCasas, nSalarioMinimosPorCasa = 150;
    float valorSalarioMinimo, totalVerbaParaConstrucao = 10000000.00;

    /*Lê os dados de entrada*/
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &valorSalarioMinimo);

    /*Calcula o número de casas*/
    nCasas = (totalVerbaParaConstrucao / valorSalarioMinimo) / nSalarioMinimosPorCasa;

    printf("Poderao ser construidas %d casas.", nCasas);

    return 0;
}





