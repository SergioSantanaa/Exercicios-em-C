#include<stdio.h>
#include<locale.h>

int main()
{
	int i,a,soma=0;
	float media;
	setlocale(LC_ALL,"");
	for(i=1; i<1000; i++)
		{
			printf("Informe a idade\n");
			scanf("%d",&a);
			if(a>0)
			{
				soma=soma+a;
			}
			if(a==0)
			{
				break;	
			}
			
		}
		media=soma/i;
		printf("A média das idades é : %.2f\n",media);
}
