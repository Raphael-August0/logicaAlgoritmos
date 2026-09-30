#include <stdio.h>

int main() {
    float vetor[10];
    float soma_positivos = 0.0;
    int i, qtd_negativos = 0;
    
    for (i = 0; i < 10; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%f", &vetor[i]);
        
        if (vetor[i] < 0) {
            qtd_negativos++;
        } else if (vetor[i] > 0) {
            soma_positivos = soma_positivos + vetor[i];
        }
    }
    
    printf("Quantidade de numeros negativos: %d\n", qtd_negativos);
    printf("Soma dos numeros positivos: %.2f\n", soma_positivos);
}