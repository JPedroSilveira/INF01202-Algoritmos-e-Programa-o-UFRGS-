/*Calcula o valor a ser cobrado pelo prato do cliente em um Buffet livre respeitando as seguintes regras:

    - O valor do quilo é de R$ 35,00, e a balança eletrônica já calcula um valor inicial proporcionalmente ao peso
    do prato de comida.

    - Se o preço dado pela balança estiver entre R$ 15,00 e R$ 20,00, o cliente
    paga apenas R$ 15,00.

    - Se esse valor estiver entre R$ 20,00 e R$ 30,00, o cliente terá um desconto
    de R$ 5,00 sobre o preço dado pela balança.

    - Se preço dado pela balança for maior do que R$30,00, o cliente paga o valor do buffet livre, que é R$ 25,00.

    - O peso passado pela balança é dado em gramas.
*/
#include <stdio.h>

int main()
{
    /*Armazenam os valores de entrada e o resultado final*/
    int peso;
    float preco;

    /*Lê os dados de entrada*/
    printf("Entre o peso do prato (em gramas): ");
    scanf("%d", &peso);

    /*Calcula o que deve ser pago*/
    preco = (peso/1000.0) * 35;

    /*Realiza os cálculos de desconto*/
    if(preco >= 15 && preco <= 20){
        preco = 15;
    } else if(preco > 20 && preco <= 30){
        preco = preco - 5;
    } else if(preco > 30){
        preco = 25;
    }

    /*Imprime o resultado na tela*/
    printf("O valor a pagar eh R$ %.2f.", preco);

    return 0;
}

