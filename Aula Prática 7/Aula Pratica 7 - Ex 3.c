//Cifra uma determinada string com base em duas outras string, uma com os caracteres que devem ser substituidos e outra com os caracteres substitutos
#include <stdio.h>
#include <string.h>

#define MAXCARACTERES 26
#define MAXFRASE 100
int main()
{
    char letras_a_substituir[MAXCARACTERES + 1], letras_substitutas[MAXCARACTERES + 1], frase[MAXFRASE + 1];

    fflush(stdin); //Limpa o buffer

    //Lê a string com as caracteres que devem ser trocados
    printf("Informe os caracteres que devem ser trocados: ");
    gets(letras_a_substituir);

    fflush(stdin); //Limpa o buffer

    //Lê a string com os caracteres que substituirão os trocados
    printf("Informe os caracteres substitutos: ");
    gets(letras_substitutas);


    fflush(stdin); //Limpa o buffer

    //Lê a frase que deve ser cifrada
    printf("Informe a frase que deve ser cifrada: ");
    gets(frase);

    //Para cada letra na frase
    for(int countFrase = 0; countFrase < strlen(frase); countFrase++)
    {
        int countSubstituir = 0, substituida = 0;
        //Busca a letra na string letras_a_substituir
        do
        {
            //Se for encontrada uma letra para substituir
            if(frase[countFrase] == letras_a_substituir[countSubstituir])
            {
                //Troca a letra na frase pela letra substituta
                frase[countFrase] = letras_substitutas[countSubstituir];
                substituida = 1; //Define que essa letra já foi substituida para passar para a próxima
            } else { //Caso a letra não seja encontrada aumenta o contador para continuar a busca
                countSubstituir++;
            }
        //Continua enquanto ainda ouverem letras a se buscar em letras_a_substituir com correspondência em letras_substitutas e a letra não tiver sido substituída
        }while(countSubstituir < strlen(letras_a_substituir) && countSubstituir < strlen(letras_substitutas) && !substituida);
    }

    //Exibe a frase cifrada
    printf("Frase cifrada: %s", frase);

    return 0;
}
