#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int i,a,b,area;
/*	for(i=0;i<5;i++)
	{
		printf("Informe a base do tri�ngulo\n");
		scanf("%d",&a);
		printf("Informe a altura do tri�ngulo\n");
		scanf("%d",&b);
		area = (b*a)/2;
			if(a>0 && b>0)
			{
				printf("A �rea do tri�ngulo � : %d\n",area);
			}
			else
			{
				printf("N�mero inv�lido\n");
				break;
			}
		
	}
}*/


while(i<5)
	{
		printf("Informe a base do tri�ngulo\n");
		scanf("%d",&a);
		printf("Informe a altura do tri�ngulo\n");
		scanf("%d",&b);
		area = (b*a)/2;
			if(a>0 && b>0)
			{
				printf("A �rea do tri�ngulo � : %d\n",area);
			}
			else
			{
				printf("N�mero inv�lido\n");
				break;
			}
			i++;
}
}
