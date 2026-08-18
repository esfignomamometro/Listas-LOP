#include <stdio.h>

int main(){
	char a;
	printf("Digite o seu turno (M para matutino, V para vespertino e N para noturno) \n");
	scanf("%c", &a);
	
	if(a=='M'||a=='m'){
		printf("Bom dia");}
		else if(a=='V'||a=='v'){
		printf("Boa tarde");}
		else if(a=='N'||a=='n'){
		printf ("Boa noite");}
		else{ printf("Turno invalido");
		}
			
	getch();
	return 0;
}