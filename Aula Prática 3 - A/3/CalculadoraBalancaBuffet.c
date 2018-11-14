/*Calcula o valor a ser cobrado pelo prato do cliente em um Buffet livre respeitando as seguintes regras:

    - O valor do quilo � de R$ 35,00, e a balan�a eletr�nica j� calcula um valor inicial proporcionalmente ao peso
    do prato de comida.

    - Se o pre�o dado pela balan�a estiver entre R$ 15,00 e R$ 20,00, o cliente
    paga apenas R$ 15,00.

    - Se esse valor estiver entre R$ 20,00 e R$ 30,00, o cliente ter� um desconto
    de R$ 5,00 sobre o pre�o dado pela balan�a.

    - Se pre�o dado pela balan�a for maior do que R$30,00, o cliente paga o valor do buffet livre, que � R$ 25,00.

    - O peso passado pela balan�a � dado em gramas.
*/
#include <stdio.h>

int main()
{
    /*Armazenam os valores de entrada e o resultado final*/
    int peso;
    float preco;

    /*L� os dados de entrada*/
    printf("Entre o peso do prato (em gramas): ");
    scanf("%d", &peso);

    /*Calcula o que deve ser pago*/
    preco = (peso/1000.0) * 35;

    /*Realiza os c�lculos de desconto*/
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

