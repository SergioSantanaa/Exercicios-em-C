#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL," ");
	
	int i,j,matriz [3][3],maior;
	
	for(i=0; i<3;i++){
	
		for(j=0; j<3; j++){		
		
		printf("Digite valores diferentes\n");
		scanf("%d", &matriz[i][j]);
	}
	}
	
	
	for(i=0; i<3;i++){
		for(j=0; j<3; j++)
		{
		
		printf("%d\t%d\t%d\t" ,i,j,matriz[i][j]);
			if(matriz[i][j]>maior){
				maior=matriz[i][j];
				
			}
		}
		printf("\n");
		

}
//printf("O maior é: %d", maior);
	}
		
