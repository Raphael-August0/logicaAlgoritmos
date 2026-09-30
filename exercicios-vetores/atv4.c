#include <stdio.h>

int main() {
    int vetor[8];
    int x, y, soma, i;
    
    for (i = 0; i < 8; i++) {
        printf("Digite o valor para a posicao %d: ", i);
        scanf("%d", &vetor[i]);
    }
    
    printf("Digite a posicao X (0 a 7): ");
    scanf("%d", &x);
    
    printf("Digite a posicao Y (0 a 7): ");
    scanf("%d", &y);
    
    soma = vetor[x] + vetor[y];
    printf("A soma dos valores nas posicoes %d e %d e: %d\n", x, y, soma);
}