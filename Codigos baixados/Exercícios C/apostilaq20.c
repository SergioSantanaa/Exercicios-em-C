#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int i,a,soma=0,som=0;
/*	for(i=0; i!=0; i++)
	{
		printf("Informe o %d� n�mero\n",i+1);
		scanf("%d",&a);
		if(a%2==0)
		{
			soma=soma+1;
			printf("Este � um n�mero par\n",i);
		}
		if(a>=1000)
		{
			printf("Fim\n");
		}
		if(a>=0)
				{
					som=som+1;
				}
	}
	printf("Quantidade de n�meros pares : %d\n",soma);
	printf("Quantidade de dados lidos : %d\n",som);
}*/



	while(a<1000)
	{
		printf("Informe o %d� n�mero\n",i+1);
		scanf("%d",&a);
		if(a%2==0)
		{
			soma=soma+1;
			printf("Este � um n�mero par\n",i);
		}
		i++;
			if(a>=1000)
			{
				printf("Fim\n");
			}
				if(a>=0)
				{
					som=som+1;
				}
	}
	printf("Quantidade de n�meros pares : %d\n",soma);
	printf("Quantidade de dados lidos : %d\n",som);
}
