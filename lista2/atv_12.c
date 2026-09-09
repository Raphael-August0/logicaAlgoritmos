#include <stdio.h>

int main() {
    int id;
    float n1, n2, n3, me, ma;
    char conceito;
    
    printf("Digite o ID do aluno: ");
    scanf("%i", &id);
    
    printf("Digite as 3 notas (separadas por espaco): ");
    scanf("%f %f %f", &n1, &n2, &n3);
    
    printf("Digite a Media dos Exercicios (ME): ");
    scanf("%f", &me);

    ma = (n1 + (n2 * 2) + (n3 * 3) + me) / 7;

    if (ma >= 90) {
        conceito = 'A';
    } else if (ma >= 75 && ma < 90) {
        conceito = 'B';
    } else if (ma >= 60 && ma < 75) {
        conceito = 'C';
    } else if (ma >= 40 && ma < 60) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("===== RESULTADO DO ALUNO =====\n");
    printf("ID: %i", id);
    printf("Notas: 1: %.2f | 2: %.2f | 3: %.2f\n", n1, n2, n3);
    printf("Media dos Exercicios (ME): %.2f\n", me);
    printf("Media de Aproveitamento (MA): %.2f\n", ma);
    printf("Conceito: %c\n", conceito);
    
    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Situacao Final: APROVADO");
    } else {
        printf("Situacao Final: REPROVADO");
    }
    
}