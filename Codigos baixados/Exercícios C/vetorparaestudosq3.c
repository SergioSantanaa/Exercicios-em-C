#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
int vet1[10] = {1,2,3,4,5,6,7,8,9,10};
int vet2[10];
int i,j;

	for( i=0, j=9; i<10; i++, j--)
	{
		vet2[j]=vet1[i];
	}
		for(i=0; i<10; i++)
		{
			printf("%d",vet2[i]);
			
		}
	}
	
