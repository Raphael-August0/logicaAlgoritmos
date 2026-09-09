#include <stdio.h>

int main() {
    float altura, peso_ideal;
    char sexo;
    
    printf("Digite o sexo (M para homem, F para mulher): ");
    scanf(" %c", &sexo);
    
    printf("Digite a altura em metros (ex: 1.75): ");
    scanf("%f", &altura);
    
    if (sexo == 'M' || sexo == 'm') {
        peso_ideal = (72.7 * altura) - 58.0;
        printf("O peso ideal para homem e: %.2f kg", peso_ideal);
    } else if (sexo == 'F' || sexo == 'f') {
        peso_ideal = (62.1 * altura) - 44.7;
        printf("O peso ideal para mulher e: %.2f kg", peso_ideal);
    } else {
        printf("Sexo invalido.");
    }
}