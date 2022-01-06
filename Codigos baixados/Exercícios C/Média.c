#include<stdio.h>

main()
{
	float A,B, C,media;
	
	printf("Digite o primeiro valor\n");
	scanf("%f",&A);
	printf("Digite o segundo valor\n");
	scanf("%f", &B);
	printf("Digite o terceiro valor\n");
	scanf("%f", &C);
	
	media= (A+B+C)/3;
	
	
	printf("A media %.2f", media);
		
}
