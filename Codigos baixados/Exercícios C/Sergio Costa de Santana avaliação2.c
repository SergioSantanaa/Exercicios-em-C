#include<stdio.h>
#include<locale.h>
//S�rgio Costa de Santana
//Quest�o 1 -1. Escreva um algoritmo que, para uma conta bancaria, leia o seu n�mero, o saldo, o tipo de
//opera��o a ser realizada (D: deposito ou R: retirada) e o valor da opera��o. Se o saque for
//maior do que saldo dispon�vel, deve ser mostrada, a mensagem "Saldo Insuficiente" e
//mostre o saldo, caso contr�rio mostrar mensagem �Saque realizado�. Ap�s, determine e
//mostre o novo saldo.

int main(){
	
	
	int A;
	setlocale(LC_ALL,"portuguese");
	float conta,saldo,Dep,Ret,sub,soma;
	char op;
	printf("Vamos come�ar ?\n\n");
	printf("Informe a conta : \n");
	scanf("%f",&conta);
	printf("Agora informe  o saldo:\n");
	scanf("%f",&saldo);
	printf("Qual opera��o deseja realizar?\nDigite D para dep�sito ou R para retirar\n");
	scanf(" %c",&op);
		if(op=='R' || op=='r'){
		printf("Informe agora o valor do saque : \n");
		scanf("%f",&Ret);
			if(Ret>saldo){
						printf("Saldo insuficiente! Seu saldo � de : %.2f\n",saldo);
						scanf("%d",&A);
						
					
			}
		
		
			
					if(Ret<=saldo){
					printf("Saque realizado com sucesso seu saldo agora � de : %.2f\n",sub);
	
						}
	
	}
	
	
					else{
						if(op=='D'|| op=='d'){
				
						printf("informe o valor do dep�sito\n");
						scanf("%f",&Dep);
						soma=(saldo+Dep);
						printf("Dep�sito realizado com sucesso seu saldo agora � de : %.2f\n",soma);
			
								}
								}

	
	
				
					
				
					
		}
	
			
		
		

















