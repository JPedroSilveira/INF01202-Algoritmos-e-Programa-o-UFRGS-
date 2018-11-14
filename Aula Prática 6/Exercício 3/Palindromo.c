/*Lê N digítos e verifica se a sequencia forma um palindromo*/

#include <stdio.h>
#define NUM_DIGITOS 5

int main()
{
    int valor[NUM_DIGITOS], valorReverso[NUM_DIGITOS], contadorReverso = NUM_DIGITOS-1, contador = 0, ehPalindromo = 1;


    for (contador; contador < NUM_DIGITOS; contador++)
    {
        printf("Informe um digito: ");
        scanf("%d", &valor[contador]);
        valorReverso[contadorReverso] = valor[contador];
        contadorReverso--;
    }

    contador = 0;

    do{
        if(valor[contador] != valorReverso[contador]){
            ehPalindromo = 0;
        } else {
            contador++;
        }
    }while(ehPalindromo && contador < NUM_DIGITOS);

    if(ehPalindromo){
        printf("Eh palindromo.");
    }else{
        printf("Nao eh palindromo.");
    }
}


