 /*L� uma quantidade N de n�meros reais e disponibiliza a m�dia, o n�mero de valores abaixo e acima da m�dia*/
 #include <stdio.h>
 #define N 5

 int main(){
    float list[N], sum, average;
    int above = 0, below = 0;

    for(int x = 0; x < N; x++)
    {
        printf("\nInforme o valor %d: ", x+1);
        scanf("%f", &list[x]);
        sum += list[x];
    }

    average = sum / N;

    for(int x = 0; x < N; x++)
    {
        if(list[x] <= average){
            below++;
        } else  {
            above++;
        }
    }

    printf("\nA m�dia eh %f", average);
    printf("\nExistem %d valores menores ou iguais a media", below);
    printf("\nExistem %d valores maiores que a media", above);

    return 0;
 }
