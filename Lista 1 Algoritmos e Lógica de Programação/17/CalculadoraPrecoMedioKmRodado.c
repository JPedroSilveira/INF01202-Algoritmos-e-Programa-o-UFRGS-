/*Calcula o pre�o m�dio do quilometro rodado baseado em uma dist�ncia percorrida, a quantidade de livros consumida para tal e o pre�o do combust�vel.*/
int main()
{
    /*Armazena os dados de entrada*/
    float distanciaPercorrida, volumeUtilizado, precoLitro, mediaLitroPorKm;

    /*L� os dados de entrada*/
    printf("Digite a distancia percorrida (em km): ");
    scanf("%f", &distanciaPercorrida);

    printf("Digite o combustivel utilizado (em litros): ");
    scanf("%f", &volumeUtilizado);

    printf("Digite o valor do livro do combustivel (em reais): ");
    scanf("%f", &precoLitro);

    /*Calcula o pre�o m�dio do quil�metro rodado*/
    mediaLitroPorKm = volumeUtilizado/distanciaPercorrida;

    printf("O gasto do veiculo eh de aproximadamente %.2f reais por quilometro.", precoLitro * mediaLitroPorKm);

    return 0;
}


