/*Calcula o saldo devedor de um cons�rcio baseado no valor da presta��o, no n�mero total de presta��es e no n�mero de presta��es pagas.*/
int main()
{
    /*Armazena os dados de entrada*/
    int nPrestacoes, nPrestacoesPagas;
    float valorPrestacao, valorAPagar;

    /*L� os dados de entrada*/
    printf("Digite o numero total de prestacoes: ");
    scanf("%d", &nPrestacoes);

    printf("Digite o numero de prestacoes pagas: ");
    scanf("%d", &nPrestacoesPagas);

    printf("Digite o valor atual da prestacao: ");
    scanf("%f", &valorPrestacao);

    /*Calcula o valor que ainda falta pagar*/
    valorAPagar = (nPrestacoes - nPrestacoesPagas) * valorPrestacao;

    printf("Saldo devedor atual: R$ %.2f.", valorAPagar);

    return 0;
}


