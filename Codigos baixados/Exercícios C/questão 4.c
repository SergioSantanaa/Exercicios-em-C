#include<stdio.h>
#include<locale.h>

//Faça um algoritmo que some o conteúdo de dois vetores (usuário decide o tamanho dos
//vetores) e armazene o resultado em um terceiro vetor, logo após crie um quarto vetor para
//imprimir o vetor em ordem inversa.

int main()
{ 
int Tam;
	printf("Informe o tamanho dos vetores : \n");
	scanf("%d",&Tam);
	int vet1[Tam],vet2[Tam],vet3[Tam],vet4[Tam],i;
	for(i=0; i<Tam; i++)
	{
		printf("Digite o %d valor do vetor 1\n",i+1);
		scanf("%d",&vet1[i]);
	}
		
		for(i=0; i<Tam; i++)
	{
		printf("Digite o %d valor do vetor 2\n",i+1);
		scanf("%d",&vet2[i]);
	}

		for(i=0; i<Tam; i++){
		vet3[i]=vet1[i] + vet2[i];
		printf("%d\n",vet3[i]);	
}

	int	con=0;
	
			printf("======================= Vetor 4 ======================\n");
			
			for(i=Tam; i>=0; i--){			
			vet4[con]=vet3[i];
						con++;  
			}
			for(i=0; i<Tam; i++){
				printf("%d\n",vet4[i]);
			}
			
		
}
