#include <stdio.h>

int main(){
	char n[50];
	float v, e, p;
	printf("Digite o nome do time\n");
	scanf("%[^\n]s", &n);
	printf("Digite o numero de vitorias do time\n");
	scanf("%f", &v);
	printf("Digite o numero de empates\n");
	scanf( "%f", &e);
	p = v * 3 + e;
	printf ("O time %s fez %.0f pontos", n, p);
	getch();
	return 0;
}