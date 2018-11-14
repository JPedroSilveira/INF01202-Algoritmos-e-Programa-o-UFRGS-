/*Ordena uma lista de N elementos por ordem crescente*/

#include <stdio.h>
#define N 5

int main()
{
    int valor[N], contador = 0, posicaoMenorValor, variavelTemporaria, indiceAtual = 0, encontrouValorMenor = 0;

    for (contador = 0; contador < N; contador++)
    {
        printf("Informe um digito: ");
        scanf("%d", &valor[contador]);
    }

    do{
        posicaoMenorValor = indiceAtual;

        for (contador = indiceAtual; contador < N; contador++)
        {
            if(valor[contador] <= valor[posicaoMenorValor]){
                posicaoMenorValor = contador;
                encontrouValorMenor = 1;
            }
        }

        if(encontrouValorMenor){
            variavelTemporaria = valor[indiceAtual];
            valor[indiceAtual] = valor[posicaoMenorValor];
            valor[posicaoMenorValor] = variavelTemporaria;
        }

        indiceAtual++;
        encontrouValorMenor = 0;

    }while(indiceAtual < N);

    printf("\nArranjo ordenado: ");
    for (contador = 0; contador < N; contador++)
    {
        printf("%d", valor[contador]);
        if(contador != N - 1){ printf(", "); } else {printf("."); };
    }
}
