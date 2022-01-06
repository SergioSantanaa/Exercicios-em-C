#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");
	int i,vet[100],maior=0,menor,troca;
	for(i=0; i<100; i++)
	{
		printf("Digite um número\n");
		scanf("%d",&vet[i]);
		if(vet[i]>maior)
		{
			troca=vet[i];
			maior=troca;
		}
		menor=vet[0];
		if(vet[i]<menor)
		{
			troca=vet[i];
			menor=troca;
			printf("%d\n",menor);
		}	
				
		if(vet[i]<0)
		{
			break;
		}
	}
	
	printf("%d  %d \n",maior,menor);
	
}
