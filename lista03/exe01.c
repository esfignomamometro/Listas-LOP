#include <stdio.h>
#include <windows.h>

int main(){
	SetConsoleOutputCP(65001);
	
	for(int i = 1; i < 11; i++){
	printf("%dº classificado(a)\n", i);}
	
	getch();
	return 0;
}