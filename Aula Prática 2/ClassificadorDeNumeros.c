#include <stdio.h>
#include <string.h>

int main()
{
    int numero;
    char grupo[1];

    printf("Informe um numero: ");
    scanf("%d", &numero);

    if(numero%2 == 0){
        if(numero >= 0){
            strcpy(grupo, "A");
        } else {
            strcpy(grupo, "B");
        }
    } else {
        if(numero >= 0){
            strcpy(grupo, "C");
        } else {
            strcpy(grupo, "D");
        }
    }

    printf("O numero eh do grupo %s", grupo);

    return 0;
}
