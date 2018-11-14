/*Lê dois números de quatro dígitos cada, salva eles em dois vetores (1 dígito por nodo) e realiza a soma salvando em um vetor de cinco posições*/
#include <stdio.h>
#include <math.h>

int main()
{
    int countNumbers, sum = 0, lengthNum, temp;
    float divisor;

    //Pergunta ao usuários quantos números ele deseja somar
    printf("Digite quantos numeros deseja somar: ");
    scanf("%d", &countNumbers);

    //Cria um vetor de números baseado na quantidade que o usuário pedir
    int number[countNumbers];

    //Requisita que o usuário dígita a quantidade de números informada
    for(int x = 0; x < countNumbers; x++)
    {
        printf("Digite um numero: ");
        scanf("%d", &number[x]);

        //Realiza a soma dos números dígitos para exibição posterior
        sum += number[x];
    }

    //Exibe os vetores com cada número dígitado
    for(int x = 0; x < countNumbers; x++)
    {
        MakeAndShowVectorOfAnInt(number[x]);
    }

    //Exibe o vetor com o valor da soma dos números dígitados
    MakeAndShowVectorOfAnInt(sum);
}

/*Transforma um inteiro em um vetor
(cada casa do vetor corresponde a um dígito do número, ordenado do primeiro ao último)
e exibe o vetor para o usuário*/
void MakeAndShowVectorOfAnInt(int number)
{
    //Armazena a quantidade de digitos de um número
    int lengthNum = ceil(log10(number+1));

    /*Realiza o calculo para encontrar o divisor de base 10
    que deixa apenas o primeiro digito fora das casas decimais
    (Ex: Entrada->256 Saida->100 |- 256 / 100 = 2.56)*/
    int divisor = pow(10, lengthNum-1);

    //Cria um vetor com a quantidades de digitos do número
    int vector[lengthNum-1];

    //Contar a posição no vetor com os números separados
    int count = 0;

    do{
        //Salva o primeiro dígito do número
        int temp = (number / divisor);

        //Remove o primeiro dígito do número (temp)
        number = number - (temp * divisor);

        //Adiciona o primeiro número no vetor
        vector[count] = temp;

        //Incrementa a contagem para a próxima casa do vetor
        count++;

        //Divide o divisor por 10 para remover a próxima casa do número
        //Ex: Rodada 1 = 256 / 100 = 2.56, Rodada 2 = 56 / x = 5.6 |- x = (100 / 10) = 10
        divisor = divisor / 10;

        //Para a repetição quando o divisor chegar ao mínimo (1) - Logo todas as casas inteiras já foram removidas
    }while(divisor >= 1);

    //Exibe em tela todos os valores do vetor com os dígitos separados
    printf("Vetor valor: ");
    for(int y = 0; y < lengthNum; y++)
    {
        printf("%d", vector[y]);
        if(y + 1 < lengthNum){
            printf(", ");
        } else {
            printf(".\n");
        }
    }
}
