#include<stdio.h>
#include<locale.H>


///C�digo para realizar cadastro e informar os dados de investimento dia e relat�rios do cliente que registrou seu anuncio
//usando caractere para o nome e float para receber os dados que podem der em valores fracionados
//alem disso utilizando tamb�m um switch case para as opcoes de dias dispon�veis



main(){
	setlocale(LC_ALL,"");
	float cl,di,df,id,opcao,V,Visu,compart,cliq,tcliq;
	int op,soma;
	char an;
	printf("Vamos Comecar?\n\n");
	printf("Informe o nome do an�ncio\n");
	scanf("%s",&an);
//	if(an>=1 && an<1){
	//	printf("Informe o nome do anuncio\n");
		

	printf("Agora a data de in�cio do seu an�ncio de 1 a 5\n");
	scanf("%f",&di);
		if(di>=1 && di<=5){
			printf("Muito bem agora o per�odo que deseja que o an�ncio fique ativo dentre as op��es\n1-5 dias\n2-8 dias\n3-10 dias\n4-20 dias\n");
	scanf("%d",&op);
			}else{
	printf("Data inesistente\n");
}

	

	
	
		switch (op){
			case 1: soma=(di+5);
			printf("Data final do an�ncio : %d\n\n", soma);
			printf("Valor total que ser� investido em reais : 5\n\n");
			break;
			case 2: soma=(di+8);
				printf("Data  final do an�ncio : %d\n\n",soma);
				printf("Valor total que ser� investido investido em reais : 8\n\n");
			break; 
			case 3: soma=(di+10);
				printf("Data final do an�ncio : %d\n\n",soma);
				printf("Valor total que ser� investido em reais : 10\n\n");
			break;
			case 4: soma=(di+20);
				printf("Data  final do an�ncio : %d\n\n",soma);
				printf("Valor total que ser� investido em reais : 20\n\n");
			break;
			default:
				printf("Opcao invalida\n\n");
			
		
				}
					
				
				
						printf("Valor a ser investido por dia : 1\n\n");
					
					
				//	scanf("%f",&id);
					//	if (id<=0.99)
					//		printf("Valor insuficiente: Digite novamente\n\n");
					//		else
			
								//printf("O investimento e equivalente a 1 real por dia\n\n\n");
								printf("Para finalizar o cadastro digite 1\n\n");
								scanf("%f",&opcao);
									if (opcao==1){
									
										printf("Aguarde finalizacao do registro\n\n");
										printf("Cadastro finalizado com sucesso\n\n\n\n");
									}
											else{
											
											printf("Para finalizar o cadastro digite 1\n\n");
										
						
													printf("Opcao invalida");
													
											}
													printf("__________________________________________________________________________________\n\n\n");
													
													///Reaproveitando o c�digo da calculadorra para saber os dados
													// em compartihamentos foi multiplicado por 24 pelo fato de na regra de 3 a cada real investido er� retornado 199,8 visualiza��es que geram 24 cliques 
														printf("Vamos acessar os seus relat�rios?\n\n\n");
												
																printf(" Infome o valor total investido para saber a quantidade m�xima de visualiza��es do seu an�ncio:\nlembrando que o m�nimo � 1 e o m�ximo � 20\n");
																				scanf("%f",&V);
																				Visu=(V*199.8);
																																				
																						printf("O resultado � : %.2f visualiza��es\n\n",Visu);
																						
																						printf("Informe novamente o valor total investido para saber o n�mero de cliques totais\n");
																						scanf("%f",&cliq);
																						//	if (V<=1){
																								tcliq=(V*24);
																								printf("O n�mero total de cliques �: %.f\n\n",tcliq);
																								
																								compart=(tcliq/6.6);
																									printf("O n�mero total de compartilhamentos �: %.f\n\n",compart);
																									
																									
																									
																									return(0);
																										
																					
																					
																					
																						
																								
																								
																						
																				
													





















}


