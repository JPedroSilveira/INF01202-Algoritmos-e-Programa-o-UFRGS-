/*Calcula a média de preço de três produtos, compara com um preço de referencia e informa os valores abaixo da média ou do preço de referencia (o maior entre os dois)*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    float preco[3], precoReferencia;

    /*Armazena a média de preços dos três produtos*/
    float mediaPrecos;

    /*Lê os dados de entrada*/
    printf("Digite o valor do produto um: ");
    scanf("%f", &preco[0]);

    printf("Digite o valor do produto dois: ");
    scanf("%f", &preco[1]);

    printf("Digite o valor do produto tres: ");
    scanf("%f", &preco[2]);

    printf("Digite o valor referencia: ");
    scanf("%f", &precoReferencia);

    mediaPrecos = (preco[0] + preco[1] + preco[2]) / 3;

    if(mediaPrecos < precoReferencia) precoReferencia = mediaPrecos;

    printf("Valores inferiores:");
    for(int x = 0; x < 3; x++){
        if(preco[x] < precoReferencia)  printf("\nR$ %.2f.", preco[x]);
    }

    return 0;
}





