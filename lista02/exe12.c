#include <stdio.h>

int main(){
	int idade, ano ;
	printf("Digite seu ano de nascimento\n");
	scanf("%d", &ano);
	
	idade=2026-ano;
	
	if(idade<16){
		printf("Nao pode votar");}
		else{
		printf("Pode votar");}
	getch();
	return 0;
}