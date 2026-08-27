#include <stdio.h>
#include <stdlib.h>

int main() {
	float n1, n2, n3, media;
	
	printf("Qual foi a primeira nota? ");
	scanf("%f", &n1);
	
	printf("Qual foi a segunda nota? ");
	scanf("%f", &n2);
	
	printf("Qual foi a terceira nota? ");
	scanf("%f", &n3);
	
	media= (n1+n2+n3) /3;
	
	printf("A sua média foi: %f", media);
}
