/*L� a precipita��o de tr�s munic�pios classificados por um c�digo, calcula a precipita��o m�dia, classifica com base no valor esperado (105 mm)
e exibe os munic�pios com precipita��o maior que o dobro do esperado.
*/
#include <stdio.h>

int main()
{
    /*Armazena a precipita��o esperada*/
    int precipitacaoEsperada = 105;

    /*Armazenam os valores de entrada e o resultado final*/
    int municipioUm, municipioDois, municipioTres, precUm, precDois, precTres;
    float precMedia;

    /*L� os dados de entrada*/
    printf("Entre os codigos dos tres municipios: \n"); //Pega o codigo dos tr�s municipios
    scanf("%d", &municipioUm);
    scanf("%d", &municipioDois);
    scanf("%d", &municipioTres);

    printf("Entre a precipitacao (em mm) nos municipios: \n"); //Pega a precipita��o dos tr�s municipios na mesma ordem dos c�digos
    scanf("%d", &precUm);
    scanf("%d", &precDois);
    scanf("%d", &precTres);


    /*Calcula e exibe a precipita��o m�dia*/
    precMedia = (precUm + precDois + precTres) / 3.0;
    printf("A precipitacao media nos tres municipios foi de %.2f mm", precMedia);

    /*Imprime municipios com precipita��o menor e maior que o esperado*/
    if(precUm > precipitacaoEsperada){
        printf("\nO municipio de codigo %d teve precipitacao superior ao valor esperado.", municipioUm);
    } else if(precUm < precipitacaoEsperada) {
        printf("\nO municipio de codigo %d teve precipitacao inferior ao valor esperado.", municipioUm);
    }
    if(precDois > precipitacaoEsperada){
        printf("\nO municipio de codigo %d teve precipitacao superior ao valor esperado.", municipioDois);
    } else if(precDois < precipitacaoEsperada) {
        printf("\nO municipio de codigo %d teve precipitacao inferior ao valor esperado.", municipioDois);
    }
    if(precTres > precipitacaoEsperada){
        printf("\nO municipio de codigo %d teve precipitacao superior ao valor esperado.", municipioTres);
    } else if(precTres < precipitacaoEsperada) {
        printf("\nO municipio de codigo %d teve precipitacao inferior ao valor esperado.", municipioTres);
    }

    /*Imprime os municipios com precipita��o 2x maior que a esperada*/
    if(precUm > (precipitacaoEsperada * 2)){
        printf("\nO municipio de codigo %d teve precipitacao mensal muito alta.", municipioUm);
    }
    if(precDois > (precipitacaoEsperada * 2)){
        printf("\nO municipio de codigo %d teve precipitacao mensal muito alta.", municipioDois);
    }
    if(precTres > (precipitacaoEsperada * 2)){
        printf("\nO municipio de codigo %d teve precipitacao mensal muito alta.", municipioTres);
    }


    return 0;
}

