#include <stdio.h>

int main(){
	int a;
	printf("Digite um numero inteiro\n");
	scanf("%d", &a);
	
	if(a>100){
		printf("%d e maior que 100", a);}
		else{
		printf("%d e menor ou igual a 100", a);}

	getch();
	return 0;
}