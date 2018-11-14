/*Ordena a altura de três pessoas por ordem crescente*/
#include <stdio.h>

int main()
{
    float altura[3], temp;
    int indiceMenorAltura, count = 0;

    /*Lê as alturas*/
    printf("Entre as tres alturas: \n");
    scanf("%f", &altura[0]);
    scanf("%f", &altura[1]);
    scanf("%f", &altura[2]);

    while(count <= 2){
        for(int x = 1; x < 4; x++){
            if(altura[x] < altura[x-1]){
                temp = altura[x-1];
                altura[x-1] = altura[x];
                altura[x-1] = temp;
            }
        }
        count++;
    }

    printf("Alturas em ordem: %f %f %f", altura[0], altura[1], altura[2]);

    return 0;
}

