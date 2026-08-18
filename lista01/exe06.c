#include <stdio.h>

int main(){
	float km, c;
	int h, m;
	printf("Digite a distancia em km\n");
	scanf("%f", &km);
	c = km / 900 * 60;
	h = c / 60;
	m = c - h * 60;
	printf("O tempo estimado e de %d horas e %d minutos", h, m);
	getch();
	return 0;
}