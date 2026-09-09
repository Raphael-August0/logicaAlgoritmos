#include <stdio.h>

int main() {
    float preco_etiqueta, valor_final;
    int codigo;
    
    printf("Digite o preco normal do produto: R$ ");
    scanf("%f", &preco_etiqueta);
    
    printf("\nCodigos de pagamento:\n");
    printf("1 - A vista no dinheiro/cheque (10%% desc)\n");
    printf("2 - A vista no cartao (15%% desc)\n");
    printf("3 - Duas parcelas (Preco normal)\n");
    printf("4 - Duas parcelas (Acrescimo 10%%)\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &codigo);

    if (codigo == 1) {
        valor_final = preco_etiqueta - (preco_etiqueta * 0.10);
        printf("Valor final: R$ %.2f", valor_final);
        
    } else if (codigo == 2) {
        valor_final = preco_etiqueta - (preco_etiqueta * 0.15);
        printf("Valor final: R$ %.2f", valor_final);
        
    } else if (codigo == 3) {
        valor_final = preco_etiqueta;
        printf("Valor final: R$ %.2f (2x de R$ %.2f)", valor_final, valor_final / 2);
        
    } else if (codigo == 4) {
        valor_final = preco_etiqueta + (preco_etiqueta * 0.10);
        printf("Valor final: R$ %.2f (2x de R$ %.2f)", valor_final, valor_final / 2);
        
    } else {
        printf("Codigo invalido!");
    }
}