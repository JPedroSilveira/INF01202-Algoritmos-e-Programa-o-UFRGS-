#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_CONTRIBUINTES 30
#define MAX_NOME_ARQUIVO 1000
#define MAX_TAM_ARQUIVO 2000

struct TRABALHADOR{
    int codigo;
    char profissao[30];
    float TaxaDesconto;
};

int lerContribuintes(char nomeArquivo[MAX_NOME_ARQUIVO], struct TRABALHADOR contribuintes[MAX_CONTRIBUINTES]);
void salvarContribuintesSelecionados(struct TRABALHADOR contribuintes[MAX_CONTRIBUINTES], int countContribuintes);
void salvarProfissoesE(struct TRABALHADOR contribuintes[MAX_CONTRIBUINTES], int countContribuintes);
void contaLinhasArquivoConstribuintesSelecionados();

int main(){
    struct TRABALHADOR contribuintes[MAX_CONTRIBUINTES];
    int countItens = 0;

    countItens = lerContribuintes("profissões.txt", contribuintes);

    printf("\nContribuintes lidos:");
    for(int x = 0; x < countItens; x++){
        printf("\n %d  %s  %f", contribuintes[x].codigo, contribuintes[x].profissao, contribuintes[x].TaxaDesconto);
    }

    salvarContribuintesSelecionados(contribuintes, countItens);

    salvarProfissoesE(contribuintes, countItens);

    contaLinhasArquivoConstribuintesSelecionados();

    return 0;
}

int lerContribuintes(char nomeArquivo[MAX_NOME_ARQUIVO], struct TRABALHADOR contribuintes[MAX_CONTRIBUINTES]){
    FILE *file;
    int countItens = 0, count = 0;
    char texto[MAX_TAM_ARQUIVO], *temp;
    file = fopen(nomeArquivo, "r");

    if(file != NULL){
        rewind(file);
        if(fgets(texto, sizeof(texto), file) != NULL){
            countItens = atoi(texto);
            for(int x = 0; x < countItens; x++){
                if(fgets(texto, sizeof(texto), file) != NULL && count < MAX_CONTRIBUINTES){
                    struct TRABALHADOR trabalhador;
                    temp = strtok(texto, " ");
                    trabalhador.codigo = atoi(temp);
                    temp = strtok(NULL, " ");
                    strcpy(trabalhador.profissao, temp);
                    temp = strtok(NULL, " ");
                    trabalhador.TaxaDesconto = atof(temp);
                    contribuintes[count] = trabalhador;
                    count++;
                } else {
                    printf("\nErro ao ler o linha do arquivo.");
                }
            }
        } else {
            printf("\nErro ao ler o arquivo.");
        }
    } else {
        printf("\nErro ao abrir o arquivo.");
    }

    fclose(file);

    return countItens;
}

void salvarContribuintesSelecionados(struct TRABALHADOR contribuintes[MAX_CONTRIBUINTES], int countContribuintes){
    FILE *file;
    file = fopen("profissoes_selecionadas.dat", "wb");

    if(file != NULL){
        for(int x = 0; x < countContribuintes; x++){
            if(contribuintes[x].TaxaDesconto < 5){
                if(fwrite(&contribuintes[x],sizeof(struct TRABALHADOR),1,file) != 1){
                    printf("\nErro ao gravar constribuinte no arquivos de constribuites selecionados.");
                }
            }
        }
    } else {
        printf("\nFalha ao salvar arquivo com contribuintes selecionados.");
    }

    fclose(file);
}

void salvarProfissoesE(struct TRABALHADOR contribuintes[MAX_CONTRIBUINTES], int countContribuintes){
    FILE *file;
    file = fopen("profissões_E.txt", "w");
    int coluna = 0;

    if(file != NULL){
        for(int x = 0; x < countContribuintes; x++){
            if(contribuintes[x].profissao[0] == 'E'){
                if(fprintf(file, "%s %f\n", contribuintes[x].profissao, contribuintes[x].TaxaDesconto) < 0){
                    printf("\nErro ao salvar no arquivo profissoes_E");
                }
            }
        }
    }else{
        printf("\nFalha ao criar arquivos das profissoes_E.");
    }

    fclose(file);
}

void contaLinhasArquivoConstribuintesSelecionados(){
    FILE *file;
    struct TRABALHADOR temp;
    int nItens = 0, continuarLendo = 1;

    file = fopen("profissoes_selecionadas.dat", "rb");

    if(file != NULL){
        do{
            if(fread(&temp, sizeof(struct TRABALHADOR), 1, file) != 1){
                continuarLendo = 0;
            } else {
                nItens++;
            }
        }while(continuarLendo);
    }

    fclose(file);

    printf("\nO arquivo de constribuintes selecionados possui %d itens.", nItens);
}

