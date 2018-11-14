/*Avalia o saldo bancário em Negativo ou Normal*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    float saldo;
    int numeroConta;

    /*Lê os dados de entrada*/
    printf("Digite o numero da conta: ");
    scanf("%d", &numeroConta);

    printf("Digite o saldo: ");
    scanf("%f", &saldo);

    if(saldo < 0){
        printf("CONTA %d NEGATIVA.", numeroConta);
    }else{
        printf("CONTA %d NORMAL.", numeroConta);
    }

    return 0;
}





