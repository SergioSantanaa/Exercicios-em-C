//1� Quest�o - Dada uma sequ�ncia num�rica de 20 elementos armazenados num vetor,
// determinar o �ndice (posi��o) do maior elemento do conjunto. Suponha que os elementos sejam distintos

#include<stdio.h>
#include<locale.h>
int main(){
	
setlocale(LC_ALL,"");
//int vetor[6];
/*int i,maior=0,a;
for(i=0; i<20; i++)
{
	printf("Escreva o %d� n�mero\n",i+1);
	scanf("%d",&vetor[i]);
	if(vetor[i]> maior)
	{
		maior=vetor[i];
	}
}
printf("O maior n�mero : %d\t",maior);
}*/




//2� Quest�o - Elabore um algoritimo que leia  um vetor de 10 posi��es e
// imprima quantos n�meros s�o positivos e quantos s�o �mpar.

/*int i,maior=0,a;
for(i=0; i<4; i++)
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

}
}*/


//Quest�o Elabore um algor�timo que leia um vetor de 6 posi��es 
//mostre a soma, a m�dia e a quantidade de n�meros menores que 10



/*int i=0,menor=0;
float media,soma=0;
for(i=0; i<6; i++)
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
}
		printf("A soma : %.2f\n",soma);
		printf("A m�dia : %.2f\n",media);
		printf("Menor que 10 : %d %d\n",menor);
}*/


//4� Quest�o - Elabore um algor�timo que armazene 10 valores  inteiros em um vetor.
// Depois solicite ao usu�rio para digitar um valor e procure no vetor esse valor.
//Seencontrar informar em quais casas esse n�meros est�o, se n�o encontrarinformar n�o encontrado.



int i,a,b,vet[10];
for(i=0; i<5; i++)
{
	printf("Informe o %d�n�mero\n",i+1);
	scanf("%d",&vet[i]);
}
printf("Informe um n�mero para procurar no vetor\n");
scanf("%d",&a);
for(i=0; i<5; i++)
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
}
printf("N�mero n�o encontrado\n");
}





