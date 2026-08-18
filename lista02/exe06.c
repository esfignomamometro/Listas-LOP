#include <stdio.h>

int main(){
	float p;
	printf("Digite o numero de pontos do seu time\n");
	scanf("%f", &p);
	
	if(p>=20){
		printf("Classificado");}
	else if(p>=10 && p<20){
		printf("Em disputa");}
	else{
		printf("Eliminado");}
		
	getch();
	return 0;
}