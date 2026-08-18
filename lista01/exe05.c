#include <stdio.h>

int main(){
      float n, n1, n2;
      printf("Digite um numero inteiro, positivo e diferente de 0\n");
      scanf("%f", &n);
      n1 = n + 1;
      n2 = n - 1;
      printf("%.0f +1 = %.0f \n", n, n1);
      printf("%.0f -1 = %.0f \n", n, n2);
      getch();
      return 0;
}