#include <stdio.h>

int main() {
    float limite, registrada, excedido_percentual;
    
    printf("Velocidade maxima permitida da via: ");
    scanf("%f", &limite);
    
    printf("Velocidade registrada do veiculo: ");
    scanf("%f", &registrada);

    printf("\n=== RELATORIO DE TRANSITO ===\n");
    printf("Limite da via: %.2f km/h", limite);
    printf("Velocidade registrada: %.2f km/h", registrada);

    if (registrada <= limite) {
        printf("Situacao: Veiculo dentro do limite. Nao houve infracao.");
    } else {
        excedido_percentual = ((registrada - limite) / limite) * 100;
        printf("Percentual excedido: %.2f%%\n", excedido_percentual);

        if (excedido_percentual <= 20.0) {
            printf("Classificacao: Infracao MEDIA.");
        } else if (excedido_percentual <= 50.0) {
            printf("Classificacao: Infracao GRAVE.");
        } else {
            printf("Classificacao: Infracao GRAVISSIMA.");
        }

        if (registrada > 120.0) {
            printf("ALERTA: Velocidade extremamente elevada! Risco alto de acidente.");
        }
    }
}