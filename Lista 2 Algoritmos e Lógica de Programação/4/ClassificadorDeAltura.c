/*Calcula a altura média de 3 pessoas e informa quem está abaixo dela*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    /*Armazena os dados de entrada*/
    float altura[4];;

    /*Armazena a média*/
    float mediaAltura;

    /*Armazena número pessoas com algura abaixo da média*/
    int count = 0;

    /*Lê os dados de entrada*/
    printf("Digite a primeira altura: ");
    scanf("%f", &altura[0]);

    printf("Digite a segunda altura: ");
    scanf("%f", &altura[1]);

    printf("Digite a terceira altura: ");
    scanf("%f", &altura[2]);

    printf("Digite a quarta altura: ");
    scanf("%f", &altura[3]);

    mediaAltura = (altura[0] + altura[1] + altura[2] + altura[3]) / 4;

    for(int x = 0; x < 4; x++){
        if(altura[x] < mediaAltura){
            count++;
        }
    }

    printf("%d pessoas estao abaixo da media de altura.", count);

    return 0;
}





