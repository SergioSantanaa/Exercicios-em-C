#include<stdio.h>
#include<locale.h>

int main()
{
	setlocale(LC_ALL,"");
	float num ,i,soma=0, total;
	float med;
	for(i=0; i<9; i++)
	{
		printf("Informe o %.f�  n�mero\n",i+1);
		scanf("%f",&num);
		
		soma=soma+num;
		
		printf("Soma : %.f\n",soma);
		

	
	
	
		med=soma/10;
		printf("M�dia : %.2f\n",med);
		}
		
		}
		
	/*	while(i<9)
			{
		printf("Informe o %.f�  n�mero\n",i+1);
		scanf("%f",&num);
		
		soma=soma+num;
		
		printf("Soma : %.f\n",soma);
	
		med=soma/10;
		printf("M�dia : %.2f\n",med);
		i++;
			}
		
			}
			*/
			
			
	
