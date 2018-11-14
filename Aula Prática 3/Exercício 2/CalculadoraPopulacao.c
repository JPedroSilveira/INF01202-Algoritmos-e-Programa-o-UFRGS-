/*Calcula a m�dia das popula��es e indica os municipios com popula��o acima e abaixo da m�dia*/
#include <stdio.h>

int main()
{
    int municipioUm, municipioDois, municipioTres, popUm, popDois, popTres; //Codigo dos municipios e suas popula��es
    float mediaPop; //Media das popula��es

    printf("Informe o identificador e a populacao do primeiro municipio:\n");
    scanf("%d", &municipioUm);
    scanf("%d", &popUm);

    printf("Informe o identificador e a populacao do segundo municipio:\n");
    scanf("%d", &municipioDois);
    scanf("%d", &popDois);

    printf("Informe o identificador e a populacao do terceiro municipio:\n");
    scanf("%d", &municipioTres);
    scanf("%d", &popTres);

    //Calcula a m�dia populacional
    mediaPop = (popUm + popDois + popTres)/3.0;
    printf("\nA populacao media dos tres municipios eh %.2f.", mediaPop);

    printf("\nMunicipios com populacao maior ou igual a media: \n");

    if(popUm >= mediaPop){
        printf("%d ", municipioUm);
    }

    if(popDois >= mediaPop){
        printf("%d ", municipioDois);
    }

    if(popTres >= mediaPop){
        printf("%d ", municipioTres);
    }

    printf("\nMunicipios com populacao menor que a media: \n");
    if(popUm < mediaPop){
        printf("%d ", municipioUm);
    }

    if(popDois < mediaPop){
        printf("%d ", municipioDois);
    }

    if(popTres < mediaPop){
        printf("\%d ", municipioTres);
    }

    return 0;
}
