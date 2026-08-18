#include <stdio.h>

int main(){
	float r, h, a, v, c, a1;
	printf("Digite o raio em centimetros\n");
	scanf("%f", &r);
	printf("Digite a altura em centimetros\n");
	scanf("%f", &h);
	c = 3.1416 * 2 * r;
	a1 = 3.1416 * (r * r);
	a = (2 * a1) + (h * c);
	v = a1 * h;
	printf("A area do cilindro em cm2 e aproximadamente %.02f\n", a);
	printf("O volume do cilindro em cm3 e aproximadamente %.02f", v);
	getch();
	return 0;
}