#include <stdio.h>
#include <string.h>

int main()
{
    float notaProva1, notaProva2, notaAulaPratica, notaTrabalhoFinal, mediaFinal;
    int numeroAulasAssistidas;
    char conceito[2];

    printf("Informe o numero de aulas assistidas: ");
    scanf("%d", &numeroAulasAssistidas);

    printf("Informe a nota da primeira prova: ");
    scanf("%f", &notaProva1);

    printf("Informe a nota da segunda prova: ");
    scanf("%f", &notaProva2);

    printf("Informe a nota da aula pratica: ");
    scanf("%f", &notaAulaPratica);

    printf("Informe a nota do trabalho final: ");
    scanf("%f", &notaTrabalhoFinal);

    mediaFinal = 0.3*notaProva1 + 0.45*notaProva2 + 0.15*notaAulaPratica + 0.1*notaTrabalhoFinal;

    if(numeroAulasAssistidas < 34)
        strcpy(conceito, "FF");
    else if(mediaFinal >= 8.5)
        strcpy(conceito, "A");
    else if(mediaFinal >= 7.5)
        strcpy(conceito, "B");
    else if(mediaFinal >= 6)
        strcpy(conceito, "C");
    else
        strcpy(conceito, "D");

    printf("A nota final eh %.1f e o conceito eh %s.", mediaFinal, conceito);

}
