#include<stdio.h>

int main(){
    float deposito, juros, montante;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros em forma de porcentagem: ");
    scanf("%f", &juros);

    montante = deposito + (deposito * (juros / 100));

    printf("O montante final com acrescimo de juros e: %.2fR$\n", montante);

}