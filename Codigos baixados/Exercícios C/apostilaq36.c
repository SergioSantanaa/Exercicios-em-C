#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int i=1,soma=0,soma1,a;
	while(i>0 && i<=100)
	{
		a=i*i;
		soma=soma+a;
	
		i++;
	}
		printf("%d\n",soma);
	printf("////////////////////////////\n");
	
	

	for(i=1; i<=100;i++)
	{
		
		soma=soma+i;
		soma1=soma*soma;
		
		i++;
	}
	printf("%d\n",soma1);
		printf("A diferença é : %d",soma1-soma);
}
