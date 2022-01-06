#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int a,b,i;

	/*printf("Informe um número entre 100 e 999\n");
	scanf("%d",&a);
	for(i=0; i<=a; i++)
	{
		if(a>=100 && a<=999)
		{
			printf("%d\n",i);
		}
		
	}
	printf("O número digitado é : %d\n",a);
	
	
}*/
	printf("Informe um número entre 100 e 999\n");
	scanf("%d",&a);
	while(i<=a)
	{
		if(a>=100 && a<=999)
			{
				printf("%d\n",i);
			}
	i++;
	}
	printf("O número digitado é : %d\n",a);
}
