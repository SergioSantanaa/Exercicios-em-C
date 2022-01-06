#include<stdio.h>

main(){
	
	int A,maior,menor;
	while (A!=0){
		printf("informe um numero\n");
		scanf("%d",&A);
	
		if (A>0){
			A=maior;
			printf("Positivo %d\n",A);
		
	}else
	{
		printf("Negativo %d\n",A);
		A=menor;
	}
	}
}


