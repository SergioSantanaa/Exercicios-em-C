#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
int vet[3],i;
int menor;

	for(i=0; i<3; i++){
			
	printf("Informe %dº valor\n",i+1);
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
				printf(" %dº Vetor : %d\n",i+1, vet[i]);
			}
			printf("O menor valor é : %d", menor);
		}


			
				
//				int b;
//				while (b!=0){
//					printf("Digite um número para saber a sua posição no vetor\n");
//				scanf("%d",&b);
//					if(b==vet[i]){
//						printf("número digitado %d na POSIÇÃO : %dº",b,vet[i]);
//					}
//				}
//				}
				
			
			
		
	

