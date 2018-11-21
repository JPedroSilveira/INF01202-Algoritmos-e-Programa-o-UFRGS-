#include <stdio.h>

int contadorDePares(int tamVetor, int vetor[tamVetor]){
    int resultado = 0;

    if(tamVetor > 0){
        if(vetor[tamVetor - 1] % 2 == 0){
            resultado = 1 + contadorDePares(tamVetor - 1, vetor);
        }else{
            resultado = contadorDePares(tamVetor - 1, vetor);
        }
    }

    return resultado;
}

int somaDigitos(int i){
    //Fornece o dígito menos significativo
    int resultado = i % 10;

    if(resultado > 0){
        //Soma com passo do resto dos dígitos
        resultado += somaDigitos(i / 10);
    }

    return resultado;
}

//Busca no último elemento e diminui o tamanho do vetor a cada passo, testando sempre no último elemento até zerar o vetor
int encontraNumeroUltimo(int tamVetor, int vetor[tamVetor], int valor){
    int resultado = -1;

    if(tamVetor > 0){
        if(vetor[tamVetor - 1] == valor){
            resultado = tamVetor - 1;
        } else {
            resultado = encontraNumeroUltimo(tamVetor - 1, vetor, valor);
        }
    }


    return resultado;
}

//Inicializa a busca com o contador ZERO
int encontraNumero(int tamVetor, int vetor[tamVetor], int valor){
    return encontraNumeroAux(tamVetor, vetor, valor, 0);
}

//Começa buscando no primeiro elemento do vetor, caso não consiga segue para o próximo elemento pelo contador
int encontraNumeroAux(int tamVetor, int vetor[tamVetor], int valor, int contador){
    int resultado = -1;

    if(contador < tamVetor){
        if(vetor[contador] == valor){
            resultado = contador;
        } else {
            resultado = encontraNumeroAux(tamVetor, vetor, valor, contador + 1);
        }
    }


    return resultado;
}

int main(){
    int valor, tamVetor, busca, continuar = 1;
    char resposta;

    printf("Digite um valor para soma:\n");
    scanf("%d", &valor);

    printf("A soma dos digitos do valor %d eh %d.", valor, somaDigitos(valor));

    printf("\n\nDiga o tamanho do vetor: ");
    scanf("%d", &tamVetor);

    int vetor[tamVetor];

    printf("Digite os valores para o vetor:\n");
    for(int x = 0; x < tamVetor; x++){
        scanf("%d", &vetor[x]);
    }

    printf("\nAtencao! Seu vetor possui %d numeros pares.", contadorDePares(tamVetor, vetor));

    do{
        printf("\nDigite o valor que deseja procurar no vetor:");
        scanf("%d", &busca);

        printf("\nO numero %d esta na posicao %d", busca, encontraNumeroUltimo(tamVetor, vetor, busca));

        printf("\nO numero %d esta na posicao %d", busca, encontraNumero(tamVetor, vetor, busca));

        printf("\nDeseja procurar outro valor? (S/N)");
        scanf(" %c", &resposta);

        if(resposta == 'N'){
            continuar = 0;
        }
    }while(continuar);

    return 0;
}
