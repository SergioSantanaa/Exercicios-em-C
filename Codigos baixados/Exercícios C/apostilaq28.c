#include<stdio.h>
#include<locale.h>
int main()
{
  int e,n;
  float En;
  setlocale(LC_ALL," ");

  printf("Digite o valor de n :\n");
  scanf("%d", &n);
  
  En = 0;

  for (e = 1; e <= n; e++)
    En += (float)1/e;
  
  printf("Valor de E : %d: %f\n", n, En);
  
  return 0;
}


  
  
//  printf("Digite o valor de n :\n");
//  scanf("%d", &n);
//  e=1;
//  En = 0;
//  while(e<=n)
//{
//  En += (float)1/e;
//  e++;
//} 
//  printf("Valor de E : %d: %f\n", n, En);
//}
