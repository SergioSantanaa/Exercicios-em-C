#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int d1,d2,tam,i;
/*	printf("Quantas vezes deseja repetir ?\n");
	scanf("%d",&tam);
		for(i=0; i<tam; i++)
		{
			printf("Informe o primeiro número \n");
			scanf("%d",&d1);
			printf("Informe o segundo número \n");
			scanf("%d",&d2);
			if(d1>d2)
			{
				printf("%d>%d\n",d1,d2);
			}
			else
			{
				if(d2>d1)
				{
					printf("%d>%d\n",d2,d1);
				}
			}
			if(d1==d2)
			{
				printf("%d==%d\n",d1,d2);
			}
			
		}
}*/

			printf("Quantas vezes deseja repetir ?\n");
			scanf("%d",&tam);
		
			while(i<tam)
			{
			printf("Informe o primeiro número \n");
			scanf("%d",&d1);
			printf("Informe o segundo número \n");
			scanf("%d",&d2);
			if(d1>d2)
			{
				printf("Primeiro %d > Segundo %d\n",d1,d2);
			}
			else
			{
				if(d2>d1)
				{
					printf("Segundo %d > Primeiro %d\n",d2,d1);
				}
			}
			if(d1==d2)
			{
				printf("Primeiro %d == Segundo %d\n",d1,d2);
			}
				i++;
			
		}
}
