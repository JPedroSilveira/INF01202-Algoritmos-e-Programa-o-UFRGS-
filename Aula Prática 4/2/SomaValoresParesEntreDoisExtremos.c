/*Lê dois números e retorna a soma dos números pares entre eles incluindo os mesmos
Entrada: Dois valores inteiros
Saida: Soma dos números inteiros pares em um intervalo fechado entre o menor número digitado e o maior número digitado
*/
#include <stdio.h>

int main()
{
    int val1, val2, sum = 0;

    /*Lê o primeiro valor*/
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
