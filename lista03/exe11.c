#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	int i, j;
	printf("Digite um número positivo inteiro\n");
	scanf("%d", &j);
	printf("Os número ímpares entre 0 e %d são:\n", j);
	for(i = 1; i <= j; i = i + 2){
		printf("%d\n", i);
	}
	getch ();
	
	
}