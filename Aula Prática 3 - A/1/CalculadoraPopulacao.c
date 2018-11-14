/*Calcula a m�dia das popula��es e indica os municipios com mais de 50000 habitantes*/
#include <stdio.h>

int main()
{
    int municipioUm, municipioDois, municipioTres, popUm, popDois, popTres; //Codigo dos municipios e suas popula��es
    float mediaPop; //Media das popula��es

    printf("Entre os codigos dos tres municipios: \n"); //Pega o codigo dos tr�s municipios
    scanf("%d", &municipioUm);
    scanf("%d", &municipioDois);
    scanf("%d", &municipioTres);

    printf("Entre as populacoes dos municipios: \n"); //Pega a popula��o dos tr�s municipios na mesma ordem dos c�digos
    scanf("%d", &popUm);
    scanf("%d", &popDois);
    scanf("%d", &popTres);

    //Verifica quais municipios possuem mais de 50000 habitantes
    if(popUm > 50000){
        printf("\nO municipio de codigo %d possui populacao acima de 50000", municipioUm);
    }
    if(popDois > 50000){
        printf("\nO municipio de codigo %d possui populacao acima de 50000", municipioDois);
    }
    if(popTres > 50000){
        printf("\nO municipio de codigo %d possui populacao acima de 50000", municipioTres);
    }

    //Calcula a m�dia populacional
    mediaPop = (popUm + popDois + popTres)/3.0;
    printf("\nA populacao media dos tres municipios eh %.2f.", mediaPop);

    //Imprime municipios com popula��o menor ou igual a m�dia e municipios com popula��o maior que a m�dia
    if(popUm <= mediaPop){
        printf("\nO municipio de codigo %d possui populacao menor do que ou igual a media.", municipioUm);
    } else {
        printf("\nO municipio de codigo %d possui populacao maior do que a media.", municipioUm);
    }

    if(popDois <= mediaPop){
        printf("\nO municipio de codigo %d possui populacao menor do que ou igual a media.", municipioDois);
    } else {
        printf("\nO municipio de codigo %d possui populacao maior do que a media.", municipioDois);
    }

    if(popTres <= mediaPop){
        printf("\nO municipio de codigo %d possui populacao menor do que ou igual a media.", municipioTres);
    } else {
        printf("\nO municipio de codigo %d possui populacao maior do que a media.", municipioTres);
    }

    return 0;
}
