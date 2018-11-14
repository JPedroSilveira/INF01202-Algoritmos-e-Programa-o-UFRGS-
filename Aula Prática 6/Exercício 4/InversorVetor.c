/*Recebe N número, e forma duas lista, sendo uma invertida*/

#include <stdio.h>
#define N 5

int main()
{
    int valor[N], valorReverso[N], contadorReverso = N-1, contador = 0;

    for (contador = 0; contador < N; contador++)
    {
        printf("Informe um digito: ");
        scanf("%d", &valor[contador]);
        valorReverso[contadorReverso] = valor[contador];
        contadorReverso--;
    }

    printf("\nArranjo original: ");
    for (contador = 0; contador < N; contador++)
    {
        printf("%d", valor[contador]);
        if(contador != N - 1){ printf(", "); } else {printf("."); };
    }
    printf("\nArranjo invertido: ");
    for (contador = 0; contador < N; contador++)
    {
        printf("%d", valorReverso[contador]);
        if(contador != N - 1){ printf(", "); } else {printf("."); };
    }
}
