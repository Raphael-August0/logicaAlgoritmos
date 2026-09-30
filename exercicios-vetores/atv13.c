#include <stdio.h>

int main() {
    float vetor[5];
    float maior, menor;
    int i, pos_maior = 0, pos_menor = 0;
    
    for (i = 0; i < 5; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%f", &vetor[i]);
    }
    
    maior = vetor[0];
    menor = vetor[0];
    
    for (i = 1; i < 5; i++) {
        if (vetor[i] > maior) {
            maior = vetor[i];
            pos_maior = i;
        }
        if (vetor[i] < menor) {
            menor = vetor[i];
            pos_menor = i;
        }
    }
    
    printf("A posicao do maior valor e: %d\n", pos_maior);
    printf("A posicao do menor valor e: %d\n", pos_menor);
}