#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float a,b,soma=0,med;
	int i;
	
/*	for(i=0; i<1000; i++)
	{
	printf("Informe a %.f� nota\n",i+1);
	scanf("%f",&a);
		if(a>=10 && a<=20)
		{
			soma=soma+a;
		}
		else
		{
			printf("Nota inv�lida\n");
			break;
			med=soma/i;
			printf("A m�dia � : %.2f\n",med);
			
		}
	}
		med=soma/i;
		printf("A m�dia � : %.2f\n",med);
}*/



	while(i<1000)
	{
	printf("Informe a nota\n");
	scanf("%f",&a);
	i++;
		if(a>=10 && a<=20)
		{
			soma=soma+a;
		}
		else
		{
			printf("Nota inv�lida\n");
			break;
			med=soma/i;
			printf("A m�dia � : %.2f\n",med);
			
		}
		
		
	}
	
		
		med=soma/i;
		printf("A m�dia � : %.2f\n",med);
}
