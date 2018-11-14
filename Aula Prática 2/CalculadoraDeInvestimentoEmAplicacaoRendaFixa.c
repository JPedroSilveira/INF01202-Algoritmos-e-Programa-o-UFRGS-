#include <stdio.h>
#include <math.h>

int main()
{
    float valorInvestido, rendimentoMensal, montanteFinal;
    int meses;

    printf("Informe o valor a ser investido(R$): ");
    scanf("%f", &valorInvestido);

    printf("Informe o rendimento mensal da aplicacao: ");
    scanf("%f", &rendimentoMensal);

    printf("Informe o numero de meses da aplicacao: ");
    scanf("%d", &meses);

    montanteFinal = pow(rendimentoMensal/100 + 1, meses) * valorInvestido;

    printf("O montante ao final do periodo sera de: %4.2f reais", montanteFinal);

    return 0;
}
