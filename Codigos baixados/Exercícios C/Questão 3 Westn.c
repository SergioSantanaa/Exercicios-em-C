#include<stdio.h>

main()
{
	int A,B;
	
	printf("Digite um valor\n");
	scanf("%d", &A);
	printf("Digite outro valor\n");
	scanf("%d", &B);
	
	if (A>B)
	printf("%d, %d",A,B);
	else
	{
		if(B>A)
		printf("%d, %d",A,B);
		
	}
}
