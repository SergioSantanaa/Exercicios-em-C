#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int a,b;
	/*printf("Informe o seu ano de nascimento\n");
	scanf("%d",&a);
	if(a+18<=2021)
	{
		printf("VOC� PODER� VOTAR ESTE ANO\n");
	}
else
{
	if(a+18>2021)
	{
		printf("VOC� N�O PODER� VOTAR ESTE ANO");
	}
}
}*/


printf("Informe a senha\n");
scanf("%d",&a);
if(a==1234)
{
	printf("ACESSO PERMITIDO\n");
}
else
{
	printf("ACESSO NEGADO\n");
}
}

