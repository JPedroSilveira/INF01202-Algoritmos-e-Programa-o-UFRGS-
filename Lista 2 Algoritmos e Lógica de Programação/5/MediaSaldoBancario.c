/*Calcula a media do saldo bancário de três clientes e diz quais estão acima da média*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    /*Armazena os dados de entrada*/
    int codigo[3];
    float saldo[3];

    /*Armazena a média*/
    float mediaSaldo;

    /*Lê os dados de entrada*/
    printf("Digite o codigo do primeiro cliente: ");
    scanf("%d", &codigo[0]);

    printf("Digite o saldo: ");
    scanf("%f", &saldo[0]);

    printf("Digite o codigo do segundo cliente: ");
    scanf("%d", &codigo[1]);

    printf("Digite o saldo: ");
    scanf("%f", &saldo[1]);

    printf("Digite o codigo do terceiro cliente: ");
    scanf("%d", &codigo[2]);

    printf("Digite o saldo: ");
    scanf("%f", &saldo[2]);

    mediaSaldo = (saldo[0] + saldo[1] + saldo[2]) / 3;

    printf("Clientes com saldo superior a media (codigo - saldo): ");
    for(int x = 0; x < 3; x++){
        if(saldo[x] > mediaSaldo){
            printf("\n%d - R$%.2f", codigo[x], saldo[x]);
        }
    }

    return 0;
}






