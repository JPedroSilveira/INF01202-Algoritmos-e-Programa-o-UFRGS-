/*Calcula a média da cotação do dolar durante três dias*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    /*Armazena os dados de entrada*/
    float cotacao[3];

    /*Armazena a média da cotação*/
    float mediaCotacao;

    /*Faz a contagem de valores abaixo da média*/
    int count = 0;

    /*Lê os dados de entrada*/
    printf("Digite a cotacao no primeiro dia: ");
    scanf("%f", &cotacao[0]);

    printf("Digite a cotacao no segundo dia: ");
    scanf("%f", &cotacao[1]);

    printf("Digite a cotacao no terceiro dia: ");
    scanf("%f", &cotacao[2]);

    if(cotacao[0] == cotacao[1] && cotacao[1] == cotacao[2]){
        printf("Não houve variacao na cotacao.");
    }else{
        mediaCotacao = (cotacao[0] + cotacao[1] + cotacao[2]) / 3;
        for(int x = 0; x < 3; x++){
            if(cotacao[x] < mediaCotacao) count++;
        }
        printf("Houveram %d valores abaixo da media.", count);
    }

    return 0;
}






