#include<stdio.h>

int main(){
    float area, base, altura;

    printf("Digite o comprimento base do triangulo: ");
    scanf("%f", &base);

    printf("Digite a altura do triangulo: ");
    scanf("%f", &altura);

    area = (base * altura) / 2;

    printf("A area do triangulo e: %.2f\n", area);

}