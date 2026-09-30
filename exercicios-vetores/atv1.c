#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma, i;
    
    soma = A[0] + A[1] + A[5];
    printf("A soma das posicoes 0, 1 e 5 é: %d\n", soma);
    
    A[4] = 100;
    
    printf("Valores do vetor A:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", A[i]);
    }
}