#include <stdio.h>

int main() {
    float peso, altura, imc;
    
    printf("Digite o peso em kg: ");
    scanf("%f", &peso);
    
    printf("Digite a altura em metros: ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);
    printf("Seu IMC e: %.2f", imc);

    if (imc < 18.5) {
        printf("Condicao: Abaixo do peso");
    } else if (imc >= 18.5 && imc < 25) {
        printf("Condicao: Peso normal");
    } else if (imc >= 25 && imc <= 30) {
        printf("Condicao: Acima do peso");
    } else {
        printf("Condicao: Obeso");
    }
}