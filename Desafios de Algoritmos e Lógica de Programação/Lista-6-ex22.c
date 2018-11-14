/*L� dois n�meros de quatro d�gitos cada, salva eles em dois vetores (1 d�gito por nodo) e realiza a soma salvando em um vetor de cinco posi��es*/
#include <stdio.h>
#include <math.h>

int main()
{
    int countNumbers, sum = 0, lengthNum, temp;
    float divisor;

    //Pergunta ao usu�rios quantos n�meros ele deseja somar
    printf("Digite quantos numeros deseja somar: ");
    scanf("%d", &countNumbers);

    //Cria um vetor de n�meros baseado na quantidade que o usu�rio pedir
    int number[countNumbers];

    //Requisita que o usu�rio d�gita a quantidade de n�meros informada
    for(int x = 0; x < countNumbers; x++)
    {
        printf("Digite um numero: ");
        scanf("%d", &number[x]);

        //Realiza a soma dos n�meros d�gitos para exibi��o posterior
        sum += number[x];
    }

    //Exibe os vetores com cada n�mero d�gitado
    for(int x = 0; x < countNumbers; x++)
    {
        MakeAndShowVectorOfAnInt(number[x]);
    }

    //Exibe o vetor com o valor da soma dos n�meros d�gitados
    MakeAndShowVectorOfAnInt(sum);
}

/*Transforma um inteiro em um vetor
(cada casa do vetor corresponde a um d�gito do n�mero, ordenado do primeiro ao �ltimo)
e exibe o vetor para o usu�rio*/
void MakeAndShowVectorOfAnInt(int number)
{
    //Armazena a quantidade de digitos de um n�mero
    int lengthNum = ceil(log10(number+1));

    /*Realiza o calculo para encontrar o divisor de base 10
    que deixa apenas o primeiro digito fora das casas decimais
    (Ex: Entrada->256 Saida->100 |- 256 / 100 = 2.56)*/
    int divisor = pow(10, lengthNum-1);

    //Cria um vetor com a quantidades de digitos do n�mero
    int vector[lengthNum-1];

    //Contar a posi��o no vetor com os n�meros separados
    int count = 0;

    do{
        //Salva o primeiro d�gito do n�mero
        int temp = (number / divisor);

        //Remove o primeiro d�gito do n�mero (temp)
        number = number - (temp * divisor);

        //Adiciona o primeiro n�mero no vetor
        vector[count] = temp;

        //Incrementa a contagem para a pr�xima casa do vetor
        count++;

        //Divide o divisor por 10 para remover a pr�xima casa do n�mero
        //Ex: Rodada 1 = 256 / 100 = 2.56, Rodada 2 = 56 / x = 5.6 |- x = (100 / 10) = 10
        divisor = divisor / 10;

        //Para a repeti��o quando o divisor chegar ao m�nimo (1) - Logo todas as casas inteiras j� foram removidas
    }while(divisor >= 1);

    //Exibe em tela todos os valores do vetor com os d�gitos separados
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
