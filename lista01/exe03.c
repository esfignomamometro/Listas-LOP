#include <stdio.h>

int main(){
	char nome[50];
	float salario, reajuste, salariof;
	printf("Digite seu nome\n");       
	scanf("%[^\n]s", &nome);
	printf("Digite seu salario\n");
	scanf("%f", &salario);
	printf("Digite o reajuste percentual\n");
	scanf("%f", &reajuste);
	salariof = salario + (salario * reajuste) / 100;
	printf("%s, seu salario depois dos reajustes e de R$%.2f", nome, salariof);
	getch();
	return 0;
}