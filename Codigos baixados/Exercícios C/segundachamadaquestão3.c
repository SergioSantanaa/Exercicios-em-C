#include<stdio.h>
#include<locale.h>
//Sergio Costa de Santana
/*3. Faça um programa que receba o valor da venda, escolha a condição de pagamento no
menu e mostre o desconto o total da venda final e valor das parcelas(caso houver)
conforme condições a seguir, caso digite opção inválida, mostrar “impossível calcular”,
mostrar o valor total sem desconto e solicitar que digite novamente a opção:
1 - Venda a Vista - desconto de 10%
2 - Venda parcelada 2 vezes - desconto de 5%
3 - Venda parcelada 3 vezes - acréscimo de 6%
4 - Venda parcelada 4 vezes - acréscimo de 8%
5 - Venda a vista com cartão de débito - desconto de 6%*/


int main()
{
	setlocale(LC_ALL,"");
 float Vav,desc,Vav1,acre;
 int op;
do{
	printf("Informe o valor de venda\n");
	scanf("%f",&Vav);
	printf("Agora escolha a forma de pagamento\n1-Venda a vista - desconto de 10%%\n2-Venda parcelada em 2 vezes - desconto de 5%%\n3-Venda parcelada 3 vezes - acréscimo de 6%%\n4-Venda parcelada 4 vezes - acréscimo de 8%%\n5-Venda a vista com cartão de débito - desconto de 6%%\n");
	scanf("%d",&op);

	switch (op){
	

		case 1: 
		desc=(Vav*10)/100;
		printf("O valor do desconto é : %.2f\n",desc);
		Vav1=Vav-desc;
		printf("Valor da venda é %.2f\n",Vav1);
		break;
		
		
		case 2:
		desc=(Vav*5)/100;
		printf("O valor do desconto é : %.2f\n",desc);
		printf("Valor da venda é : %.2f\n",Vav-desc);
		Vav1=Vav/2;
		printf("O valor da parcela é : %.2f\n" ,Vav1);
		break;
		
		case 3:
		acre=(Vav*6)/100;
		printf("Valor do acréscimo é : %.2f\n",acre);
		Vav1=acre+Vav;
		printf("O valor da venda é : %.2f\n",Vav1);
		printf("O valor da parcela é : %.2f\n",Vav1/3);
		break;
		
		case 4: 
		acre=(Vav*8)/100;
		printf("Valor do acréscimo é : %.2f\n",acre);
		Vav1=acre+Vav;
		printf("O valor da venda é : %.2f\n",Vav1);
		printf("O valor da parcela é : %.2f\n",Vav1/4);
		break;
		
		case 5: 
		desc=(Vav*6)/100;
		printf("O valor do desconto é : %.2f\n",desc);
		Vav1=Vav-desc;
		printf("Valor da venda é %.2f\n",Vav1);
		break;

		default: printf("impossível calcular\n");
				 printf("Valor da venda %.2f digite novamente a opção de pagamento\n",Vav);
	
		
	
			
}
}while(Vav!=0);
	printf("Informe um valor diferente de 0\n");

	
}

