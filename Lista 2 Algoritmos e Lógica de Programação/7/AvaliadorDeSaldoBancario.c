/*Avalia o saldo banc�rio em Negativo ou Normal*/

#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    float saldo;
    int numeroConta;

    /*L� os dados de entrada*/
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





