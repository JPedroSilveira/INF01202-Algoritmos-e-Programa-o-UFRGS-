/*L� o saldo inicial e calcula opera��es banc�rias sobre ele*/
#include <stdio.h>

int main()
{
    float saldo, valorOperacao;
	int codigoOperacao;

    /*L� o saldo*/
    printf("Informe o saldo inicial da conta: ");
    scanf("%f", &saldo);

	/*L� a opera��o*/
	printf("Qual operacao deseja realizar? (0 = Saque - 1 = Deposito): ");
    scanf("%d", &codigoOperacao);

    /*Realiza as opera��es, atualizando o saldo e o exibindo em tela*/
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
