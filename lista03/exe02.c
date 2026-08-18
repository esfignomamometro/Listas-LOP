#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	
	for(int i = 1; i < 11; i =i + 2){
	
		printf("%dº colocado(a)\n", i);
	}
	getch();
	return 0;
	
}