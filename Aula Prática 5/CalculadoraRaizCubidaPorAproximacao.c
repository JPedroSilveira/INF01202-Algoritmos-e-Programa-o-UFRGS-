//Calcula a raiz cúbica aproximada de um número com base em um número máximo de interações permitidas para o calculo
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
        //Grava o valor do próximo X para o X atual
        x = proximoX;
        //Calcula o valor do próximo X
        proximoX = x - ((pow(x,3) - valorR)/(3*pow(x,2)));
        //Aumenta o contador de repetições
        count++;
    }while(count < nMaxInteracoes && modulo(proximoX-x) > tolerancia);

    printf("\nO valor aproximado da raiz cubica de %lf eh %lf.", valorR, proximoX);
    printf("\nNumero de iteracoes realizadas: %d.", count);
}

//Realiza o calculo do módulo de um número
float modulo(float val)
{
    if(val < 0) val = val * -1;
    return val;
}
