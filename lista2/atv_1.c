#include <stdio.h>

int main() {
    char sexo;
    char estado_civil;
    int anos;

    printf("Digite o sexo (M/F): ");
    sexo = getchar();

    getchar(); 

    printf("Digite o estado civil (C/S): ");
    estado_civil = getchar();

    if (sexo == 'F' && estado_civil == 'C') {
        printf("Digite o tempo de casamento (em anos): ");
        scanf("%d", &anos);
    }

}

