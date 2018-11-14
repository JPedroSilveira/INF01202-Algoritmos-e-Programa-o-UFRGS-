#include <stdio.h>

#define TAM_MATRIZ 4
int main()
{
    int matriz_um[TAM_MATRIZ][TAM_MATRIZ], matriz_dois[TAM_MATRIZ][TAM_MATRIZ], matriz_final[TAM_MATRIZ][TAM_MATRIZ], multiplicacao, soma;

    for(int x = 0; x < TAM_MATRIZ; x++){
        for(int y = 0; y < TAM_MATRIZ; y++){
            printf("Digite um valor para a primeira matriz:");
            scanf("%d", &matriz_um[x][y]);
            printf("Digite um valor para a segunda matriz:");
            scanf("%d", &matriz_dois[x][y]);
        }
    }

    for(int linha = 0; linha < TAM_MATRIZ; linha++){
        for(int coluna = 0; coluna < TAM_MATRIZ; coluna++){
            soma = 0;
            for(int variante = 0; variante < TAM_MATRIZ; variante++){
                soma += matriz_um[linha][variante] * matriz_dois[variante][coluna];
            }
            matriz_final[linha][coluna] = soma;
        }
    }

    printf("Matriz 1: \n");
    for(int linha = 0; linha < TAM_MATRIZ; linha++){
        for(int coluna = 0; coluna < TAM_MATRIZ; coluna++){
            printf("[%d] ", matriz_um[linha][coluna]);
        }
        printf("\n");
    }

    printf("Matriz 2: \n");
    for(int linha = 0; linha < TAM_MATRIZ; linha++){
        for(int coluna = 0; coluna < TAM_MATRIZ; coluna++){
            printf("[%d] ", matriz_dois[linha][coluna]);
        }
        printf("\n");
    }

    printf("Matriz Resultado: \n");
    for(int linha = 0; linha < TAM_MATRIZ; linha++){
        for(int coluna = 0; coluna < TAM_MATRIZ; coluna++){
            printf("[%d] ", matriz_final[linha][coluna]);
        }
        printf("\n");
    }
}
