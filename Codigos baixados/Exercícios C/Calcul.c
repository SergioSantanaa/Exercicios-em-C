#include<stdio.h>

//Baseados em dados de an�lise de an�ncios anteriores, a ag�ncia tem os seguintes dados:

//a cada 100 pessoas que visualizam o an�ncio 12 clicam nele.
//a cada 20 pessoas que clicam no an�ncio 3 compartilham nas redes sociais.
//cada compartilhamento nas redes sociais gera 40 novas visualiza��es.
//30 pessoas visualizam o an�ncio original (n�o compartilhado) a cada R$ 1,00 investido.
//o mesmo an�ncio � compartilhado no m�ximo 4 vezes em sequ�ncia
//(1� pessoa -> compartilha -> 2� pessoa -> compartilha - > 3� pessoa -> compartilha -> 4� pessoa)


//Crie um script em sua linguagem de programa��o preferida que receba o valor investido em reais e retorne uma proje��o aproximada da quantidade m�xima de pessoas que visualizar�o o mesmo an�ncio (considerando o an�ncio original + os compartilhamentos)

 




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
