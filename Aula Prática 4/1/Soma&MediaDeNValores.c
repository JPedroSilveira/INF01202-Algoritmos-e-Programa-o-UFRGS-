/*L� um n�mero determinado pelo usu�rio de valores inteiros e apresenta a soma e a m�dia deles
Entrada: Quantidade n�meros a serem digitados e n�meros inteiros conforme a quantidade informada
Saida: Soma dos n�meros inteiros digitados (exceto a primeira entrada da quantidade) e a m�dia dos mesmos
*/
#include <stdio.h>

int main()
{
    int count;
    float avg, val, sum;

    /*L� a quantidade de n�meros que ser�o informados*/
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
