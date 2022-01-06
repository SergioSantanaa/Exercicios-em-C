//1º Quetão



#include<stdio.h>
#include<locale.h>
int main(){
	setlocale(LC_ALL," ");
	int vetor[4],i,maior;
	for(i=0;i<=4;i++){
		printf("Informe 4 números diferentes\n",i+1);
		scanf("%d",&vetor[i]);
	
for(i=1;i<=4;i++){
	

		if (vetor[i]>maior){
			
			vetor[i]=maior;
			
	}
}
	
	 printf("Maior número \n");
	
	}
}
