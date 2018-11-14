#include<stdio.h>
#include<math.h>

#define TAM 3
#define VALORES3 3
#define NCOORDENADAS 3

float FuncaoUm(int, int, int, char);
void ExercicioUm();
void ExercicioDois();
void ExercicioTres();
void ExercicioQuatro();
void ExercicioCinco();
int MenorDeDois(int, int);
int MenorDeTres(int, int, int);
int EstaDentro(int[], int[]);
int EhPrimo(int);
int CalculaFibonacci(int);

int main()
{
    int exercicio;

    do
    {
        printf("\nDigite o numero do exercicio (0 para sair):");
        scanf("%d", &exercicio);

        switch(exercicio)
        {
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
}

void ExercicioCinco()
{
    int x;
    printf("\nDigite o numero:");
    scanf("%d", &x);

    printf("O resultado eh: %d", CalculaFibonacci(x));
}

int CalculaFibonacci(int x)
{
    int valorUmAnterior = 0;
    int valorDoisAnterior = 1;
    int valor = 0;
    x--;

    do{
        valor = valorUmAnterior + valorDoisAnterior;
        valorUmAnterior = valorDoisAnterior;
        valorDoisAnterior = valor;
        x--;
    }while(x != 0);

    return valor;
}

void ExercicioQuatro()
{
    int valor;
    printf("\nDigite um valor:");
    scanf("%d", &valor);

    if(EhPrimo(valor)){
        printf("\nO numero eh primo.");
    }else{
        printf("\nO numero nao eh primo.");
    }
}

int EhPrimo(int valor)
{
    if(valor<5 || valor%2==0 || valor%3==0){
        return (valor==2||valor==3);
    }

    int maxP = sqrt(valor)+2;

    for(int p=5; p<maxP; p+=6)
    {
        if(valor%p==0||valor%(p+2)==0){
            return 0;
        }
    }

    return 1;
}



void ExercicioTres()
{
    int vetor[VALORES3];

    for(int count = 0; count < VALORES3; count++)
    {
        printf("Digite o valor %d: \n", count);
        scanf("%d", &vetor[count]);
    }

    printf("O menor valor eh: %d", MenorDeTres(vetor[0], vetor[1], vetor[2]));

}

int MenorDeTres(int x1, int x2, int x3)
{
    return MenorDeDois(MenorDeDois(x1, x2), x3);
}

int MenorDeDois(int x1, int x2)
{
    if(x1 < x2){
        return x1;
    }else{
        return x2;
    }
}

void ExercicioDois()
{
    int x[NCOORDENADAS], y[NCOORDENADAS];

    for(int count = 0; count < NCOORDENADAS; count++)
    {
        printf("Digite o valor de X%d: \n", count);
        scanf("%d", &x[count]);
    }

    for(int count = 0; count < NCOORDENADAS; count++)
    {
        printf("Digite o valor de Y%d: \n", count);
        scanf("%d", &y[count]);
    }

    if(EstaDentro(x, y))
    {
        printf("O ponto 3 esta dentro do retangulo");
    }else
    {
        printf("O ponto 3 nao esta dentro do retangulo");
    }
}

int EstaDentro(int x[NCOORDENADAS], int y[NCOORDENADAS])
{
    return x[0] < x[2] && x[1] > x[2] && y[0] < y[2] && y[1] > y[2];
}

void ExercicioUm()
{
    int v1, v2, v3;
    char opcao;

    printf("Digite o valor 1:");
    scanf("%d", &v1);
    printf("Digite o valor 2:");
    scanf("%d", &v2);
    printf("Digite o valor 3:");
    scanf("%d", &v3);

    printf("Escolha a opcao: m ou M \n");
    scanf(" %c", &opcao);

    printf("O valor eh: %f", FuncaoUm(v1, v2, v3, opcao));
}

float PegaMaior(int valor[TAM])
{
    int maior = 0;
    for(int x = 0; x < 3; x++)
    {
        if(valor[x] > maior)
        {
            maior = valor[x];
        }
    }
    return maior;
}

float PegaMenor(int valor[TAM])
{
    int menor = valor[0];
    for(int x = 1; x < 3; x++)
    {
        if(valor[x] < menor)
        {
            menor = valor[x];
        }
    }
    return menor;
}

float FuncaoUm(int v1, int v2, int v3, char id)
{
    int vetor[TAM] = {v1, v2, v3};
    switch(id)
    {
        case 'M':
            return PegaMaior(vetor);
            break;
        case 'm':
            return PegaMenor(vetor);
            break;
        default:
            return 0;
    }
}
