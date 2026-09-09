#include <stdio.h>
#include <stdlib.h>

int main(){
    int n1;
    printf("Digite o número ");
    scanf("%i", &n1);

    if(n1 > 0){
        int dobro = n1*2;
        printf("O número digitado é positivo e o dobro dele é %i", dobro);
    }else{
        int triplo = n1*3;
        printf("O número digitado é negativo e o triplo dele é %i", triplo);
    }
}