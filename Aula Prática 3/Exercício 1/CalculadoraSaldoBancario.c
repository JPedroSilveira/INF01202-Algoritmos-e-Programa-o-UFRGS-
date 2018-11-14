/*Lê o saldo inicial e calcula operações bancárias sobre ele*/
#include <stdio.h>

int main()
{
    float saldo, valorOperacao;
	int codigoOperacao;

    /*Lê o saldo*/
    printf("Informe o saldo inicial da conta: ");
    scanf("%f", &saldo);

	/*Lê a operação*/
	printf("Qual operacao deseja realizar? (0 = Saque - 1 = Deposito): ");
    scanf("%d", &codigoOperacao);

    /*Realiza as operações, atualizando o saldo e o exibindo em tela*/
    printf("Entre o valor da operacao (em reais): ");
    scanf("%f", &valorOperacao);

    switch(codigoOperacao){
		case 0:
			saldo -= valorOperacao;
            printf("Saldo final: %.2f", saldo);
            if(saldo < 0) printf("\nSeu saldo esta negativo!.", saldo);
			break;
		case 1:
			saldo += valorOperacao;
            printf("Saldo final: %.2f", saldo);
            if(saldo < 0) printf("\nSeu saldo esta negativo!.", saldo);
			break;
		default:
			printf("Opcao invalida!");
	}

    return 0;
}
