#include <stdio.h>

int main() {
    float valores[10], quadrados[10];
    int i;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o valor real %d: ", i + 1);
        scanf("%f", &valores[i]);
        quadrados[i] = valores[i] * valores[i];
    }
    
    printf("\nConjunto original:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", valores[i]);
    }
    
    printf("\n\nConjunto dos quadrados:\n");
    for (i = 0; i < 10; i++) {
        printf("%.2f ", quadrados[i]);
    }
}