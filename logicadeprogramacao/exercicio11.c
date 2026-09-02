#include <stdio.h>
#include <math.h>

int main() {
    int numero, quadrado, cubo;
    double raiz_quadrada, raiz_cubica;

    printf("Digite um numero positivo e maior que zero: ");
    scanf("%d", &numero);

    quadrado = numero * numero;
    cubo = numero * numero * numero;

    raiz_quadrada = sqrt(numero);
 
    raiz_cubica = cbrt(numero);

    printf("Numero ao quadrado: %d\n", quadrado);
    printf("Numero ao cubo: %d\n", cubo);
    printf("Raiz quadrada: %.2lf\n", raiz_quadrada);
    printf("Raiz cubica: %.2lf\n", raiz_cubica);
 
}