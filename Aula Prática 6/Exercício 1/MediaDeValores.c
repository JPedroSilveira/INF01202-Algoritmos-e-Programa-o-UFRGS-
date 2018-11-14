 /*LÊ uma quantidade N de números reais e disponibiliza a média, o número de valores abaixo e acima da média*/
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

    printf("\nA média eh %f", average);
    printf("\nExistem %d valores menores ou iguais a media", below);
    printf("\nExistem %d valores maiores que a media", above);

    return 0;
 }
