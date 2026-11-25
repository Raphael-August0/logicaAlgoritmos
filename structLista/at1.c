#include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float media;
};

float calcularMedia(float n1, float n2) {
    return (n1 + n2) / 2.0;
}

int main() {
    struct Aluno alunos[10];
    int i;
    float somaMedias = 0.0, mediaGeral;
    int indiceMaior = 0, indiceMenor = 0;
    int acimaDaMedia = 0;

    for (i = 0; i < 10; i++) {
        printf("\n--- Cadastro do Aluno %d ---\n", i + 1);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf(" %[^\n]", alunos[i].nome);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);

        alunos[i].media = calcularMedia(alunos[i].nota1, alunos[i].nota2);
        somaMedias = somaMedias + alunos[i].media;
    }

    mediaGeral = somaMedias / 10.0;

    printf("\n================ RESULTADOS ================\n");
    for (i = 0; i < 10; i++) {
        printf("Matricula: %d | Nome: %s | Media: %.2f | Situacao: ",
               alunos[i].matricula, alunos[i].nome, alunos[i].media);

        if (alunos[i].media >= 6.0) {
            printf("APROVADO\n");
        } else {
            printf("REPROVADO\n");
        }

        if (alunos[i].media > alunos[indiceMaior].media) {
            indiceMaior = i;
        }
        if (alunos[i].media < alunos[indiceMenor].media) {
            indiceMenor = i;
        }

        if (alunos[i].media > mediaGeral) {
            acimaDaMedia++;
        }
    }

    printf("\n--------------------------------------------\n");
    printf("Maior media: %s (%.2f)\n", alunos[indiceMaior].nome, alunos[indiceMaior].media);
    printf("Menor media: %s (%.2f)\n", alunos[indiceMenor].nome, alunos[indiceMenor].media);
    printf("Media geral da turma: %.2f\n", mediaGeral);
    printf("Quantidade de alunos acima da media geral: %d\n", acimaDaMedia);

    return 0;
}