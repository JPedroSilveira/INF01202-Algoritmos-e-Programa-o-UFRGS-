/*Calcula a �rea de um terreno e uma casa baseado nas dimens�es lidas em metros e apresenta a �rea livre do terreno*/
#include<stdio.h>

int main()
{
    /*Armazena os dados de entrada e as �reas*/
    float ladoATerreno, ladoBTerreno, ladoACasa, ladoBCasa, areaTerreno, areaCasa, areaLivre;

    /*L� os dados de entrada*/
    printf("Digite os dois lados do terreno: \n");
    scanf("%f", &ladoATerreno);
    scanf("%f", &ladoBTerreno);

    printf("Digite os dois lados da casa: \n");
    scanf("%f", &ladoACasa);
    scanf("%f", &ladoBCasa);

    /*Calcula as �reas*/
    areaTerreno = ladoATerreno * ladoBTerreno;
    areaCasa = ladoACasa * ladoBCasa;

    areaLivre = areaTerreno - areaCasa;

    printf("O terreno possui %.2f metros livres.", areaLivre);

    return 0;
}
