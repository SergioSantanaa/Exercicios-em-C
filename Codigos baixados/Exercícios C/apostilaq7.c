#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float med;
	float i,num,soma=0;
	for(i=0; i<9; i++)
	{
		printf("Informe o %.fº número positivo\n",i+1);
		scanf("%f",&num);
			if(num<0)
				{
					num=0;
					printf("Número negativo não é permitido\n");
				}
		soma=soma+num;
		
		printf("Soma : %.f\n",soma);
			
		med=soma/10;
		printf("Média : %.2f\n",med);
	}
}

 /*{
		while(i<9)
		{
	
		printf("Informe o %.fº número positivo\n",i+1);
		scanf("%f",&num);
		i++;
			if(num<0)
				{
					num=0;
					printf("Número negativo não é permitido\n");
				}
		soma=soma+num;
		
		printf("Soma : %.f\n",soma);
			
		med=soma/10;
		printf("Média : %.2f\n",med);
	}
		}
	}*/
