#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
/*	int a,b=12;
	float soma;
	printf("Informe a quantidade de maçâs que irá levar\n");
	scanf("%d",&a);
	if(a<b)
	{
		soma=a*0.30;
		printf("O preço a pagar é : %.2f\n",soma);
	}
	else
	{
	
	if(a>=b)
	{
		soma=a*0.25;
		printf("O preço a pagar é : %.2f\n",soma);
	}
	}
}*/


int a,b,c,menor=0;
printf("Informe um número\n");
scanf("%d",&a);
if(a>0)
{
	menor=a;
}
printf("Informe um número\n");
scanf("%d",&b);
printf("Informe um número\n");
scanf("%d",&c);
if(b<menor&& menor<c)
{
	printf("%d,%d,%d\n",b,menor,c);
}
else
{
	if(c<menor&& menor<b)
	{
		printf("%d,%d,%d\n",c,menor,b);
	}
}if(b>menor&&c>menor)
{
	printf("%d,%d,%d\n",menor,c,b);
}
}


