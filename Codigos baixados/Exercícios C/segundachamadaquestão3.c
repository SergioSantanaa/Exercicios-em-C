#include<stdio.h>
#include<locale.h>
//Sergio Costa de Santana
/*3. Fa�a um programa que receba o valor da venda, escolha a condi��o de pagamento no
menu e mostre o desconto o total da venda final e valor das parcelas(caso houver)
conforme condi��es a seguir, caso digite op��o inv�lida, mostrar �imposs�vel calcular�,
mostrar o valor total sem desconto e solicitar que digite novamente a op��o:
1 - Venda a Vista - desconto de 10%
2 - Venda parcelada 2 vezes - desconto de 5%
3 - Venda parcelada 3 vezes - acr�scimo de 6%
4 - Venda parcelada 4 vezes - acr�scimo de 8%
5 - Venda a vista com cart�o de d�bito - desconto de 6%*/


int main()
{
	setlocale(LC_ALL,"");
 float Vav,desc,Vav1,acre;
 int op;
do{
	printf("Informe o valor de venda\n");
	scanf("%f",&Vav);
	printf("Agora escolha a forma de pagamento\n1-Venda a vista - desconto de 10%%\n2-Venda parcelada em 2 vezes - desconto de 5%%\n3-Venda parcelada 3 vezes - acr�scimo de 6%%\n4-Venda parcelada 4 vezes - acr�scimo de 8%%\n5-Venda a vista com cart�o de d�bito - desconto de 6%%\n");
	scanf("%d",&op);

	switch (op){
	

		case 1: 
		desc=(Vav*10)/100;
		printf("O valor do desconto � : %.2f\n",desc);
		Vav1=Vav-desc;
		printf("Valor da venda � %.2f\n",Vav1);
		break;
		
		
		case 2:
		desc=(Vav*5)/100;
		printf("O valor do desconto � : %.2f\n",desc);
		printf("Valor da venda � : %.2f\n",Vav-desc);
		Vav1=Vav/2;
		printf("O valor da parcela � : %.2f\n" ,Vav1);
		break;
		
		case 3:
		acre=(Vav*6)/100;
		printf("Valor do acr�scimo � : %.2f\n",acre);
		Vav1=acre+Vav;
		printf("O valor da venda � : %.2f\n",Vav1);
		printf("O valor da parcela � : %.2f\n",Vav1/3);
		break;
		
		case 4: 
		acre=(Vav*8)/100;
		printf("Valor do acr�scimo � : %.2f\n",acre);
		Vav1=acre+Vav;
		printf("O valor da venda � : %.2f\n",Vav1);
		printf("O valor da parcela � : %.2f\n",Vav1/4);
		break;
		
		case 5: 
		desc=(Vav*6)/100;
		printf("O valor do desconto � : %.2f\n",desc);
		Vav1=Vav-desc;
		printf("Valor da venda � %.2f\n",Vav1);
		break;

		default: printf("imposs�vel calcular\n");
				 printf("Valor da venda %.2f digite novamente a op��o de pagamento\n",Vav);
	
		
	
			
}
}while(Vav!=0);
	printf("Informe um valor diferente de 0\n");

	
}

