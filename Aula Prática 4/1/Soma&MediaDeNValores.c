/*Lê um número determinado pelo usuário de valores inteiros e apresenta a soma e a média deles
Entrada: Quantidade números a serem digitados e números inteiros conforme a quantidade informada
Saida: Soma dos números inteiros digitados (exceto a primeira entrada da quantidade) e a média dos mesmos
*/
#include <stdio.h>

int main()
{
    int count;
    float avg, val, sum;

    /*Lê a quantidade de números que serão informados*/
    printf("Informe a quantidade de valores considerados: ");
    scanf("%d", &count);

	for(int x = 1; x <= count; x++)
	{
        printf("Informe o valor %d: ", x);
        scanf("%f", &val);
        sum+= val;
	}

	avg = sum / count;

    printf("Soma dos valores: %f", sum);

    printf("\nMedia dos valores: %f", avg);

    return 0;
}
