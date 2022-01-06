//Elabore um algoritmo que guarde 10 valores inteiros em um vetor

//Elabore um algoritimo que leia um vetor de 10 posições e imprima a quantidade de números pares

//Elabore um algoritimo que leia um vetor de 6 posições e mostre a soma dos números impares

//Elabore um algoritimo que leia um vetor de 20 posições e mostre a posição dos números pares.




//1- Questão
//#include<stdio.h>
//
//int main ()
//{
//	int vetor [10],i;
//	for(i=0;i<10;i++)
//	{
//		printf("Digite o %dº valor\n",i+1);
//		scanf("%d", &vetor[i]);
//	}
//}


//#include<stdio.h>
//
//
//int main(){
//	int vetor[10],i;
//	int par=0;
//	
//	for (i=0;i<10;i++)
//	{
//		printf("Digite o %dº valor\n",i+1);
//		scanf("%d", &vetor[i]);
//	
//
//		if (vetor[i]%2==0)
//		{
//			par++;
//			printf("%d\n",par);
//		
//}
//}
//}








#include<stdio.h>
#include<locale.h>



int main(){
	setlocale(LC_ALL,"");
	int vetor[10],i;
	int par=0;
	
	for (i=0;i<20;i++)
	{
		printf("Digite o %dº valor\n",i+1);
	}
		scanf("%d", &vetor[i]);
		
		for(i=0;i<20;i++){


			if (vetor[i]%2==0)
		{
		
			printf("O valor da posição %d é par %d\n",i+1,vetor[i]);
				
			
			
		//	printf("As posições dos números pares são: %dº\n",vetor[i]);
}
}
}

//}
//}
