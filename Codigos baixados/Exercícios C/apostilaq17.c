#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int a,b,soma=0;
	/*printf("Informe um número natural\n");
	scanf("%d",&a);
	
	for(b=0; b<=a; b++)
	{
		if(b>0)
		{
			soma=soma+b;
			printf("%d\n",b);
		}
		
	}
	printf("A soma é : %d\n",soma);
}*/



	printf("Informe um número natural\n");
	scanf("%d",&a);
	
	while(b<=a)
	{
		soma=soma+b;
		printf("%d\n",b);
		b++;
		
	}	
	printf("A soma é : %d\n",soma);
}
