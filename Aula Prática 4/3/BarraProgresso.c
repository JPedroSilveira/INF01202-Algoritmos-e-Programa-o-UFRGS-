/*Lê dois números e retorna a soma dos números pares entre eles incluindo os mesmos
Entrada: Número real entre 0 e 1 e número inteiro entre 5 e 50
Saida: Barra de carregamento onde "<" indica o inicio da barra, ">" indica o final da barra, "-" indica o que ainda não foi processado e "#" indica o que já foi processado
*/
#include <stdio.h>

int main()
{
    float numInfoProcessada;
    int tamanhoBarra, quantidadeBarraProcessada;

    /*Lê os valores de entrada*/
    printf("Entre com o progresso atual(x) e o tamanho(N) da barra: ");
    scanf("%f %d", &numInfoProcessada, &tamanhoBarra);

    quantidadeBarraProcessada =  tamanhoBarra * numInfoProcessada;

    printf("<");
    /*Imprime a barra*/
	for(int x = 1; x <= tamanhoBarra; x++)
	{
	    if(x <= quantidadeBarraProcessada){
            printf("#");
	    } else {
            printf("-");
	    }
	}
    printf(">");

    return 0;
}
