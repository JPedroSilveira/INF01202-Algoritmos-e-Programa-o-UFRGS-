#include <stdio.h>

#define TAM_NOME 50
#define TAM_ENDERECO 100
#define TAM_CONVENIO 50
#define MAX_CONSULTAS 4

typedef struct Horario{
    int horas, minutos;
}HORARIO;

typedef struct Paciente{
    char nome[TAM_NOME], endereco[TAM_ENDERECO], convenio[TAM_CONVENIO];
}PACIENTE;

typedef struct Consulta{
    PACIENTE paciente;
    char nomeMedico[TAM_NOME];
    HORARIO horario;
}CONSULTA;

void marcarConsulta(CONSULTA consultas[MAX_CONSULTAS], int *contConsultas);
void modificarMedico(CONSULTA consultas[MAX_CONSULTAS], int contConsultas);
void encontrarConsulta(CONSULTA consultas[MAX_CONSULTAS], int contConsultas, HORARIO horario);

int main(){
    int continuarExecutando = 1, option = 0;
    CONSULTA consultas[MAX_CONSULTAS];
    int contConsultas = 0;

    do{
        printf("\nDigite o numero da opcao: \n 1)Marcar consulta \n 2)Modificacao de medico \n 3)Visualizar relatorio \n 4)Sair \n");
        scanf("%d", &option);

        switch(option){
            case 1:
                marcarConsulta(consultas, &contConsultas);
                break;
            case 2:
                modificarMedico(consultas, contConsultas);
                break;
            case 3:
                printf("Foram marcadas %d consultas!", contConsultas);
                break;
            case 4:
                printf("\nFinalizando...");
                continuarExecutando = 0;
                break;
        }
    }while(continuarExecutando);

    return 0;
}

void marcarConsulta(CONSULTA consultas[MAX_CONSULTAS], int *contConsultas){
    if(*contConsultas < MAX_CONSULTAS){
        CONSULTA consulta;

        fflush(stdin);
        printf("\nDigite o nome do paciente:");
        gets(consulta.paciente.nome);
        printf("\nDigite o endereco do paciente:");
        gets(consulta.paciente.endereco);
        printf("\nDigite o nome do convenio do paciente:");
        gets(consulta.paciente.convenio);
        printf("\nDigite o nome do medico:");
        gets(consulta.nomeMedico);
        printf("\nDigite a hora da consulta:");
        scanf("%d", &consulta.horario.horas);
        printf("\nDigite o minuto da consulta:");
        scanf("%d", &consulta.horario.minutos);

        consultas[*contConsultas] = consulta;
        *contConsultas = *contConsultas + 1;
    } else {
        printf("\nOs horarios ja estao todos ocupados.");
    }
}

void modificarMedico(CONSULTA consultas[MAX_CONSULTAS], int contConsultas){
    HORARIO horario;
    printf("\nDigite a hora da consulta:");
    scanf("%d", &horario.horas);
    printf("\nDigite os minutos:");
    scanf("%d", &horario.minutos);
    encontrarConsulta(consultas, contConsultas, horario);
}

void encontrarConsulta(CONSULTA consultas[MAX_CONSULTAS], int contConsultas, HORARIO horario){
    int pesquisaNaoFinalizada = 1, cont = 0;
    do{
        if(cont == contConsultas){
            pesquisaNaoFinalizada = 0;
            printf("\nInfelismente o horario nao foi encontrado no sistema!");
        }

        if(consultas[cont].horario.horas == horario.horas && consultas[cont].horario.minutos == horario.minutos){
            pesquisaNaoFinalizada = 0;
            fflush(stdin);
            printf("\nDigite o nome do novo medico:");
            gets(consultas[cont].nomeMedico);
            printf("\nModificacao realizada com sucesso!");
        }

        cont++;
    }while(pesquisaNaoFinalizada);
}
