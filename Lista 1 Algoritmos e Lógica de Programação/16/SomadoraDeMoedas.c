/*Recebe como entrada uma quantidade de moedas de cada tipo e retorna o valor total*/
int main()
{
    /*Armazena os dados de entrada*/
    int umR, cinquentaC, vinteCincoC, dezC, cincoC;

    /*Armazena o valor total*/
    float valorTotal;

    /*Lê os dados de entrada*/
    printf("Digite o numero de moedas de 1 real: ");
    scanf("%d", &umR);

    printf("Digite o numero de moedas de 50 centavos: ");
    scanf("%d", &cinquentaC);

    printf("Digite o numero de moedas de 25 centavos: ");
    scanf("%d", &vinteCincoC);

    printf("Digite o numero de moedas de 10 centavos: ");
    scanf("%d", &dezC);

    printf("Digite o numero de moedas de 5 centavos: ");
    scanf("%d", &cincoC);

    /*Calcula o valor total*/
    valorTotal = umR + (cinquentaC * 0.5) + (vinteCincoC * 0.25) + (dezC * 0.1) + (cincoC * 0.05);

    printf("O valor total eh de: %.2f reais.", valorTotal);

    return 0;
}

