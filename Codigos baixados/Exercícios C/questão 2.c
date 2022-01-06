#include<stdio.h>

main()
{
	int A,B;
	
	printf("digite um valor\n");
	scanf("%d", &A);
	
	printf("digite outro valor\n");
	scanf("%d", &B);
	if (A>B)
	{
		printf("%d: maior valor\n", A);
	}
	else
	{
	printf("%d: maior valor\n", B);
	}
	
}
