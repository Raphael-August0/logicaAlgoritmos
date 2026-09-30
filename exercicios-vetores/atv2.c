#include <stdio.h>

int main() {
    int valores[6];
    int i;
    
    for (i = 0; i < 6; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &valores[i]);
    }
    
    printf("Os valores lidos foram:\n");
    for (i = 0; i < 6; i++) {
        printf("%d\n", valores[i]);
    }
}