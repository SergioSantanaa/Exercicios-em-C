#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	int i,vet[4],a;
	for(i=0;i<4;i++)
	{
		printf("Informe 4 números\n");
		scanf("%d",&vet[i]);
		if(vet[i]>0)
		{
			a=vet[i]*2;
			printf("%d",a);
		}
	}

}
