#include <stdio.h>

int main(){
	float n1, n2, n3, nf;
	printf("Digite o valor da sua primeira nota\n");
	scanf("%f", &n1);
	printf("Digite o valor da sua segunda nota\n");
	scanf("%f", &n2);
	printf("Digite o valor da sua terceira nota\n");
	scanf("%f", &n3);
	nf = (n1 + n2 + n3) / 3;
	if(nf>=7){
		printf("Aprovado");}
		else if(nf<7 && nf>=5){
			printf("Recuperacao");}
		else{
			printf("Reprovado");
		}
	getch();
	return 0;	
}