
#include <stdio.h>

int main()
{
  float Hn;     /* numero harmonico de ordem n */
  int n, k;
  
  printf("Digite o valor de n :\n");
  scanf("%d", &n);
  
  Hn = 0;

  for (k = 1; k <5; k++)
    Hn += (float)1/k;
  
  printf("Valor de H : %d: %f\n", n, Hn);
  
  return 0;
}

