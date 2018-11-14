#include <stdio.h>

#define MAP_X 100
#define MAP_Y 30

typedef struct tipo_posicao{
    int lin, col;
} POSICAO;

int AtualizaMapa(char map[MAP_X][MAP_Y], POSICAO* posicao, char direcao){
    int retorno = 0;
    int descY = 0;
    int descX = 0;

    switch(direcao){
        case 'A':
        case 'a':
            descX = -1;
            break;
        case 'S':
        case 's':
            descY = 1;
            break;
        case 'D':
        case 'd':
            descX = 1;
            break;
        case 'W':
        case 'w':
            descY = -1;
            break;
        default:
            break;
    }

    if(map[posicao->col + descX][posicao->lin + descY] != '#'){
        retorno = 1;
        map[posicao->col + descX][posicao->lin + descY] = 'C';
        map[posicao->col][posicao->lin] = ' ';
        posicao->col += descX;
        posicao->lin += descY;
    }

    return retorno;
}

POSICAO LeMapa(FILE* file, char map[MAP_X][MAP_Y]){
    char line[MAP_X];
    POSICAO posicao;

    for (int i = 0; i < MAP_Y; i++){
        //Pega a linha atual do for
        fgets(line, MAP_X + 2, file);

        //Para cada coluna lê o caracter correspondente
        for (int j = 0; j < MAP_X; j++){
            map[j][i] = line[j];
            if(line[j] == 'C' || line[j] == 'c'){
                posicao.col = j;
                posicao.lin = i;
            }
        }
    }

    return posicao;
}

void ExibeMapa(char map[MAP_X][MAP_Y]){
    fflush(stdin);

    for (int i = 0; i < MAP_Y; i++){
        for (int j = 0; j < MAP_X; j++){
            printf("%c", map[j][i]);
        }
        printf("\n");
    }
}

int main(){
    FILE* file;
    POSICAO posicao;
    char map[MAP_X][MAP_Y], direcao;

    if((file = fopen("mapa.txt", "r")) != NULL){
        posicao = LeMapa(file, map);
        fclose(file);

        ExibeMapa(map);

        do{
            direcao = getchar();

            AtualizaMapa(map, &posicao, direcao);
            ExibeMapa(map);
        }while(direcao != 'Q');
    }
}
