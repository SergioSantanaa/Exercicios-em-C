#include<stdio.h>
#include<locale.h>
/*OBS FAZER FORMA DE NÃO ACEITAR NÚMERO ÍMPAR*/
int main()
{
	setlocale(LC_ALL,"portuguese");
	int i,a;
	/*printf("Informe um número par\n");
	scanf("%d",&a);
	
	printf("Ordem decrescente\n");
	for(i=a; i>0; i--)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
			}
			
						
		}
		
		
}*/


    printf("Informe um número par\n");
	scanf("%d",&a);
	printf("Ordem decrescente\n");
	i=a;
	while(i>0)
		{
			if(i%2==0)
			{
				printf("%d\n",i);
					
			}	
			i--;
		}
	
	}
