/*Calcula a área de um terreno e uma casa baseado nas dimensões lidas em metros e apresenta a área livre do terreno*/
#include<stdio.h>

int main()
{
    /*Armazena os dados de entrada e as áreas*/
    float ladoATerreno, ladoBTerreno, ladoACasa, ladoBCasa, areaTerreno, areaCasa, areaLivre;

    /*Lê os dados de entrada*/
    printf("Digite os dois lados do terreno: \n");
    scanf("%f", &ladoATerreno);
    scanf("%f", &ladoBTerreno);

    printf("Digite os dois lados da casa: \n");
    scanf("%f", &ladoACasa);
    scanf("%f", &ladoBCasa);

    /*Calcula as áreas*/
    areaTerreno = ladoATerreno * ladoBTerreno;
    areaCasa = ladoACasa * ladoBCasa;

    areaLivre = areaTerreno - areaCasa;

    printf("O terreno possui %.2f metros livres.", areaLivre);

    return 0;
}
