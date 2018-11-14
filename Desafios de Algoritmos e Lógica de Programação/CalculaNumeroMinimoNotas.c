#include <stdio.h>

int main()
{
    int valor_inteiro;
    int notas[7] = {100, 50, 20, 10, 5, 2, 1};

    printf("Informe o valor inteiro: ");
    scanf("%d", &valor_inteiro);

    for(int x = 0; x < (int)sizeof(notas); x++){
        printf("Notas de %d: %d \n", notas[x], valor_inteiro/notas[x]);
        valor_inteiro = valor_inteiro%notas[x];
    }

    return 0;
}
