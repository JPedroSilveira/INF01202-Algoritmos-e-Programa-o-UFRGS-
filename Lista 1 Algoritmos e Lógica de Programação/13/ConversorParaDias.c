/*Converte a idade de uma pessoa (anos, meses e dias) para dias*/
#include<stdio.h>

int main()
{
    int anos, meses, dias;

    printf("Digite os anos vividos: ");
    scanf("%d", &anos);

    printf("Digite os meses vividos: ");
    scanf("%d", &meses);

    printf("Digite os dias vividos: ");
    scanf("%d", &dias);

    printf("Você viveu um total de %d dias.", (anos * 365)+(meses*30) + dias);

    return 0;
}
