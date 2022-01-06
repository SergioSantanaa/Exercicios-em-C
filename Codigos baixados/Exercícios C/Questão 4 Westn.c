#include<stdio.h>

main()
{
	int A,B,C,Me;
	
	printf("Digite um valor\n");
	scanf("%d", &A);
	printf("Digite outro valor\n");
	scanf("%d", &B);
	printf("Digite outro valor\n");
	scanf("%d", &C);
	
	if (A>B>C){
		Me=C;
}
	else
	
		if(A>C>B){
			Me=B;
	}
		
		else
		{
			Me=A;
		}
		
			printf("Menor valor:%d",Me);
		
}
	


