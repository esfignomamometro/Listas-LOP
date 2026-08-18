#include <stdio.h>

int main(){
	float a, b, c;
	int h, m;
	printf("Digite a velocidade do carro em km/h \n");
	scanf("%f", &a);
	printf("Digite a distancia a ser percorrida em km \n");
	scanf("%f", &b);
	
	c = b / a * 60;
	h = c / 60;
	m = c - h * 60;
	
	printf("Voce levara %d horas e %d minutos para percorrer", h, m);
	getch();
	return 0;
}