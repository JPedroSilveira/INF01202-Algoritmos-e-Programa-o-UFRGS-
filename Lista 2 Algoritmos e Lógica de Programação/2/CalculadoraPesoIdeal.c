/*Calcula o peso ideal de acordo com o sexo*/

#include <stdio.h>
#include <ctype.h>

int main()
{
    /*Armazena os dados de entrada*/
    float altura;
    char sexo;

    /*Lê os dados de entrada*/
    printf("Digite o sexo (M ou F): ");
    scanf("%c", &sexo);

    printf("Digite a altura: ");
    scanf("%f", &altura);

    switch(toupper(sexo)){
        case 'F':
            printf("Peso ideal: %f", (72.7 * altura) - 58);
            break;
        case 'M':
            printf("Peso ideal: %f", (62.1 * altura) - 44.7);
            break;
        default:
            printf("Sexo invalido!");
    }

    return 0;
}





