#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,a,soma=0;
	printf("Informe um número para saber seus divisores\n");
	scanf("%d",&a);
	printf("Divisores de %d\n",a);
	for(i=1; i<a; i++)
	{
		if(a%i==0)
		{	
			soma=soma+i;
			printf("%d\n",i);
		}
		
	}
	printf("Resultado da soma de todos os divisores : %d\n",soma);
}

	
	
	/*	printf("Informe um número para saber seus divisores\n");
		scanf("%d",&a);
		printf("Divisores de %d\n",a);
		i=1;
		while(i<a)
		{
			if(a%i==0)
			{
				soma=soma+i;
				printf("%d\n",i);
			}
		i++;
		}
		printf("Resultado da soma de todos os divisores : %d\n",soma);
	}*/
