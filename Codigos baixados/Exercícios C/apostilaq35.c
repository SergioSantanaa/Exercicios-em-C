#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int a,b,soma=0,i;
/*	printf("Informe os n�meros do intervalo\n");
	printf("Primeiro\n");
	scanf("%d",&a);
	printf("Segundo\n");
	scanf("%d",&b);
	while(a>b)
	{
		printf("Intervalo de valores inv�lido\n");
		break;
	}
	for(i=a; i<=b; i++)
	{
	
		if(a<b)
		{
		printf("%d\n",i);
		}
		if(i%2==1  && i%2==1)
		{
			soma=soma+i;
		}	
	}
	printf(" Soma dos n�meros �mpares : %d\n",soma);
}*/









	printf("Informe os n�meros do intervalo\n");
	printf("Primeiro\n");
	scanf("%d",&a);
	printf("Segundo\n");
	scanf("%d",&b);
	while(a>b)
	{
		printf("Intervalo de valores inv�lido\n");
		break;
	}
		if(a<b)
		{
			i=a;
		while(i<=b)
		{
			printf("%d\n",i);
	
			if(i%2==1  && i%2==1)
			{
				soma=soma+i;
			}
				i++;	
		}
	printf(" Soma dos n�meros �mpares : %d\n",soma);
		}
}
