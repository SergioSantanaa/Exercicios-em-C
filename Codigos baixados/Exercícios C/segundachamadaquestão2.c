#include<stdio.h>
#include<locale.h>


/*2. Um hotel com 30 quartos cobra R$ 50,00 por diária e mais uma taxa de serviços. A taxa
de serviços é de:
• R$ 4,00 por diária, se o número de diárias for< 15;
• R$ 3,60 por diária, se o número de diárias for = 15;
• R$ 3,00 por diária, se o número de diárias for > 15.
Faça um algoritmo que leia o total da conta de cada cliente do hotel e imprima o total ganho
pelo hotel.*/

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float dia,total,soma,taxa;
	int diaria=50;
	int mult,i;
	for(i=0; i<3; i++){
		
	
	
	printf("Informe o número de dias que o %dº cliente ficou hospedado\n",i+1);
	scanf("%f",&dia);
		if(dia<15)
		{
			mult=dia*diaria;
			taxa=dia*4,00;
			soma=taxa+mult;
			printf("O total é de :%.2f\n",soma);	
		}else
			{
				if(dia==15)
					{
					mult=dia*diaria;
					taxa=dia*3,60;;
					soma=taxa+mult;
					printf("O total é de :%.2f\n",soma);
					}
					
			}
						if(dia>15)
						{
						mult=dia*diaria;
						taxa=dia*3,60;;
						soma=taxa+mult;
						printf("O total é de :%.2f\n",soma);
						}
						
					}
					

			
}

