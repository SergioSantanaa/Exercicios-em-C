//Elabore um algoritmo que guarde 10 valores inteiros em um vetor

//Elabore um algoritimo que leia um vetor de 10 posi��es e imprima a quantidade de n�meros pares

//Elabore um algoritimo que leia um vetor de 6 posi��es e mostre a soma dos n�meros impares

//Elabore um algoritimo que leia um vetor de 20 posi��es e mostre a posi��o dos n�meros pares.




//1- Quest�o
//#include<stdio.h>
//
//int main ()
//{
//	int vetor [10],i;
//	for(i=0;i<10;i++)
//	{
//		printf("Digite o %d� valor\n",i+1);
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
//		printf("Digite o %d� valor\n",i+1);
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
		printf("Digite o %d� valor\n",i+1);
	}
		scanf("%d", &vetor[i]);
		
		for(i=0;i<20;i++){


			if (vetor[i]%2==0)
		{
		
			printf("O valor da posi��o %d � par %d\n",i+1,vetor[i]);
				
			
			
		//	printf("As posi��es dos n�meros pares s�o: %d�\n",vetor[i]);
}
}
}

//}
//}
