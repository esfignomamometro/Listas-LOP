#include <stdio.h>

int main(){
	int i;
	printf("Digite sua idade\n");
	scanf("%d", &i);
	
	if(i>=18){
		printf("Adulto");}
		else if (i<12){
		printf("Crianca");}
		else{
		printf("Adolescente");}
			
	getch();
	return 0;
}