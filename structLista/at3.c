#include <stdio.h>

struct Funcionario {
    int codigo;
    char nome[50];
    char cargo[40];
    float salarioBase;
    float horasExtras;
};

int main() {
    struct Funcionario funcionarios[8];
    int total, i;
    float valorHora, valorHoraExtra, salarioBruto, desconto, salarioLiquido;
    float maiorSalarioLiquido = 0.0, custoTotalFolha = 0.0;
    int indiceMaior = 0;

    printf("Quantos funcionarios deseja cadastrar (1 a 8)? ");
    scanf("%d", &total);

    while (total < 1 || total > 8) {
        printf("Quantidade invalida! Digite um valor entre 1 e 8: ");
        scanf("%d", &total);
    }

    for (i = 0; i < total; i++) {
        printf("\n--- Funcionario %d ---\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &funcionarios[i].codigo);
        printf("Nome: ");
        scanf(" %[^\n]", funcionarios[i].nome);
        printf("Cargo: ");
        scanf(" %[^\n]", funcionarios[i].cargo);
        printf("Salario-base: ");
        scanf("%f", &funcionarios[i].salarioBase);
        printf("Quantidade de horas extras: ");
        scanf("%f", &funcionarios[i].horasExtras);
    }

    printf("\n================ FOLHA DE PAGAMENTO ================\n");
    for (i = 0; i < total; i++) {
        valorHora = funcionarios[i].salarioBase / 160.0;

        valorHoraExtra = valorHora * 1.5;

        salarioBruto = funcionarios[i].salarioBase + (funcionarios[i].horasExtras * valorHoraExtra);
        desconto = salarioBruto * 0.10;

        salarioLiquido = salarioBruto - desconto;

        printf("Cod: %d | Nome: %s | Cargo: %s\n",
               funcionarios[i].codigo, funcionarios[i].nome, funcionarios[i].cargo);
        printf("Salario Bruto: R$ %.2f | Desconto (10%%): R$ %.2f | Salario Liquido: R$ %.2f\n\n",
               salarioBruto, desconto, salarioLiquido);

        if (i == 0 || salarioLiquido > maiorSalarioLiquido) {
            maiorSalarioLiquido = salarioLiquido;
            indiceMaior = i;
        }

        custoTotalFolha = custoTotalFolha + salarioBruto;
    }

    printf("----------------------------------------------------\n");
    printf("Maior salario liquido: %s (R$ %.2f)\n",
           funcionarios[indiceMaior].nome, maiorSalarioLiquido);
    printf("Custo total da folha (salarios brutos): R$ %.2f\n", custoTotalFolha);

    return 0;
}