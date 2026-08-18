#include <stdio.h>

void main(){
	int a, b, c, d;
	printf("Digite um numero inteiro\n");
	scanf("%d", &a);
	printf("Digite outro numero inteiro\n");
	scanf("%d", &b);
	printf("Digite outro numero inteiro\n");
	scanf("%d", &c);
	d = (a + b) / c;
	printf("(a+b)/c = %d", d);
	getch();
}