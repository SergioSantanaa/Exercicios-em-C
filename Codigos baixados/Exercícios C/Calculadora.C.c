#include<stdio.h>
#include<locale.h>

main(){
	
	setlocale(LC_ALL,"");
	
	//código feito utilizando regra de três para  chegar ao valor do real investido
	//depois multiplico o valor inserido pelo usuário pelo número de visualizações 
	//fiz um if para o caso do usuário fizer um investimento inferior a 1 real.
	
	float V,Visu;
	int i;
	for(i=0; i<100;i++)
	{
		printf("Informe o valor em reais para saber o máximo de visualizações\n");
		scanf("%f",&V);
		Visu=(V*199.8);
			if(V<=1);
			printf("O resultado é:%.2f\n\n",Visu);
	}
		
}
