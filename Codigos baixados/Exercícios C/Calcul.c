#include<stdio.h>

//Baseados em dados de análise de anúncios anteriores, a agência tem os seguintes dados:

//a cada 100 pessoas que visualizam o anúncio 12 clicam nele.
//a cada 20 pessoas que clicam no anúncio 3 compartilham nas redes sociais.
//cada compartilhamento nas redes sociais gera 40 novas visualizações.
//30 pessoas visualizam o anúncio original (não compartilhado) a cada R$ 1,00 investido.
//o mesmo anúncio é compartilhado no máximo 4 vezes em sequência
//(1ª pessoa -> compartilha -> 2ª pessoa -> compartilha - > 3ª pessoa -> compartilha -> 4ª pessoa)


//Crie um script em sua linguagem de programação preferida que receba o valor investido em reais e retorne uma projeção aproximada da quantidade máxima de pessoas que visualizarão o mesmo anúncio (considerando o anúncio original + os compartilhamentos)

 




main(){
	int V,Real, Clicks,RS,Comp,CS,Total;
	
	printf("Informe o valor a ser investido em reais para simular o alcance de visualizacoes\n");
	scanf("%d",&V);
	Real=(30); 
	Clicks=(12);
	RS=(15);
	Comp=(40);
	CS=(4);
	Total=(V* veReal*Clicks*RS*Comp*CS);
	
	
	  printf("O resultado da projecao:%d",Total);
	
	
}
