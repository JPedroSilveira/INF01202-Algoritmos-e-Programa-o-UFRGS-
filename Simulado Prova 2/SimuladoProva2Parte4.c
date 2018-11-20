#include <stdio.h>

#define SOMA_PROGRESSAO 2

int func_soma(int n);
int func_soma_recursiva(int n);

int main(){
    int n = 0, continuar = 1;

    printf("Digite um numero negativo para parar!");

    do{
        printf("\nDigite um numero:");
        scanf("%d", &n);

        if(n > 0){
            printf("Resultado %d", func_soma(n));
        }else{
            continuar = 0;
        }
    }while(continuar);

    return 0;
}

int func_soma(int n){
    int resultado = func_soma_recursiva(n - 1);

    if(n % 2 != 0){
        resultado++;
    }

    return resultado;
}

//Inicia o somatório em 2
int func_soma_recursiva(int n){
    int resultado = 0;
    if(n > 0){
        resultado = func_soma_recursiva(n - 1) + SOMA_PROGRESSAO;
    }

    return resultado;
}
