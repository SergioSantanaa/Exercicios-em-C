#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int a,b,i;

	/*printf("Informe um n�mero entre 100 e 999\n");
	scanf("%d",&a);
	for(i=0; i<=a; i++)
	{
		if(a>=100 && a<=999)
		{
			printf("%d\n",i);
		}
		
	}
	printf("O n�mero digitado � : %d\n",a);
	
	
}*/
	printf("Informe um n�mero entre 100 e 999\n");
	scanf("%d",&a);
	while(i<=a)
	{
		if(a>=100 && a<=999)
			{
				printf("%d\n",i);
			}
	i++;
	}
	printf("O n�mero digitado � : %d\n",a);
}
