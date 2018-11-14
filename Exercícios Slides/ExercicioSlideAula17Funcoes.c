#include<stdio.h>
#include <time.h>

#define NLIN 3
#define NCOL 3

int main()
{
    menu_opcoes();
    int i;
    srand(time(NULL));

    for(i=0;i<3;i++){
        printf("Impressao matriz %d\n", i+1);
        imprime_matriz();
    }

    return 0;
}

void menu_opcoes()
{
    int opcao;
    printf("Opcoes disponiveis: \n\n 1 - Soma de dois valores reais. \n 2 - Se eh divisor do numero \n 3 - Sequencia de numeros pares \n 4 - Se o numero eh perfeito \n\nInforme a opcao desejada:");
    scanf("%d", &opcao);
}

void imprime_matriz(void)
{
    int l,c,n;
    for(l=0;l<NLIN;l++){
        for(c=0;c<NCOL;c++){
            n = 5 + (rand() % (15-5+1));
            printf("%d ", n);
        }
        printf("\n");
    }
    printf("\n");
}
