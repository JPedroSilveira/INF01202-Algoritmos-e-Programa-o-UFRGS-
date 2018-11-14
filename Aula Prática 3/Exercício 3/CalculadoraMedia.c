/*Calcula a média de três números inteiros e verifica quais estão acima e abaixo dela*/
#include <stdio.h>

int main()
{
    float numero[3], media;
    int count = 0;
    /*Lê os números*/
    printf("Entre com os tres valores inteiros: \n");
    scanf("%f", &numero[0]);
    scanf("%f", &numero[1]);
    scanf("%f", &numero[2]);

    /*Calcula a média*/
    media = (numero[0] + numero[1] + numero[2]) / 3;

	for(int x = 0; x < 3; x++){
        if(numero[x] >= media) count++;
	}

    printf("Valores maiores ou iguais a media: %d", count);

    return 0;
}

