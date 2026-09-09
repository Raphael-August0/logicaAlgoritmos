#include <stdio.h>

int main() {
    int numero;
    
    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        int resultado = numero + 5;
        printf("O numero é par. Somando 5 o resultado é: %d\n", resultado);
    } else {
        int impar = numero + 8;
        printf("O numero é impar . Somando 8 o resultado é: %d\n", impar);
    }
}