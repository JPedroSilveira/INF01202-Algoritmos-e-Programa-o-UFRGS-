#include <stdio.h>
#include <string.h>

#define M 5
#define E 50

void ExercicioUm();
void ExercicioDois();
void ExercicioTres();
void ExercicioQuatro();
void ExercicioCinco();

void maiores(int *v1, int *v2, int n);
void maximoMinimo(int *v, int N, int *maximo, int *minimo);
int validaExpressaoMatematica(char *string, int n);
void deslocaVetor(int *v1, int *v2, int n, int d);

int main(){

    int exercicio;
    do{
        printf("\nDigite o numero do exercicio (0 para sair):");
        scanf("%d", &exercicio);

        switch(exercicio){
            case 0:
                exercicio = 1;
                break;
            case 1:
                ExercicioUm();
                exercicio = 0;
                break;
            case 2:
                ExercicioDois();
                exercicio = 0;
                break;
            case 3:
                ExercicioTres();
                exercicio = 0;
                break;
            case 4:
                ExercicioQuatro();
                exercicio = 0;
                break;
            case 5:
                ExercicioCinco();
                exercicio = 0;
                break;
            default:
                printf("\n Opcao invalida!");
                exercicio = 0;
        }
    }while(exercicio == 0);

    return 0;
}

void ExercicioUm(){
    int vetor[M], maximo, minimo;
    for(int x = 0; x < M; x++){
        printf("Informe o numero %d: ", x+1);
        scanf("%d", &vetor[x]);
    }

    maximoMinimo(vetor, M, &maximo, &minimo);

    printf("O menor valor eh %d e o maior valor eh %d.", minimo, maximo);
    return;
}

void maximoMinimo(int *v, int N, int *maximo, int *minimo){
    *maximo = 0;
    *minimo = *(v);
    for(int x = 0; x < N; x++){
        if(*(v+x) > *maximo){
            *maximo = *(v+x);
        } else if(*(v+x) < *minimo){
            *minimo = *(v+x);
        }
    }
    return;
}

void ExercicioDois(){
    int vetor[M], vetor2[M];
    for(int x = 0; x < M; x++){
        printf("Informe o numero %d: ", x+1);
        scanf("%d", &vetor[x]);
    }

    maiores(vetor, vetor2, M);

    printf("\nVetor original: \n");
    for(int x = 0; x < M; x++){
        printf("%d   ", vetor[x]);
    }

    printf("\nMaiores: \n");
    for(int x = 0; x < M; x++){
        printf("%d   ", vetor2[x]);
    }


    return;
}

void maiores(int *v1, int *v2, int n){
    int count;
    for(int x = 0; x < n; x++){
        count = 0;
        for(int y = 0; y < n; y++){
            if(*(v1+x) < *(v1+y)){
                count++;
            }
        }
        *(v2+x) = count;
    }
    return;
}

void ExercicioTres(){
    char string[E];

    printf("Digite a expressao matematica:");
    fflush(stdin);
    gets(string);

    if(validaExpressaoMatematica(string, E)){
        printf("A expressao eh bem formulada.");
    } else {
        printf("A expressao nao eh bem formulada.");
    }

    return;
}

int validaExpressaoMatematica(char *string, int n){
    int count = 0;
    for(int x = 0; x < strlen(string); x++){
        if(*(string + x) == '('){
            count++;
        } else if(*(string + x) == ')'){
            count--;
        }

        if(count < 0){
            return 0;
        }
    }
    return count == 0;
}

void ExercicioQuatro(){
    int vetor[M], vetor2[M], d;

    for(int x = 0; x < M; x++){
        printf("Informe o numero %d: ", x+1);
        scanf("%d", &vetor[x]);
    }

    printf("Informe a quantidade de deslocamento: ", d);
    scanf("%d", &d);

    deslocaVetor(vetor, vetor2, M, d);

    printf("\nVetor original: \n");
    for(int x = 0; x < M; x++){
        printf("%d   ", vetor[x]);
    }

    printf("\nVetor com deslocamento %d: \n", d);
    for(int x = 0; x < M; x++){
        printf("%d   ", vetor2[x]);
    }

    return;
}

void deslocaVetor(int *v1, int *v2, int n, int d){
    d = d % n;
    for(int x = 0; x < n; x++){
        if(x+d < n){
            *(v2 + x + d) = *(v1 + x);
        } else {
            *(v2 + x + d - n) = *(v1 + x);
        }
    }

    return;
}

void ExercicioCinco(){
    int n, valor = 11, somador = 0;
    printf("Informe a posicao: ", n);
    scanf("%d", &n);

    int sum;
    for(int x = 0; x<n; x++){
        if(somador == -1){
            somador = 1;
        } else if(somador == 1){
            somador = 2;
        } else if(somador == 2){
            somador = 0;
        } else if(somador == 0){
            somador = -1;
        }
        valor += somador;
    }

    printf("Para n = %d, o resultado eh %d.", n, valor);
}



