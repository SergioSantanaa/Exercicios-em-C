#include<stdio.h>
#include<locale.h>
int main()
{
	int tam,i;
	setlocale(LC_ALL,"");
	/*printf("Informe um numero\n");
	scanf("%d",&tam);
	for (i>0; i<=tam+tam; i++)
	{
	
		if(i%2==1)
			{
					printf("%d\n",i);
			}
	}
	
	
	
}*/

	printf("Informe um numero\n");
	scanf("%d",&tam);

	while(i<=tam+tam)
	{
		if(i%2==1)
			{
				printf("%d\n",i);
			}
			i++;
	}
}





//PARA CHEGAR AO RESULTADO É NECESSÁRIO SOMAR O TAMANHO COM ELE MESMO
