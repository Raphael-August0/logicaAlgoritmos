#include <stdio.h>

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int estoque;
};

struct Venda {
    struct Produto produto;
    int quantidade;
    float valorTotal;
};

int main() {
    struct Produto produtos[10];
    struct Venda vendas[20];
    int totalProdutos = 0, totalVendas = 0;
    int opcao, i, j, codBusca, qtd, posProduto;

    do {
        printf("\n=== CONTROLE DE VENDAS ===\n");
        printf("1. Cadastrar produto (ate 10)\n");
        printf("2. Registrar venda (ate 20)\n");
        printf("3. Relatorio de vendas e faturamento\n");
        printf("0. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totalProdutos >= 10) {
                printf("Limite de 10 produtos atingido!\n");
            } else {
                printf("Codigo do produto: ");
                scanf("%d", &produtos[totalProdutos].codigo);
                printf("Nome do produto: ");
                scanf(" %[^\n]", produtos[totalProdutos].nome);
                printf("Preco: ");
                scanf("%f", &produtos[totalProdutos].preco);
                printf("Quantidade em estoque: ");
                scanf("%d", &produtos[totalProdutos].estoque);
                totalProdutos++;
                printf("Produto cadastrado!\n");
            }
        } else if (opcao == 2) {
            if (totalVendas >= 20) {
                printf("Limite de 20 vendas atingido!\n");
            } else if (totalProdutos == 0) {
                printf("Cadastre pelo menos um produto antes de vender!\n");
            } else {
                printf("Digite o codigo do produto vendido: ");
                scanf("%d", &codBusca);

                posProduto = -1;
                for (i = 0; i < totalProdutos; i++) {
                    if (produtos[i].codigo == codBusca) {
                        posProduto = i;
                    }
                }

                if (posProduto == -1) {
                    printf("Produto nao encontrado!\n");
                } else {
                    printf("Produto: %s | Estoque disponivel: %d\n",
                           produtos[posProduto].nome, produtos[posProduto].estoque);
                    printf("Quantidade vendida: ");
                    scanf("%d", &qtd);

                    if (qtd <= 0 || qtd > produtos[posProduto].estoque) {
                        printf("Quantidade invalida ou estoque insuficiente!\n");
                    } else {
                        produtos[posProduto].estoque = produtos[posProduto].estoque - qtd;

                        vendas[totalVendas].produto = produtos[posProduto];
                        vendas[totalVendas].quantidade = qtd;
                        vendas[totalVendas].valorTotal = qtd * produtos[posProduto].preco;
                        totalVendas++;

                        printf("Venda registrada com sucesso!\n");
                    }
                }
            }
        } else if (opcao == 3) {
            if (totalVendas == 0) {
                printf("Nenhuma venda registrada ainda.\n");
            } else {
                float faturamentoTotal = 0.0;
                float maiorFaturamentoProduto = -1.0;
                int indiceCampeao = 0;

                printf("\n--- VENDAS REALIZADAS ---\n");
                for (i = 0; i < totalVendas; i++) {
                    printf("Venda %d | Produto: %s | Qtd: %d | Total: R$ %.2f\n",
                           i + 1, vendas[i].produto.nome,
                           vendas[i].quantidade, vendas[i].valorTotal);

                    faturamentoTotal = faturamentoTotal + vendas[i].valorTotal;
                }

                for (i = 0; i < totalProdutos; i++) {
                    float faturamentoDoProduto = 0.0;
                    for (j = 0; j < totalVendas; j++) {
                        if (vendas[j].produto.codigo == produtos[i].codigo) {
                            faturamentoDoProduto = faturamentoDoProduto + vendas[j].valorTotal;
                        }
                    }

                    if (faturamentoDoProduto > maiorFaturamentoProduto) {
                        maiorFaturamentoProduto = faturamentoDoProduto;
                        indiceCampeao = i;
                    }
                }

                printf("\nFaturamento total da loja: R$ %.2f\n", faturamentoTotal);
                printf("Produto com maior faturamento: %s (R$ %.2f)\n",
                       produtos[indiceCampeao].nome, maiorFaturamentoProduto);
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}