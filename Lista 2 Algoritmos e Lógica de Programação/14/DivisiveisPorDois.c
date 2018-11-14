#include <stdio.h>

int main()
{
    /*Armazena os dados de entrada*/
    int numero[4];

    /*Lê os dados de entrada*/
    for(int x = 0; x < 4; x++){
        printf("Digite o %d numero inteiro: ", x+1);
        scanf("%d", &numero[x]);
    }

    printf("\nNumeros divisiveis por 2: ");

    for(int x = 0; x < 4; x++){
        if(numero[x] % 2 == 0) printf("\n%d", numero[x]);
    }

    return 0;
}






