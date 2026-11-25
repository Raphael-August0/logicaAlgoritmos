#include <stdio.h>

struct Produto {
    int codigo;
    char nome[50];
    float preco;
    int quantidade;
};

void reporEstoque(struct Produto lista[], int indice, int qtd) {
    lista[indice].quantidade = lista[indice].quantidade + qtd;
}

void baixarEstoque(struct Produto lista[], int indice, int qtd) {
    lista[indice].quantidade = lista[indice].quantidade - qtd;
}

int main() {
    struct Produto produtos[15];
    int totalProdutos = 0;
    int opcao, i, codBusca, qtd, duplicado, encontrado;

    do {
        printf("\n=== MENU PAPELARIA ===\n");
        printf("1. Cadastrar produto\n");
        printf("2. Listar produtos e resumo do estoque\n");
        printf("3. Repor estoque\n");
        printf("4. Registrar venda\n");
        printf("5. Consultar produto pelo codigo\n");
        printf("0. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (totalProdutos >= 15) {
                printf("Limite maximo de 15 produtos atingido!\n");
            } else {
                printf("Codigo do produto: ");
                scanf("%d", &codBusca);

                duplicado = 0;
                for (i = 0; i < totalProdutos; i++) {
                    if (produtos[i].codigo == codBusca) {
                        duplicado = 1;
                    }
                }

                if (duplicado == 1) {
                    printf("Erro: Ja existe um produto com esse codigo!\n");
                } else {
                    produtos[totalProdutos].codigo = codBusca;
                    printf("Nome do produto: ");
                    scanf(" %[^\n]", produtos[totalProdutos].nome);
                    printf("Preco unitario: ");
                    scanf("%f", &produtos[totalProdutos].preco);
                    printf("Quantidade inicial em estoque: ");
                    scanf("%d", &produtos[totalProdutos].quantidade);
                    totalProdutos++;
                    printf("Produto cadastrado com sucesso!\n");
                }
            }
        } else if (opcao == 2) {
            if (totalProdutos == 0) {
                printf("Nenhum produto cadastrado.\n");
            } else {
                float valorTotalEstoque = 0.0;
                int indiceMaiorValor = 0;
                float maiorValorProduto = produtos[0].preco * produtos[0].quantidade;

                printf("\n--- LISTA DE PRODUTOS ---\n");
                for (i = 0; i < totalProdutos; i++) {
                    float valorItem = produtos[i].preco * produtos[i].quantidade;
                    printf("Cod: %d | Nome: %s | Preco: R$ %.2f | Qtd: %d | Subtotal: R$ %.2f\n",
                           produtos[i].codigo, produtos[i].nome, produtos[i].preco,
                           produtos[i].quantidade, valorItem);

                    valorTotalEstoque = valorTotalEstoque + valorItem;

                    if (valorItem > maiorValorProduto) {
                        maiorValorProduto = valorItem;
                        indiceMaiorValor = i;
                    }
                }

                printf("\nValor total de todos os produtos em estoque: R$ %.2f\n", valorTotalEstoque);
                printf("Produto com maior valor total em estoque: %s (R$ %.2f)\n",
                       produtos[indiceMaiorValor].nome, maiorValorProduto);
            }
        } else if (opcao == 3) {
            printf("Digite o codigo do produto para reposicao: ");
            scanf("%d", &codBusca);
            encontrado = -1;

            for (i = 0; i < totalProdutos; i++) {
                if (produtos[i].codigo == codBusca) {
                    encontrado = i;
                }
            }

            if (encontrado == -1) {
                printf("Produto nao encontrado!\n");
            } else {
                printf("Quantidade a adicionar: ");
                scanf("%d", &qtd);
                if (qtd > 0) {
                    reporEstoque(produtos, encontrado, qtd);
                    printf("Estoque atualizado! Nova quantidade: %d\n", produtos[encontrado].quantidade);
                } else {
                    printf("Quantidade invalida!\n");
                }
            }
        } else if (opcao == 4) {
            printf("Digite o codigo do produto vendido: ");
            scanf("%d", &codBusca);
            encontrado = -1;

            for (i = 0; i < totalProdutos; i++) {
                if (produtos[i].codigo == codBusca) {
                    encontrado = i;
                }
            }

            if (encontrado == -1) {
                printf("Produto nao encontrado!\n");
            } else {
                printf("Quantidade vendida (Disponivel: %d): ", produtos[encontrado].quantidade);
                scanf("%d", &qtd);

                if (qtd <= 0) {
                    printf("Quantidade invalida!\n");
                } else if (qtd > produtos[encontrado].quantidade) {
                    printf("Erro: Estoque insuficiente para realizar a venda!\n");
                } else {
                    baixarEstoque(produtos, encontrado, qtd);
                    printf("Venda registrada! Valor: R$ %.2f | Estoque restante: %d\n",
                           qtd * produtos[encontrado].preco, produtos[encontrado].quantidade);
                }
            }
        } else if (opcao == 5) {
            printf("Digite o codigo do produto: ");
            scanf("%d", &codBusca);
            encontrado = -1;

            for (i = 0; i < totalProdutos; i++) {
                if (produtos[i].codigo == codBusca) {
                    encontrado = i;
                }
            }

            if (encontrado == -1) {
                printf("Produto nao encontrado!\n");
            } else {
                printf("Codigo: %d | Nome: %s | Preco: R$ %.2f | Estoque: %d\n",
                       produtos[encontrado].codigo, produtos[encontrado].nome,
                       produtos[encontrado].preco, produtos[encontrado].quantidade);
            }
        } else if (opcao != 0) {
            printf("Opcao invalida!\n");
        }

    } while (opcao != 0);

    return 0;
}