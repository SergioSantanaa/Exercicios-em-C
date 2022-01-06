#include<stdio.h>
#include<locale.h>

//1ª Questão - Dada uma sequência numérica de 20 elementos armazenados num vetor,
// determinar o índice (posição) do maior elemento do conjunto. Suponha que os elementos sejam distintos

//int main(){
//	setlocale(LC_ALL,"portuguese");
//	int vetor[4],i,maior=0,posi;
//	for(i=0;i<=4;i++){
//		printf("Informe %dº número\n",i+1);
//		scanf("%d",&vetor[i]);
//
//		if (vetor[i]>maior){
//
//		maior=vetor[i];
//			}
//	
//		}
// printf("Posição do maior número é: %dº\t Número : %d\n",vetor[i],maior);
//}



//2ª Questão - Elabore um algoritimo que leia  um vetor de 10 posições e
// imprima quantos números são positivos e quantos são ímpar.
//
//int main(){
//	setlocale(LC_ALL,"portuguese");
//	int vetor[10],i;
//	for(i=0;i<=9;i++){
//		
//		printf("Informe %dº número\n",i+1);
//		scanf("%d",&vetor[i]);
//		
//			if(vetor[i]>0){
//			printf("Positivo\n");
//			}
//				if(vetor[i]%2==1){
//				printf("Ímpar\n\n ");
//				}
//		}
////
//}





//3º Questão Elabore um algorítimo que leia um vetor de 6 posições 
//mostre a soma, a média e a quantidade de números menores que 10

// int main(){
//	setlocale(LC_ALL,"portuguese");
//	int vetor[6],i;

//		float soma,media,menor=0;
//			for(i=0;i<=5;i++){
//			printf("Informe %dº número\n",i+1);
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
//			printf("A soma é : %.f\n",soma);
//		
//	
//			printf("A média é : %.2f\n Números menores que 10 : %.f\n",media,menor);
///
//	}





//4º Questão - Elabore um algorítimo que armazene 10 valores  inteiros em um vetor.
// Depois solicite ao usuário para digitar um valor e procure no vetor esse valor.
//Seencontrar informar em quais casas esse números estão, se não encontrarinformar não encontrado.

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
//  	  		printf("\t posição : %d\t Número : %d\n",i,vetor[i]);
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
