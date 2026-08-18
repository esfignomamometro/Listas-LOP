#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	int i, j = 0;
	printf("A soma de todos os números de 1 a 100 é:\n");
	for(i = 1; i<=100; i = i + 1){
		printf("%d+", i);
		j += i;
	}
	printf("0=%d", j);
	getch ();
	
	
}