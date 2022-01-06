#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int a,b,i,n;
	/*printf("Informe o tamanho de n\n");
	scanf("%d",&n);
	printf("Informe um número\n");
	scanf("%d",&a);
	printf("Informe um número\n");
	scanf("%d",&b);
	
	for(i=1;i<=n; i++)
	{
		if(a%i==0 || b%i==0)
		{
			printf("%d\n",i);
		}
		
		
		
		
	}
	
}*/




	printf("Informe o tamanho de n\n");
	scanf("%d",&n);
	printf("Informe um número\n");
	scanf("%d",&a);
	printf("Informe um número\n");
	scanf("%d",&b);
	
	
	i=1;
	while(i<=n)
	{
	
		if(a%i==0 || b%i==0)
		{
			printf("%d\n",i);
		}
		i++;
		
		
		
	}
}
