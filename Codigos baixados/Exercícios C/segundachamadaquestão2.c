#include<stdio.h>
#include<locale.h>


/*2. Um hotel com 30 quartos cobra R$ 50,00 por di�ria e mais uma taxa de servi�os. A taxa
de servi�os � de:
� R$ 4,00 por di�ria, se o n�mero de di�rias for< 15;
� R$ 3,60 por di�ria, se o n�mero de di�rias for = 15;
� R$ 3,00 por di�ria, se o n�mero de di�rias for > 15.
Fa�a um algoritmo que leia o total da conta de cada cliente do hotel e imprima o total ganho
pelo hotel.*/

int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float dia,total,soma,taxa;
	int diaria=50;
	int mult,i;
	for(i=0; i<3; i++){
		
	
	
	printf("Informe o n�mero de dias que o %d� cliente ficou hospedado\n",i+1);
	scanf("%f",&dia);
		if(dia<15)
		{
			mult=dia*diaria;
			taxa=dia*4,00;
			soma=taxa+mult;
			printf("O total � de :%.2f\n",soma);	
		}else
			{
				if(dia==15)
					{
					mult=dia*diaria;
					taxa=dia*3,60;;
					soma=taxa+mult;
					printf("O total � de :%.2f\n",soma);
					}
					
			}
						if(dia>15)
						{
						mult=dia*diaria;
						taxa=dia*3,60;;
						soma=taxa+mult;
						printf("O total � de :%.2f\n",soma);
						}
						
					}
					

			
}

