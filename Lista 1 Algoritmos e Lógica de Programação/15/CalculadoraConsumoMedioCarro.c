/*Calcula o consumo médio de combustivel de um carro baseado em uma distância percorrida e o volume de combustivel utilizado para tal*/
int main()
{
    /*Armazena os dados de entrada e a media final*/
    float distanciaPercorrida, volumeUtilizado, mediaCombustivel;

    /*Lê os dados de entrada*/
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distanciaPercorrida);

    printf("Digite o combustivel utilizadl (em litros): ");
    scanf("%f", &volumeUtilizado);

    /*Calcula a média*/
    mediaCombustivel = distanciaPercorrida/volumeUtilizado;

    printf("O carro consome em media %.2f Km/l.", mediaCombustivel);

    return 0;
}
