//Realiza a soma de N multas de N motoristas. O programa para quando é digitado 0 (ZERO) para o código do motorista e para de ler multando quando um valor
//negativo é inserido
#include <stdio.h>

float modulo(float val);

int main()
{
    int codigo, countMulta;
    float valor, maiorMontante = 0, montante, totalArrecadado;

    do{
        //Lê o codigo do motorista
        printf("Entre o código do motorista: ");
        scanf("%d", &codigo);

        if(codigo != 0){
            //Zera os contadores
            montante = 0;
            countMulta = 0;

            //Realiza a leitura das multas
            do{
                printf("Entre o valor da multa %d:", countMulta + 1);
                scanf("%f", &valor);

                if(valor > 0){
                    countMulta++;
                    montante+= valor;
                }
            }while(valor > 0);

            //Verifica o maior montante
            if(montante > maiorMontante){
                maiorMontante = montante;
            }

            //Soma o montante ao total arrecadado
            totalArrecadado += montante;
        }
    }while(codigo != 0);

    printf("\nO total da arrecadacao eh: %f", totalArrecadado);
    printf("\nO maior montante acumulado por motorista eh: %f", maiorMontante);
}
