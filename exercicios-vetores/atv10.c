#include <stdio.h>

int main() {
    float notas[15];
    float soma = 0.0, media;
    int i;
    
    for (i = 0; i < 15; i++) {
        printf("Digite a nota do aluno %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma = soma + notas[i];
    }
    
    media = soma / 15;
    printf("A media geral da turma e: %.2f\n", media);
}