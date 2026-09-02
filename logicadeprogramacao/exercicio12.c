#include <stdio.h>
#include <math.h> 

int main() {
    double num1, num2, resultado;

    printf("Digite dois numeros maiores que zero: ");
    scanf("%lf %lf", &num1, &num2);

    resultado = pow(num1, num2);

    printf("%.2lf elevado a %.2lf eh: %.2lf\n", num1, num2, resultado);
}