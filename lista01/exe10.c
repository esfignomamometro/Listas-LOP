#include <stdio.h>

int main(){
	char nc;
	float ne, nv, pp;
	printf("Digite o nome da cidade\n");
	scanf("%[^\n]s",& nc);
	printf("Digite o numero de eleitores\n");
	scanf("%f",& ne);
	printf("Digite o numero de votos apurados\n");
	scanf("%f",& nv);
	pp = 100 / ne * nv;
	printf("A porcentagem aproximada dos que foram votar em relacao ao total de eleitores e de %.02f%%", pp);
	getch();
	return 0;
}