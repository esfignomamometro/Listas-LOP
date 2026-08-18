#include <stdio.h>

int main(){
	float v, vf;
	printf("Digite o valor da compra\n");
	scanf("%f", &v);
	
	if(v>500){
		vf = v * 0.9;}
	else if(v>200 && v<=500){
		vf = v * 0.95;}
	else{
	    vf = v;}
	    
	printf("O valor final da compra e de R$%.02f", vf);
	
	getch();
	return 0;

}