#include <stdio.h>
#include <stdlib.h>

int main() {
    int n1, n2;
    
    printf("Digite o primeiro valor (1 para Verdadeiro, 0 para Falso): ");
    scanf("%d", &n1);
    
    printf("Digite o segundo valor (1 para Verdadeiro, 0 para Falso): ");
    scanf("%d", &n2);

    if (n1 && n2) {
        printf("Ambos sao verdadeiros.\n");
    } else if (!n1 && !n2) {
        printf("Ambos sao falsos.\n");
    } else {
        printf("Os valores sao diferentes (um verdadeiro e outro falso).\n");
    }
}