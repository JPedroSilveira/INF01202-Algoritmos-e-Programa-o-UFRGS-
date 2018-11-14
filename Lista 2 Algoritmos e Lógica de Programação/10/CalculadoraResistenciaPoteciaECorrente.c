/*Calcula resistência, diferença potencial e corrente elétrica*/

#include <stdio.h>
#include <math.h>

int main()
{
    /*Armazena os dados de entrada*/
    int opcao;
    float potencia, resistencia, corrente;

    /*Lê os dados de entrada*/
    printf("Opcoes: \n1 - Resistencia\n2 - Diferenca de potencial\n3 - Corrente eletrica");
    printf("\nDigite numero da sua opcao: ");
    scanf("%d", &opcao);

    switch(opcao){
        case 1:
            printf("Digite o diferenca de potencial:");
            scanf("%f", &potencia);
            printf("Digite a corrente eletrica:");
            scanf("%f", &corrente);
            printf("Resistencia: %f", potencia / corrente);
            break;
        case 2:
            printf("Digite a resistencia:");
            scanf("%f", &resistencia);
            printf("Digite a corrente eletrica:");
            scanf("%f", &corrente);
            printf("Diferenca de potencial: %f", resistencia * corrente);
            break;
        case 3:
            printf("Digite o diferenca de potencial:");
            scanf("%f", &potencia);
            printf("Digite a resistencia:");
            scanf("%f", &resistencia);
            printf("Corrente eletrica: %f", potencia / resistencia);
            break;
        default:
            printf("Opcao invalida!");
    }

    return 0;
}





