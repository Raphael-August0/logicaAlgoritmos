#include <stdio.h>

int main() {
    float vetor[5];
    float maior, menor, soma = 0.0, media;
    int i;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for (i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
        }
    }
    
    media = soma / 5;
    
    printf("\nValores lidos: ");
    for (i = 0; i < 5; i++) {
        printf("%.2f ", vetor[i]);
    }
    
    printf("\nMaior valor: %.2f\n", maior);
    printf("Menor valor: %.2f\n", menor);
    printf("Media dos valores: %.2f\n", media);
}