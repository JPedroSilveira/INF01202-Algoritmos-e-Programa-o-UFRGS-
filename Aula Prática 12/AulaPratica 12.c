#include <stdio.h>

#define TAM_ARQUIVO 512
#define NGATOS 4

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


typedef struct estadoDoJogo{
    int nivel, nvidas, pontuacao;
    GATO gatos[NGATOS];
    POSICAO rato;
}ESTADO_DO_JOGO;

int salvaEstado(ESTADO_DO_JOGO estado, char arquivo[TAM_ARQUIVO]){
    FILE *arq;
    if(!(arq = fopen(arquivo,"wb")))
    {
        return 0;
    }else{
        fwrite(&estado,sizeof(ESTADO_DO_JOGO),1,arq);
        fclose(arq);
        return 1;
    }
}

int leEstado(ESTADO_DO_JOGO* estado, char arquivo[TAM_ARQUIVO]){
    FILE *arq;
    int resultado = 1;
    if(!(arq = fopen(arquivo,"rb")))
    {
        resultado = 0;
    }

    rewind(arq);

    if(!fread(estado,sizeof(ESTADO_DO_JOGO),1,arq)){
        resultado = 0;
    }

    fclose(arq);
    return resultado;
}

int main(){
    ESTADO_DO_JOGO estado;
    GATO gato;
    DIRECAO direcao;
    POSICAO posicao;
    direcao.x = 1;
    direcao.y = 1;
    posicao.x = 5;
    posicao.y = 5;
    gato.direcao = direcao;
    gato.posicao = posicao;
    estado.gatos[0] = gato;
    estado.gatos[1] = gato;
    estado.gatos[2] = gato;
    estado.gatos[3] = gato;

    int opcao;
    char nomeArquivo[TAM_ARQUIVO];

    printf("Menu \n");
    printf("1 - Salva estado \n");
    printf("2 - Carrega estado \n");
    scanf("%d", &opcao);

    if(opcao == 1){
        printf("Digite o nome do arquivo: ");
        fflush(stdin);
        gets(nomeArquivo);

        printf("Digite o nível: ");
        scanf("%d", &(estado.nivel));
        printf("Digite a pontuacao: ");
        scanf("%d", &(estado.pontuacao));
        printf("Digite o número de vidas: ");
        scanf("%d", &(estado.nvidas));

        printf("Estado salvo: %d", salvaEstado(estado, nomeArquivo));
    } else {
        printf("Digite o nome do arquivo: ");
        fflush(stdin);
        gets(nomeArquivo);

        printf("Leu arquivo: %d", leEstado(&estado, nomeArquivo));

        printf("Estado -- Nivel: %d -- Pontuacao: %d -- Vidas: %d", estado.nivel, estado.pontuacao, estado.nvidas);
    }
}



