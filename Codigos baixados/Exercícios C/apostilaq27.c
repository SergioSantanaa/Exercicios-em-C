/*Programa para calcular o numero harmonico de uma certa ordem */

#include <stdio.h>

int main()
{
  float Hn;     /* numero harmonico de ordem n */
  int n, k;
  
 /* printf("Digite o valor de n :\n");
  scanf("%d", &n);
  
  Hn = 0;

  for (k = 1; k <= n; k++)
    Hn += (float)1/k;
  
  printf("Valor de H : %d: %f\n", n, Hn);
  
  return 0;
}*/


  
  
  printf("Digite o valor de n :\n");
  scanf("%d", &n);
  k=1;
  Hn = 0;
  while(k<=n)
{
  Hn += (float)1/k;
  k++;
} 
  printf("Valor de H : %d: %f\n", n, Hn);
}
