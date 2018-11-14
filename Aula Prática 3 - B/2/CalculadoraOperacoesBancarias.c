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
    scanf("%f", &codigoOperacao);

    /*Realiza as opera��es, atualizando o saldo e o exibindo em tela*/
    printf("Entre o valor da operacao (em reais): ");
    scanf("%f", &valorOperacao);

    switch(codigoOperacao){
		case 1:
			saldo -= valorOperacao;
			break;
		case 2:
			saldo += valorOperacao;
			break;
		default:
			printf("Opcao invalida!");
	}
	printf("Saldo final: %f", saldo);
    if(saldo < 0) printf("Seu saldo esta negativo!.", saldo);

    return 0;
}
