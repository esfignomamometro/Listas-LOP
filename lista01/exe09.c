#include <stdio.h>

int main(){
	char n [50];
	float p, pf;
	printf("Digite o nome da mercadoria\n");
	scanf("%[^\n]s", &n);
	printf("Digite o preco da mercadoria\n");
	scanf("%f", &p);
	pf = p * 1.05;
	printf("O preco da mercadoria %s, atualmente, e de R$%.02f", n, pf);
	getch();
	return 0;
}