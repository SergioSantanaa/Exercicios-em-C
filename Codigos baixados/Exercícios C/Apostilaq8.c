#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int a,ma=1,me=0,i,troca,b;
	for(i=0; i<5; i++)
	{
		printf("Informe o %dº número\n",i+1);
		scanf("%d",&a);	
		
		if(a>ma)
		{
			troca=a;
			ma=troca;
		
		}
			
		if(a!=0)
		{
			me=a;
			
		}		
				
			
	}
	printf("Maior valor digitado : %d\n",ma);
	printf("Menor valor digitado : %d\n",me);
	}
