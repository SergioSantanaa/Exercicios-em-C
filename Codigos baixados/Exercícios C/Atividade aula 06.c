#include<stdio.h>
#include<locale.h>
//1. Fa�a um algoritmo que conte de 1 a 100
//2. Fa�a um algoritmo que conte de 1 a 100 e a cada m�ltiplo de 10  emita uma mensagem: �M�ltiplo de 10�.
////3. Fa�a um algoritmo que leia n�meros entre 1 e 10, se for digitado  um n�mero maior que 10 ou menor que 1 saia encerre o algoritmo
//
//main(){
//	int A,B;
//	for (A = 1; A <= 100; A++){
//	
//	printf("%d\n",A);
//}
//	
//	
//}
//




//int A;
//	while (A<=100){
//	
//	printf("%d\n",A);
//	A++;
//
//}
//}

//main(){
////
////
//int A =1;
//	while (A<=100){
////	
//	printf("\n%d",A);
////
//	if(A%10==0){
//	
////	
//		printf("\tMultiplo de 10");
//	}
//
//A++;
//	}
//}
//////		
////		
////		
////		
////		
////		
////		
////		
//	}
////
//}
//

// main(){
////	
//int O;
//	for (O = 1; O <= 100; O++){
////	
//	printf("%d\n",O);
//	if(O%10==0){
//		pintf("Multiplo de 10\n");
//	}
//}
//}



main()
{
/*	int A,i;
	setlocale(LC_ALL,"portuguese");
	printf("informe um valor\n");
	scanf("%d", &A);
//
	for(i=0; i<=A; i++)
		{
			if(A<1 || A>10)
				{
					printf("Numero inv�lido\n");
					break;
				}
			
		}
		printf("O n�mero digitado foi %d\n",A);
		
}*/


int A,i;
	setlocale(LC_ALL,"portuguese");
	printf("informe um valor\n");
	scanf("%d", &A);
	while(i>0)
	{
		if(A<1 || A>10)
				{
					printf("Numero inv�lido\n");
					break;
				}
		
	}
	printf("O n�mero digitado foi %d\n",A);
}

