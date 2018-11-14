#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    char num1Char[10];
    char num2Char[10];
    char resultado[21];

    int count1 = 0, count2 = 0;

    printf("Digite o primeiro numero: ");
    scanf("%s", num1Char);

    printf("Digite o segundo numero: ");
    scanf("%s", num2Char);

    for(int x = 0; x < 21; x++)
    {
        if(x % 2 == 0)
        {
            resultado[x] = num1Char[count1];
            count1++;
        } else {
            resultado[x] = num2Char[count2];
            count2++;
        }
    }

    printf("Resultado: %s", resultado);

    return 0;
}
