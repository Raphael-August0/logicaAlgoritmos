#include <stdio.h>

int main()
{
    int n1, n2, n3, n4, soma;
    
    printf("Digite primeiro numero: ");
    scanf("%d", &n1);
    
    printf("Digite o valor do segundo numero: ");
    scanf("%d", &n2);
    
    printf("Digite agora terceiro numero: ");
    scanf("%d", &n3);
    
    printf("Digite o valor do quarto numero: ");
    scanf("%d", &n4);
    
    soma= n1+n2+n3+n4;
    
    printf("O valor da soma dos valores digitados e %d", soma);
    
}
