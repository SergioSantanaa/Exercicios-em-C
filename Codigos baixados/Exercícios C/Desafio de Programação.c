#include<stdio.h>
#include<locale.H>



///Código para realizar cadastro e informar os dados de investimento dia e relatórios do cliente que registrou seu anuncio
//usando caractere para o nome e float para receber os dados que podem der em valores fracionados
//alem disso utilizando também um switch case para as opcoes de dias disponíveis



main(){
	setlocale(LC_ALL,"");
	float cl,di,df,id,opcao,V,Visu,compart,cliq,tcliq;
	int op,soma;
	char an;
	printf("Vamos Comecar?\n\n");
	printf("Informe o nome do anúncio\n");
	scanf("%s",&an);

	printf("Agora a data de início do seu anúncio de 1 a 5\n");
	scanf("%f",&di);
		if(di>=1 && di<=5)
		{
			printf("Muito bem agora o período que deseja que o anúncio fique ativo dentre as opções\n1-5 dias\n2-8 dias\n3-10 dias\n4-20 dias\n");
			scanf("%d",&op);
		}else
			{
				printf("Data inesistente\n");
			}
			switch (op){
			case 1: soma=(di+5);
			printf("Data final do anúncio : %d\n\n", soma);
			printf("Valor total que será investido em reais : 5\n\n");
			break;
			case 2: soma=(di+8);
				printf("Data  final do anúncio : %d\n\n",soma);
				printf("Valor total que será investido investido em reais : 8\n\n");
			break; 
			case 3: soma=(di+10);
				printf("Data final do anúncio : %d\n\n",soma);
				printf("Valor total que será investido em reais : 10\n\n");
			break;
			case 4: soma=(di+20);
				printf("Data  final do anúncio : %d\n\n",soma);
				printf("Valor total que será investido em reais : 20\n\n");
			break;
			default:
				printf("Opcao invalida\n\n");
				}
			
				printf("Valor a ser investido por dia : 1\n\n");	
				printf("Para finalizar o cadastro digite 1\n\n");
				scanf("%f",&opcao);
					if (opcao==1)
					{
						printf("Aguarde finalizacao do registro\n\n");
						printf("Cadastro finalizado com sucesso\n\n\n\n");
					}
					else
					{
						printf("Para finalizar o cadastro digite 1\n\n");
						printf("Opcao invalida");
					}
					printf("__________________________________________________________________________________\n\n\n");
													
													///Reaproveitando o código da calculadorra para saber os dados
													// em cliques foi multiplicado por 24 pelo fato de na regra de 3 a cada real investido erá retornado 199,8 visualizações que geram 24 cliques 
													//além disso o número de compartilhamentos é dividido por 6.6 que é o número necessário a cada 20 cliques para gerar 3 visualizações
					printf("Vamos acessar os seus relatórios?\n\n\n");
					printf(" Infome o valor total investido para saber a quantidade máxima de visualizações do seu anúncio:\nlembrando que o mínimo é 1 e o máximo é 20\n");
					scanf("%f",&V);
					Visu=(V*199.8);
					printf("O resultado é : %.2f visualizações\n\n",Visu);
					printf("Informe novamente o valor total investido para saber o número de cliques totais\n");
					scanf("%f",&cliq);
																						//	if (V<=1){
					tcliq=(V*24);
					printf("O número total de cliques é: %.f\n\n",tcliq);
																								
					compart=(tcliq/6.6);
					printf("O número total de compartilhamentos é: %.f\n\n",compart);
																									
																									
																									
					return(0);
																										
																					
																					
																					
																						
																								
																								
																						
																				
													





















}


