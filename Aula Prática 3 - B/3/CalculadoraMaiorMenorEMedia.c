/*Lê quatro números inteiros, determina o valor médio, o maior valor e o menos valor informando os dados em tela*/
#include <stdio.h>

int main()
{
    /*Armazenam as leituras*/
    int valUm, valDois, valTres, valQuatro;

    /*Armazena o menor e maior valor*/
    int menorValor, maiorValor;

    /*Armazena a média final*/
    float media;

    /*Lê os valores de entrada*/
    printf("Entre os quatro valores inteiros: \n");

    scanf("%d", &valUm);
    //Salva o primeiro valor como maior e menor
    maiorValor = valUm;
    menorValor = valUm;

    scanf("%d", &valDois);
    if(valDois < menorValor) menorValor = valDois; //Caso o menor valor seja maior que o segundo valor o salva como novo menor valor
    if(valDois > maiorValor) maiorValor = valDois; //Caso o maior valor seja menor que o segundo valor o salva como novo maior valor

    scanf("%d", &valTres);
    if(valTres < menorValor) menorValor = valTres;
    if(valTres > maiorValor) maiorValor = valTres;

    scanf("%d", &valQuatro);
    if(valQuatro < menorValor) menorValor = valQuatro;
    if(valQuatro > maiorValor) maiorValor = valQuatro;


    /*Calcula a média dos inteiros*/
    media = (valUm + valDois + valTres + valQuatro) / 4.0;

    /*Imprime o valor da média*/
    printf("Valor medio: %f", media);

    /*Imprime o maior valor*/
    printf("\nMenor valor: %d", menorValor);

    /*Imprime o menor valor*/
    printf("\nMaior valor: %d", maiorValor);

    return 0;
}
