#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Paciente {
    int codigo;
    char nome[50];
    int idade;
};

struct Consulta {
    struct Paciente paciente;
    struct Data data;
    char descricao[100];
};

int main() {
    struct Paciente pacientes[15];
    struct Consulta consultas[30];
    int totalPacientes = 0, totalConsultas = 0;
    int opcao, i, j, codBusca, posPaciente, d, m, a, achou;

    do {
        printf("\n=== SISTEMA DA CLINICA ===\n");
        printf("1. Cadastrar paciente (ate 15)\n");
        printf("2. Registrar consulta (ate 30)\n");
        printf("3. Pesquisar consultas de um paciente pelo codigo\n");
        printf("4. Listar consultas realizadas em determinada data\n");
        printf("5. Relatorio de atendimentos por paciente\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totalPacientes >= 15) {
                printf("Limite de 15 pacientes atingido!\n");
            } else {
                printf("Codigo do paciente: ");
                scanf("%d", &pacientes[totalPacientes].codigo);
                printf("Nome do paciente: ");
                scanf(" %[^\n]", pacientes[totalPacientes].nome);
                printf("Idade: ");
                scanf("%d", &pacientes[totalPacientes].idade);
                totalPacientes++;
                printf("Paciente cadastrado com sucesso!\n");
            }
        } else if (opcao == 2) {
            if (totalConsultas >= 30) {
                printf("Limite de 30 consultas atingido!\n");
            } else if (totalPacientes == 0) {
                printf("Cadastre um paciente antes de registrar consultas!\n");
            } else {
                printf("Codigo do paciente: ");
                scanf("%d", &codBusca);

                posPaciente = -1;
                for (i = 0; i < totalPacientes; i++) {
                    if (pacientes[i].codigo == codBusca) {
                        posPaciente = i;
                    }
                }

                if (posPaciente == -1) {
                    printf("Paciente nao encontrado!\n");
                } else {
                    consultas[totalConsultas].paciente = pacientes[posPaciente];
                    printf("Data da consulta (dia mes ano): ");
                    scanf("%d %d %d", &consultas[totalConsultas].data.dia,
                          &consultas[totalConsultas].data.mes,
                          &consultas[totalConsultas].data.ano);
                    printf("Descricao do atendimento: ");
                    scanf(" %[^\n]", consultas[totalConsultas].descricao);
                    totalConsultas++;
                    printf("Consulta registrada!\n");
                }
            }
        } else if (opcao == 3) {
            printf("Digite o codigo do paciente: ");
            scanf("%d", &codBusca);
            achou = 0;

            printf("\n--- CONSULTAS DO PACIENTE %d ---\n", codBusca);
            for (i = 0; i < totalConsultas; i++) {
                if (consultas[i].paciente.codigo == codBusca) {
                    printf("Data: %02d/%02d/%04d | Paciente: %s | Descricao: %s\n",
                           consultas[i].data.dia, consultas[i].data.mes, consultas[i].data.ano,
                           consultas[i].paciente.nome, consultas[i].descricao);
                    achou = 1;
                }
            }

            if (achou == 0) {
                printf("Nenhuma consulta encontrada para este codigo.\n");
            }
        } else if (opcao == 4) {
            printf("Digite a data (dia mes ano): ");
            scanf("%d %d %d", &d, &m, &a);
            achou = 0;

            printf("\n--- CONSULTAS EM %02d/%02d/%04d ---\n", d, m, a);
            for (i = 0; i < totalConsultas; i++) {
                if (consultas[i].data.dia == d &&
                    consultas[i].data.mes == m &&
                    consultas[i].data.ano == a) {
                    printf("Paciente: %s (Cod: %d) | Descricao: %s\n",
                           consultas[i].paciente.nome, consultas[i].paciente.codigo,
                           consultas[i].descricao);
                    achou = 1;
                }
            }

            if (achou == 0) {
                printf("Nenhuma consulta encontrada nesta data.\n");
            }
        } else if (opcao == 5) {
            if (totalPacientes == 0) {
                printf("Nenhum paciente cadastrado.\n");
            } else {
                int maiorQtd = -1;
                int indiceMaisAtendido = 0;

                printf("\n--- TOTAL DE CONSULTAS POR PACIENTE ---\n");
                for (i = 0; i < totalPacientes; i++) {
                    int cont = 0;
                    for (j = 0; j < totalConsultas; j++) {
                        if (consultas[j].paciente.codigo == pacientes[i].codigo) {
                            cont++;
                        }
                    }

                    printf("Cod: %d | Paciente: %s | Consultas: %d\n",
                           pacientes[i].codigo, pacientes[i].nome, cont);

                    if (cont > maiorQtd) {
                        maiorQtd = cont;
                        indiceMaisAtendido = i;
                    }
                }

                printf("\nPaciente com maior numero de atendimentos: %s (%d consultas)\n",
                       pacientes[indiceMaisAtendido].nome, maiorQtd);
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}