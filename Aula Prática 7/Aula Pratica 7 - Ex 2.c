/*Armazena o total de produtos vendidos em cada loja pelo código e informa quantos produtos de um determinado código foram vendidos em todas as lojas*/
#include <stdio.h>
#define L 3
#define P 4

int codigo_produto[P], quantidade_produto_por_loja[L][P];

int main()
{
    int codigo_produto_desejado, quantidade_vendida, indice_produto_desejado = 0;

    ler_codigo_produtos();

    ler_quantidade_produtos_vendidos_por_loja();

    printf("\nInforme o codigo do produto desejado: ");
    scanf("%d", &codigo_produto_desejado);

    if(produto_existe(codigo_produto_desejado, &indice_produto_desejado))
    {
        quantidade_vendida = contar_quantidade_vendida(indice_produto_desejado);
        printf("Total vendido do produto %d: %d", codigo_produto_desejado, quantidade_vendida);
    }

    return 0;
}

/*Conta a quantidade total vendida de um produto procurando em todas as lojas pelo indice do produto*/
int contar_quantidade_vendida(int indice_produto_desejado)
{
    int quantidade_vendida = 0;

    for(int countLoja = 0; countLoja < L; countLoja++)
    {
        quantidade_vendida += quantidade_produto_por_loja[countLoja][indice_produto_desejado];
    }

    return quantidade_vendida;
}

/*Lê o código de todos os produtos e salva no vetor codigo_produto*/
void ler_codigo_produtos()
{
    for(int count = 0; count < P; count++)
    {
        printf("Informe o codigo do produto: ");
        scanf("%d", &codigo_produto[count]);
    }
}

/*Lê a quantidade de produtos vendidos por cada loja e salva no vetor quantidade_produto_por_loja*/
void ler_quantidade_produtos_vendidos_por_loja()
{
    for(int countLoja = 0; countLoja < L; countLoja++)
    {
        printf("\n");
        for(int countProduto = 0; countProduto < P; countProduto++)
        {
            printf("Informe a quantidade vendida do produto %d na loja %d: ", codigo_produto[countProduto], countLoja+1);
            scanf("%d", &quantidade_produto_por_loja[countLoja][countProduto]);
        }
    }
}

/*Verifica se um determinado código está presente no vetor de produtos*/
int produto_existe(int codigo_produto_procurado, int *indice_produto_procurado)
{
    for(int count = 0; count < P; count++)
    {
        if(codigo_produto[count] == codigo_produto_procurado)
        {
            *indice_produto_procurado = count;
            return 1;
        }
    }
    return 0;
}
