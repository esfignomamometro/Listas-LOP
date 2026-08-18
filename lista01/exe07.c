#include <stdio.h>
#include <math.h>

int main(){
	float c, v, a;
	printf("Digite o numero de caminhoes \n");
	scanf("%f", &c);
	printf("Digite o numero de alqueires \n");
	scanf("%f", &a);
	v = ceil((a * 250) / (c * 18));
	printf("O numero necessario de viagens sera de %.0f", v);
	getch();
	return 0;
}