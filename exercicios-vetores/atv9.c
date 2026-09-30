#include <stdio.h>

int main() {
    int vetor[6];
    int i = 0, valor;
    
    while (i < 6) {
        printf("Digite um valor par (%d de 6): ", i + 1);
        scanf("%d", &valor);
        
        if (valor % 2 == 0) {
            vetor[i] = valor;
            i++;
        } else {
            printf("Valor invalido. Digite apenas numeros pares.\n");
        }
    }
    
    printf("\nValores na ordem inversa:\n");
    for (i = 5; i >= 0; i--) {
        printf("%d\n", vetor[i]);
    }
}