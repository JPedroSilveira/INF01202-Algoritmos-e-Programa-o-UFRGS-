/*Calcula a m�dia de tr�s n�meros inteiros e verifica quais est�o acima e abaixo dela*/
#include <stdio.h>

int main()
{
    float numero[3], media;
    int count = 0;
    /*L� os n�meros*/
    printf("Entre com os tres valores inteiros: \n");
    scanf("%f", &numero[0]);
    scanf("%f", &numero[1]);
    scanf("%f", &numero[2]);

    /*Calcula a m�dia*/
    media = (numero[0] + numero[1] + numero[2]) / 3;

	for(int x = 0; x < 3; x++){
        if(numero[x] >= media) count++;
	}

    printf("Valores maiores ou iguais a media: %d", count);

    return 0;
}

