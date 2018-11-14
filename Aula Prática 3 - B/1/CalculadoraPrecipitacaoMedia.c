/*Lê a precipitação de três municípios classificados por um código, calcula a precipitação média, classifica com base no valor esperado (105 mm)
e exibe os municípios com precipitação maior que o dobro do esperado.
*/
#include <stdio.h>

int main()
{
    /*Armazena a precipitação esperada*/
    int precipitacaoEsperada = 105;

    /*Armazenam os valores de entrada e o resultado final*/
    int municipioUm, municipioDois, municipioTres, precUm, precDois, precTres;
    float precMedia;

    /*Lê os dados de entrada*/
    printf("Entre os codigos dos tres municipios: \n"); //Pega o codigo dos três municipios
    scanf("%d", &municipioUm);
    scanf("%d", &municipioDois);
    scanf("%d", &municipioTres);

    printf("Entre a precipitacao (em mm) nos municipios: \n"); //Pega a precipitação dos três municipios na mesma ordem dos códigos
    scanf("%d", &precUm);
    scanf("%d", &precDois);
    scanf("%d", &precTres);


    /*Calcula e exibe a precipitação média*/
    precMedia = (precUm + precDois + precTres) / 3.0;
    printf("A precipitacao media nos tres municipios foi de %.2f mm", precMedia);

    /*Imprime municipios com precipitação menor e maior que o esperado*/
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

    /*Imprime os municipios com precipitação 2x maior que a esperada*/
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

