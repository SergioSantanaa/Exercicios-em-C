#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
int vet[3],i;
int menor;

	for(i=0; i<3; i++){
			
	printf("Informe %d� valor\n",i+1);
	scanf("%d",&vet[i]);
	
		}
		
				menor=vet[0];
			for(i=1; i<3; i++)
			{
			
			if(vet[i]< menor){
			menor=vet[1];
			
	
			
			}
			}
			for(i=0; i<3; i++){
				printf(" %d� Vetor : %d\n",i+1, vet[i]);
			}
			printf("O menor valor � : %d", menor);
		}


			
				
//				int b;
//				while (b!=0){
//					printf("Digite um n�mero para saber a sua posi��o no vetor\n");
//				scanf("%d",&b);
//					if(b==vet[i]){
//						printf("n�mero digitado %d na POSI��O : %d�",b,vet[i]);
//					}
//				}
//				}
				
			
			
		
	

