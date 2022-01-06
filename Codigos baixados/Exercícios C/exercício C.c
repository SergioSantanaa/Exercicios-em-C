#include<stdio.h>

main()
{
	float custo,por,venda;
	
	printf("informe valor de custo do produto\n");
	scanf("%f", &custo);
	
	printf("agora digite o acresicimo desejado\n");
	scanf("%f", &por);
	
	venda =custo + ((custo * por)/100);
	
	
	printf( "O valor  do produto: %2.f", venda);
	
	
}
