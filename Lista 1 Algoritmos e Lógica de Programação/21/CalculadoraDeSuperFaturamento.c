/*Calcula o n�mero de casas poss�veis de serem construidas com uma verba de 10.000.000,00 levando em conta que cada casa
custa 150 sal�rios m�nimos e o valor do sal�rio m�nimo � repassado pelo usu�rio*/
#include <stdio.h>
int main()
{
    /*Armazena os dados de entrada e o n�mero de casas poss�veis */
    int nCasas, nSalarioMinimosPorCasa = 150;
    float valorSalarioMinimo, totalVerbaParaConstrucao = 10000000.00;

    /*L� os dados de entrada*/
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &valorSalarioMinimo);

    /*Calcula o n�mero de casas*/
    nCasas = (totalVerbaParaConstrucao / valorSalarioMinimo) / nSalarioMinimosPorCasa;

    printf("Poderao ser construidas %d casas.", nCasas);

    return 0;
}





