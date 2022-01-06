#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int a,b;
	/*printf("Informe um número ímpar\n");
	scanf("%d",&a);
	printf("Ordem decrescente\n");
	for(b=a; b>0; b--)
	{
		if(b%2==1)
		{
		printf("%d\n",b);
		}
	}
}*/
	printf("Informe um número ímpar\n");
	scanf("%d",&a);
	printf("Ordem decrescente\n");
	b=a;
	while(b>0)
	{
		if(b%2==1)
		{
			printf("%d",b);
		}
		b--;
	}
}
