#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	float a,b,soma=0,med;
	int i;
	
/*	for(i=0; i<1000; i++)
	{
	printf("Informe a %.fº nota\n",i+1);
	scanf("%f",&a);
		if(a>=10 && a<=20)
		{
			soma=soma+a;
		}
		else
		{
			printf("Nota inválida\n");
			break;
			med=soma/i;
			printf("A média é : %.2f\n",med);
			
		}
	}
		med=soma/i;
		printf("A média é : %.2f\n",med);
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
			printf("Nota inválida\n");
			break;
			med=soma/i;
			printf("A média é : %.2f\n",med);
			
		}
		
		
	}
	
		
		med=soma/i;
		printf("A média é : %.2f\n",med);
}
