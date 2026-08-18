#include<stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	int i = 0;
	while(i != 4){
		printf("Digite um número qualquer, ou 4 para terminar\n");
		scanf("%d", &i);
	}
    printf("Fim.");
	getch();
}