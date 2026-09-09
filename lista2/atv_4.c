#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;

    printf("Digite o numero A ");
    scanf("%i", &a);

    printf("Digite o numero B ");
    scanf("%i", &b);

    if(a==b){
        int soma = a+b;
        printf("A soma dos números iguais é %i", soma);
    }else{
        int mult = a*b;
        printf("A multiplicaçao dos números é %i", mult);
    }
}