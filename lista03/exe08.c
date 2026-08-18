#include<stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	int i = 0;
	while(i != 4){
		printf("Digite um número qualquer, ou 4 para terminar\n");
		scanf("%d", &i);
	}
    printf("O quadrado do seu número é 16, fim.");
	getch();
}