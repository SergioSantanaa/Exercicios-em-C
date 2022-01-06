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
		printf("VOCÊ PODERÁ VOTAR ESTE ANO\n");
	}
else
{
	if(a+18>2021)
	{
		printf("VOCÊ NÃO PODERÁ VOTAR ESTE ANO");
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

