#include<stdio.h>
#include<locale.h>

int main(){
	
	setlocale(LC_ALL,"");
	
	int i,j,matriz [3][3];
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Informe números diferentes\n");
			scanf("%d",&matriz[i][j]);
		}
	}	
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				printf("%d ====== %d ====== %d\n",i,j,matriz[i][j]);
			}
			printf("\n");
		}
	}
