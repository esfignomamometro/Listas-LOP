#include <stdio.h>

int main(){
	int a, b, c;
	printf("Digite um numero inteiro\n");
	scanf("%d", &a);
	printf("Digite outro numero inteiro\n");
	scanf("%d", &b);
	printf("Digite um numero inteiro\n");
	scanf("%d", &c);
	
	if(a>b && a>c){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, a);}
	else if(c>b && c>a){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, c);}
	else if(b>c && b>a){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, b);}
	else if(b==c && b==a){
		printf("Todos os numeros sao iguais");}
	else if(b>c){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, b);}
	else if(b>a){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, b);}
	else if(a>b){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, a);}
	else if(a>c){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, a);}
		else if(c>b){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, c);}
	else if(c>a){
		printf("Entre %d, %d e %d, o maior numero e %d", a, b, c, c);}
		
	}
		