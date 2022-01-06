#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int a,b;
	/*printf("Informe um número ímpar\n");
	scanf("%d",&a);
	printf("Ordem crescente\n");
	for(b=1; b<=a; b++)
	{
		if(b%2==1)
		{
			printf("%d\n",b);
		}
	}
}*/

	printf("Informe um número ímpar\n");
	scanf("%d",&a);
	printf("Ordem crescente\n");
	
	while(b<=a)
	{
		if(b%2==1)
		{
			printf("%d\n",b);
		}
		b++;
	}
	
}
