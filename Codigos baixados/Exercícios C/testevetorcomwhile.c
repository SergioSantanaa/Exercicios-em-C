#include<stdio.h>
#include<locale.h>
int main(){
	
setlocale(LC_ALL,"");
/*int vetor[6];
int i,maior=0,a;
while(i<6)
{
	printf("Escreva o %d� n�mero\n",i+1);
	scanf("%d",&vetor[i]);
	if(vetor[i]> maior)
	{
		maior=vetor[i];
	}
	i++;
}
printf("O maior n�mero : %d\t",maior);
}*/


/*int i,maior=0,a,vetor[6];
while(i<6)
{
	printf("Escreva o %d� n�mero\n",i+1);
	scanf("%d",&vetor[i]);
	if(vetor[i]>0)
	{
		printf("N�mero Positivo\n",vetor[i]);
	}
	if(vetor[i]%2==1)
	{
		printf("N�mero �mpar\n",vetor[i]);
	}
	i++;
}
}*/



/*int i=0,menor=0,vetor[6];
float media,soma=0;
while(i<6)
{
	printf("Escreva o %d� n�mero\n",i+1);
	scanf("%d",&vetor[i]);

	if(vetor[i]>0)
	{
		soma=soma+vetor[i];
		media=soma/4;
	}
	if(vetor[i]<10)
	{
		menor=menor+1;
	}
	i++;	
}
		printf("A soma : %.2f\n",soma);
		printf("A m�dia : %.2f\n",media);
		printf("Menor que 10 : %d\n",menor);
}
*/

int i,a,b,vet[5];
while(i<5)
{
	printf("Informe o %d�n�mero\n",i+1);
	scanf("%d",&vet[i]);
	i++;
}
printf("Informe um n�mero para procurar no vetor\n");
scanf("%d",&a);
while(i<5)
{
	if(a==vet[i])
	{
		printf("Posi��o %d n�mero %d\n",i+1,vet[i]);
		//b=1;
	}
//	if(total==0) esta � a outra op��o de achar o resultado usando mais uma vari�vel
//	{
//		printf("\n nenhum numero foi encontrado\n\n");
//	}
	else
	{
		if(a!=vet[i])
		{
			
		}
	}
	i++;
}
printf("N�mero n�o encontrado\n");
}











