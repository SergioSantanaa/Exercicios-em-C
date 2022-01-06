#include<stdio.h>

main()
{
	int a,b,c;
	
	printf("Digite a quantidadede numeros a serem consultados para saber se eh par ou impar\n");
	scanf("%d",&b);
	 for (a = 0; a <b; a++){


		 	 printf("Escreva o numero\n");
				 scanf("%d",&c);
	
			 if (c%2==0){
		 	
			printf("PAR\n");
	}
			else
		{
			printf("IMPAR\n");
			
		}
		
	}
	}
