#include <stdio.h>
#include <stdlib.h>

int main(){

    int numero;

    printf("Digite um número inteiro:");
    scanf("%i", &numero); 
    
    if(numero % 2 == 0){
        printf("O numero e par");
    }else {
        printf("O numero digitado e impar");
    }
}