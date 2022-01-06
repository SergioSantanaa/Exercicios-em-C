//1ª Questão - Dada uma sequência numérica de 20 elementos armazenados num vetor,
// determinar o índice (posição) do maior elemento do conjunto. Suponha que os elementos sejam distintos

#include<stdio.h>
#include<locale.h>
int main(){
	
setlocale(LC_ALL,"");
//int vetor[6];
/*int i,maior=0,a;
for(i=0; i<20; i++)
{
	printf("Escreva o %dº número\n",i+1);
	scanf("%d",&vetor[i]);
	if(vetor[i]> maior)
	{
		maior=vetor[i];
	}
}
printf("O maior número : %d\t",maior);
}*/




//2ª Questão - Elabore um algoritimo que leia  um vetor de 10 posições e
// imprima quantos números são positivos e quantos são ímpar.

/*int i,maior=0,a;
for(i=0; i<4; i++)
{
	printf("Escreva o %dº número\n",i+1);
	scanf("%d",&vetor[i]);
	if(vetor[i]>0)
	{
		printf("Número Positivo\n",vetor[i]);
	}
	if(vetor[i]%2==1)
	{
		printf("Número ímpar\n",vetor[i]);
	}

}
}*/


//Questão Elabore um algorítimo que leia um vetor de 6 posições 
//mostre a soma, a média e a quantidade de números menores que 10



/*int i=0,menor=0;
float media,soma=0;
for(i=0; i<6; i++)
{
	printf("Escreva o %dº número\n",i+1);
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
		printf("A média : %.2f\n",media);
		printf("Menor que 10 : %d %d\n",menor);
}*/


//4º Questão - Elabore um algorítimo que armazene 10 valores  inteiros em um vetor.
// Depois solicite ao usuário para digitar um valor e procure no vetor esse valor.
//Seencontrar informar em quais casas esse números estão, se não encontrarinformar não encontrado.



int i,a,b,vet[10];
for(i=0; i<5; i++)
{
	printf("Informe o %dºnúmero\n",i+1);
	scanf("%d",&vet[i]);
}
printf("Informe um número para procurar no vetor\n");
scanf("%d",&a);
for(i=0; i<5; i++)
{
	if(a==vet[i])
	{
		printf("Posição %d número %d\n",i+1,vet[i]);
		//b=1;
	}
//	if(total==0) esta é a outra opção de achar o resultado usando mais uma variável
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
printf("Número não encontrado\n");
}





