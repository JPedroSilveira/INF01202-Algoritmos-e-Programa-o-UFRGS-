//L� X n�meros reais n�o-negativos (at� ser digitado um valor negativo) e calcula o maior valor, menor valor e a m�dia dos valores lidos.
#include <stdio.h>

float modulo(float val);

int main()
{
    int count = 0;
    float valor, menor = 0, maior = 0, soma = 0, media = 0;

    //L� o primeiro valor
    printf("Entre um numero: ");
    scanf("%f", &valor);

    //Se ele for positivo salva como menor e maior
    if(valor >= 0){
        maior = valor;
        menor = valor;
    }

    //Enquanto o valor digitado for positivo
    while(valor >= 0){
        //Verifica se o valor � maior que o maior valor salvo
        if(valor > maior){
            maior = valor;
        } else if(valor < menor){ //Apenas se o valor n�o for maior verifica se ele n�o � menor
            menor = valor;
        }

        //Realiza a soma do valor ao que j� foi digitado
        soma += valor;

        //Aumenta a contagem
        count++;

        //Pega o pr�ximo valor
        printf("Entre um numero: ");
        scanf("%f", &valor);
    };

    //Caso tenha sido rodada a contagem (maior que zero) realiza o calculo da m�dia
    if(count > 0){
        media = soma / count;
    }

    printf("\nValor minimo: %f", menor);
    printf("\nValor maximo: %f", maior);
    printf("\nValor medio: %f", media);
}
