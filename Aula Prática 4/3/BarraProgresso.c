/*L� dois n�meros e retorna a soma dos n�meros pares entre eles incluindo os mesmos
Entrada: N�mero real entre 0 e 1 e n�mero inteiro entre 5 e 50
Saida: Barra de carregamento onde "<" indica o inicio da barra, ">" indica o final da barra, "-" indica o que ainda n�o foi processado e "#" indica o que j� foi processado
*/
#include <stdio.h>

int main()
{
    float numInfoProcessada;
    int tamanhoBarra, quantidadeBarraProcessada;

    /*L� os valores de entrada*/
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
