#include <stdio.h>

void manipula_vetor_1(int n, int v[n], int a);
void manipula_vetor_2(int n, int v[n], int *a);
int* manipula_vetor_3(int n, int v[n], int *a);

int main(){
    int vetor[3] = {1,2,3};
    int a = 0;

    manipula_vetor_1(3, vetor, 5);

    manipula_vetor_2(3, vetor, &a);
    printf("\nNovo a: %d", a);

    int *vetor2;
    vetor2 = manipula_vetor_3(3, vetor, &a);

    printf("\nVetor retornado:");
    for(int x = 0; x < 3; x++){
        printf("\n%d", *(vetor2 + x));
    }

    return 0;
}

//Recebe um inteiro n, um vetor inteiro de tamanho n e um inteiro a
//e atualiza os valores do vetor somando "a" a cada elemento.
//Exemplo chamada:
//  manipula_vetor_1(5, vetor, 2);
//Resultado:
//Todos os elementos de vetor terão um acréscimo de 2 em seu valor
void manipula_vetor_1(int n, int v[n], int a){
    printf("\nNovos valores:");
    for(int x = 0; x < n; x++){
        v[x] = v[x] + a;
        printf("\n%d", v[x]);
    }
}

//Recebe um inteiro n, um vetor de inteiros com o tamanho de n e um ponteiro
//para um inteiro. Realiza a leitura de um valor inteiro, salva no valor do ponteiro
//e exibe em tela a soma de todos os valores do vetor v com o valor digitado pelo usuário
//Exemplo chamada:
//  manipula_vetor_2(10, vetor, &a);
//Resultado:
//*a terá seu valor modificado, e será exibido em tela o valor dos 10 elementos do vetor somados
//com o novo valor de a*
void manipula_vetor_2(int n, int v[n], int *a){
    int aux = 0;
    printf("\nDigite um valor:");
    scanf("%d", a);
    printf("\nValores somados:");
    for(int x = 0; x < n; x++){
        aux = v[x] + *a;
        printf("\n%d", aux);
    }
}

//Recebe um inteiro n, um vetor de inteiros com o tamanho de n e um ponteiro
//para um inteiro. Realiza a leitura de um valor inteiro, salva no valor do ponteiro,
//exibe em tela a soma de todos os valores do vetor v com o valor digitado pelo usuário
//e retorna um novo vetor com os valores atualizados conforme a soma
//Exemplo chamada:
//    int *vetor2;
//    vetor2 = manipula_vetor_3(3, vetor, &a);
//Resultado:
//*a terá seu valor modificado, e será exibido em tela o valor dos 10 elementos do vetor somados
//com o novo valor de a*
int* manipula_vetor_3(int n, int v[n], int *a){
    printf("\nDigite um valor:");
    scanf("%d", a);
    printf("\nValores somados:");
    for(int x = 0; x < n; x++){
        v[x] = v[x] + *a;
        printf("\n%d", v[x]);
    }

    return v;
}



