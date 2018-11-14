#include <stdio.h>

#define NCIDADES 5
#define NCIDADE_ROTA 5
int main()
{
    int distancia_cidade[NCIDADES][NCIDADES];
    int rota[NCIDADE_ROTA];
    int distancia = 0;
    int cidade_anterior = -1;
    int contador_repeticao = 0;
    int rota_possivel = 1;

    for(int x = 0; x < NCIDADES; x++){
        for(int y = 0 + contador_repeticao; y < NCIDADES; y++){
            if(x != y){
                printf("Digite a distancia entre a cidade %d e a cidade %d: ", x, y);
                scanf("%d", &distancia_cidade[x][y]);
                distancia_cidade[y][x] = distancia_cidade[x][y];
            } else {
                distancia_cidade[x][y] = 0;
                distancia_cidade[y][x] = distancia_cidade[x][y];
            }
        }
        contador_repeticao++;
    }

    int count = 0;
    do{
        printf("Digite a %d cidade que deseja ir:", count+1);
        scanf("%d", &rota[count]);

        if(cidade_anterior >= 0){
            if(distancia_cidade[cidade_anterior][rota[count]] > 0){
                distancia += distancia_cidade[cidade_anterior][rota[count]];
            } else {
                printf("Sentimos muito mas nao eh possivel passar da cidade %d para a cidade %d.", cidade_anterior, rota[count]);
                rota_possivel = 0;
            }
        }
        cidade_anterior = rota[count];
        count++;
    }while(count < NCIDADE_ROTA && rota_possivel);

    if(rota_possivel){
        printf("Distancia total de %d km.", distancia);
    }
}
