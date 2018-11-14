/*Calcula o salário de um funcionário com base no salario/hora e no número de horas trabalhadas*/
int main()
{
    /*Armazena os dados de entrada e o total a pagar*/
    int nHorasTrabalhadas;
    float salarioPorHora, valorAPagar;

    /*Lê os dados de entrada*/
    printf("Digite o numero total de horas trabalhadas: ");
    scanf("%d", &nHorasTrabalhadas);

    printf("Digite o valor pago por hora: ");
    scanf("%f", &salarioPorHora);

    /*Calcula o valor que ainda falta pagar*/
    valorAPagar = nHorasTrabalhadas * salarioPorHora;

    printf("Salario total: R$ %.2f.", valorAPagar);

    return 0;
}



