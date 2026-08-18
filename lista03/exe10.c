#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	int i, j;
	printf("Digite um número inteiro e positivo\n");
	scanf("%d", &j);
	
	
	for(int i = 0; i <= j; i+=2){
		printf ("%d\n", i);
	}

    getch();
    return 0;
}