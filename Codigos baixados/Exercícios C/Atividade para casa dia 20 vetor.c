#include<stdio.h>
#include<locale.h>

//1� Quest�o - Dada uma sequ�ncia num�rica de 20 elementos armazenados num vetor,
// determinar o �ndice (posi��o) do maior elemento do conjunto. Suponha que os elementos sejam distintos

//int main(){
//	setlocale(LC_ALL,"portuguese");
//	int vetor[4],i,maior=0,posi;
//	for(i=0;i<=4;i++){
//		printf("Informe %d� n�mero\n",i+1);
//		scanf("%d",&vetor[i]);
//
//		if (vetor[i]>maior){
//
//		maior=vetor[i];
//			}
//	
//		}
// printf("Posi��o do maior n�mero �: %d�\t N�mero : %d\n",vetor[i],maior);
//}



//2� Quest�o - Elabore um algoritimo que leia  um vetor de 10 posi��es e
// imprima quantos n�meros s�o positivos e quantos s�o �mpar.
//
//int main(){
//	setlocale(LC_ALL,"portuguese");
//	int vetor[10],i;
//	for(i=0;i<=9;i++){
//		
//		printf("Informe %d� n�mero\n",i+1);
//		scanf("%d",&vetor[i]);
//		
//			if(vetor[i]>0){
//			printf("Positivo\n");
//			}
//				if(vetor[i]%2==1){
//				printf("�mpar\n\n ");
//				}
//		}
////
//}





//3� Quest�o Elabore um algor�timo que leia um vetor de 6 posi��es 
//mostre a soma, a m�dia e a quantidade de n�meros menores que 10

// int main(){
//	setlocale(LC_ALL,"portuguese");
//	int vetor[6],i;

//		float soma,media,menor=0;
//			for(i=0;i<=5;i++){
//			printf("Informe %d� n�mero\n",i+1);
//			scanf("%d",&vetor[i]);

//			if(vetor[i]<10){
//			menor=menor+1;
//				}
//	}
//				soma=(vetor[0]+vetor[1]+vetor[2]+vetor[3]+vetor[4]+vetor[5]);
//				media=soma/6;
//	
//	
//			 
//		
//			printf("A soma � : %.f\n",soma);
//		
//	
//			printf("A m�dia � : %.2f\n N�meros menores que 10 : %.f\n",media,menor);
///
//	}





//4� Quest�o - Elabore um algor�timo que armazene 10 valores  inteiros em um vetor.
// Depois solicite ao usu�rio para digitar um valor e procure no vetor esse valor.
//Seencontrar informar em quais casas esse n�meros est�o, se n�o encontrarinformar n�o encontrado.

//main(){
//	
//	setlocale(LC_ALL,"portuguese");
//	
//	int i,vetor[10],proc,total=0;
//	
//	
//		for(i=0;i<10;i++)
//		{
//		
//		printf("dgite o %d numero\n",i+1);
//		scanf("%d",&vetor[i]);
//		
//		
//			}
//		printf("\n");
//		printf("digite um numero para buscar:\n");
//		scanf("%d",&proc);
//	
//	
//	
//	   		for(i=0;i<10;i++)
//	
//				{
//				if(proc==vetor[i])
//				{
//  	  		printf("\t posi��o : %d\t N�mero : %d\n",i,vetor[i]);
// 				total=1;
//
//				}
//	
//}
//	
//					if(total==0)
//					{
//						printf("\n nenhum numero foi encontrado\n\n");
//						}
//	
//
//}
