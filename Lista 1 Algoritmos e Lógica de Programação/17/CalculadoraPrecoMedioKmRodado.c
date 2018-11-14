/*Calcula o preço médio do quilometro rodado baseado em uma distância percorrida, a quantidade de livros consumida para tal e o preço do combustível.*/
int main()
{
    /*Armazena os dados de entrada*/
    float distanciaPercorrida, volumeUtilizado, precoLitro, mediaLitroPorKm;

    /*Lê os dados de entrada*/
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distanciaPercorrida);

    printf("Digite o combustivel utilizado (em litros): ");
    scanf("%f", &volumeUtilizado);

    printf("Digite o valor do livro do combustivel (em reais): ");
    scanf("%f", &precoLitro);

    /*Calcula o preço médio do quilômetro rodado*/
    mediaLitroPorKm = volumeUtilizado/distanciaPercorrida;

    printf("O gasto do veiculo eh de aproximadamente %.2f reais por quilometro.", precoLitro * mediaLitroPorKm);

    return 0;
}


