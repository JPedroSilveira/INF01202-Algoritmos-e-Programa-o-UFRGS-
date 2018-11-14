#include <stdio.h>

typedef struct posicao{
    int x,y;
}POSICAO;

typedef struct direcao{
    int x,y;
}DIRECAO;

typedef struct gato{
    POSICAO posicao;
    DIRECAO direcao;
}GATO;

int moveGato(GATO *gato, POSICAO posicao_inferior, POSICAO posicao_superior){
    if(gato->posicao.x  + gato->direcao.x <= posicao_inferior.x
        && gato->posicao.y + gato->direcao.y <= posicao_inferior.y
        && gato->posicao.x  + gato->direcao.x >= posicao_superior.x
        && gato->posicao.y + gato->direcao.y >= posicao_superior.y){

        gato->posicao.x = gato->posicao.x + gato->direcao.x;
        gato->posicao.y = gato->posicao.y + gato->direcao.y;

        return 1;
    }

    return 0;
}

int main(){
    GATO gato;
    POSICAO posicao_superior, posicao_inferior;
    int qtdInteracoes;

    posicao_superior.x = 1;
    posicao_superior.y = 1;

    posicao_inferior.x = 27;
    posicao_inferior.y = 11;

    printf("Informe as coordenadas x e y da posicao do gato:");
    scanf("%d %d", &gato.posicao.x, &gato.posicao.y);

    printf("Informe os deslocamentos do gato em x e y:");
    scanf("%d %d", &gato.direcao.x, &gato.direcao.y);

    printf("Informe a quantidade de iteracoes:");
    scanf("%d", &qtdInteracoes);

    printf("Gato se movendo...\n");

    do{
        if(moveGato(&gato, posicao_inferior, posicao_superior)){
            printf("Posicao do gato depois do passo %d: (%d,%d) \n", qtdInteracoes + 1, gato.posicao.x, gato.posicao.y);
        } else {
            qtdInteracoes = 0;
        }

        qtdInteracoes--;
    }while(qtdInteracoes > 0);
}



