#include <stdio.h>

int main() {
    int a, b, c;
    
    printf("Digite o primeiro valor inteiro: ");
    scanf("%i", &a);
    
    printf("Digite o segundo valor inteiro (diferente do primeiro): ");
    scanf("%i", &b);
    
    printf("Digite o terceiro valor inteiro (diferente dos anteriores): ");
    scanf("%i", &c);

    printf("Ordem decrescente: ");
    
    if (a > b && a > c) {
        if (b > c) {
            printf("%i, %i, %i\n", a, b, c);
        } else {
            printf("%i, %i, %i\n", a, c, b);
        }
        
    } else if (b > a && b > c) {
        if (a > c) {
            printf("%i, %i, %i", b, a, c);
        } else {
            printf("%i, %i, %i", b, c, a);
        }
        
    } else {
        if (a > b) {
            printf("%i, %i, %i", c, a, b);
        } else {
            printf("%d, %d, %d", c, b, a);
        }
    }
}