#include<stdio.h>
#include<locale.h>

int main()
{
	int i,j,mat[10][10];
	for(i=0; i<10; i++)
	{
		for(j=0; j<10; j++)
		{
			printf("Informe um vallor\n");
			scanf("%d",&mat[i][j]);
		}	
	}
	
		for(i=0; i<10; i++)
		{
			for(j=0; j<10; j++)
			{
			
				printf("%d %d %d",i,j,mat[i][j]);
			}
		printf("\n");
		}
}
