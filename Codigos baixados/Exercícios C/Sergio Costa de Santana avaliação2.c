#include<stdio.h>
#include<locale.h>
//Sérgio Costa de Santana
//Questão 1 -1. Escreva um algoritmo que, para uma conta bancaria, leia o seu número, o saldo, o tipo de
//operação a ser realizada (D: deposito ou R: retirada) e o valor da operação. Se o saque for
//maior do que saldo disponível, deve ser mostrada, a mensagem "Saldo Insuficiente" e
//mostre o saldo, caso contrário mostrar mensagem “Saque realizado”. Após, determine e
//mostre o novo saldo.

int main(){
	
	
	int A;
	setlocale(LC_ALL,"portuguese");
	float conta,saldo,Dep,Ret,sub,soma;
	char op;
	printf("Vamos começar ?\n\n");
	printf("Informe a conta : \n");
	scanf("%f",&conta);
	printf("Agora informe  o saldo:\n");
	scanf("%f",&saldo);
	printf("Qual operação deseja realizar?\nDigite D para depósito ou R para retirar\n");
	scanf(" %c",&op);
		if(op=='R' || op=='r'){
		printf("Informe agora o valor do saque : \n");
		scanf("%f",&Ret);
			if(Ret>saldo){
						printf("Saldo insuficiente! Seu saldo é de : %.2f\n",saldo);
						scanf("%d",&A);
						
					
			}
		
		
			
					if(Ret<=saldo){
					printf("Saque realizado com sucesso seu saldo agora é de : %.2f\n",sub);
	
						}
	
	}
	
	
					else{
						if(op=='D'|| op=='d'){
				
						printf("informe o valor do depósito\n");
						scanf("%f",&Dep);
						soma=(saldo+Dep);
						printf("Depósito realizado com sucesso seu saldo agora é de : %.2f\n",soma);
			
								}
								}

	
	
				
					
				
					
		}
	
			
		
		

















