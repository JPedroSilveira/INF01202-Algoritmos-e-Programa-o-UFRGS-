/*Calcula o saldo devedor de um consórcio baseado no valor da prestação, no número total de prestações e no número de prestações pagas.*/
int main()
{
    /*Armazena os dados de entrada*/
    int nPrestacoes, nPrestacoesPagas;
    float valorPrestacao, valorAPagar;

    /*Lê os dados de entrada*/
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


