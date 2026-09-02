#include<stdio.h>

int main()
{
    float salario, novo_salario;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    novo_salario = salario * 1.25;

    printf("O novo salario do funcionario e: %.2f\n", novo_salario);

}