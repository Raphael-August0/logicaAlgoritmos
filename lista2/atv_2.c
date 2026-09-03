#include <stdio.h>

int main() {
    char sexo;
    char estado_civil;
    int anos;

    printf("Digite o sexo (m/f): ");
    sexo = getchar();

    getchar(); 

    printf("Digite o estado civil (c/f): ");
    estado_civil = getchar();

    if (sexo == 'f' && estado_civil == 'c') {
        printf("Digite o tempo de casamento (em anos): ");
        scanf("%d", &anos);
    }

}

