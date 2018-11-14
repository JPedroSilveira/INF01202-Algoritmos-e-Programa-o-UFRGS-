/*L� dois n�meros e retorna a soma dos n�meros pares entre eles incluindo os mesmos
Entrada: Dois valores inteiros
Saida: Soma dos n�meros inteiros pares em um intervalo fechado entre o menor n�mero digitado e o maior n�mero digitado
*/
#include <stdio.h>

int main()
{
    int val1, val2, sum = 0;

    /*L� o primeiro valor*/
    printf("Entre com os dois valores: ");
    scanf("%d %d", &val1, &val2);

    /*Ordena o maior e o menor valor*/
    if(val1 < val2)
    {
        val1 = val1 + val2;
        val2 = val1 - val2;
        val1 = val2 - val1;
    }

    /*Realiza a soma dos valores*/
	for(val1; val1 >= val2; val1--)
	{
	    if(val1 % 2 == 0){
            sum+= val1;
	    }
	}

	/*Exibe o resultado*/
    printf("Soma dos valores pares entre estes dois numeros: %d", sum);

    return 0;
}
