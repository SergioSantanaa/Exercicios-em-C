#include<stdio.h>
#include<locale.h>
/*OBS FAZER FORMA DE N�O ACEITAR N�MERO �MPAR*/
int main()
{
	setlocale(LC_ALL," ");
	int i,a;
/*	printf("Informe um n�mero par\n");
	scanf("%d",&a);
	
	printf("Ordem crescente\n");
	for(i=0; i<=a; i++)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
			
						
		}
		
			
}*/


	printf("Informe um n�mero par\n");
	scanf("%d",&a);
	
	printf("Ordem crescente\n");
	while(i<=a)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
			i++;
			
						
		}
	}
