//Calcula a raiz c�bica aproximada de um n�mero com base em um n�mero m�ximo de intera��es permitidas para o calculo
#include <stdio.h>
#include <math.h>

float modulo(float val);

int main()
{
    double valorR, x, proximoX, tolerancia;
    int nMaxInteracoes, count = 0;

    //Realiza a leitura dos dados
    printf("Entre com o valor de r: ");
    scanf("%lf", &valorR);

    printf("Entre o valor de x0: ");
    scanf("%lf", &proximoX);

    //Realiza a leitura da tolerancia, aceitando apenas valores positivos
    do{
        printf("Entre a tolerancia: ");
        scanf("%lf", &tolerancia);

        if(tolerancia < 0) printf("Tolerancia deve ser positiva!\n");
    }while(tolerancia < 0);

    printf("Entre o numero maximo de iteracoes: ");
    scanf("%d", &nMaxInteracoes);

    do{
        //Grava o valor do pr�ximo X para o X atual
        x = proximoX;
        //Calcula o valor do pr�ximo X
        proximoX = x - ((pow(x,3) - valorR)/(3*pow(x,2)));
        //Aumenta o contador de repeti��es
        count++;
    }while(count < nMaxInteracoes && modulo(proximoX-x) > tolerancia);

    printf("\nO valor aproximado da raiz cubica de %lf eh %lf.", valorR, proximoX);
    printf("\nNumero de iteracoes realizadas: %d.", count);
}

//Realiza o calculo do m�dulo de um n�mero
float modulo(float val)
{
    if(val < 0) val = val * -1;
    return val;
}
