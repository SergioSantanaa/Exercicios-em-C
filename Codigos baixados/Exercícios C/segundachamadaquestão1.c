#include<stdio.h>
#include<locale.h>
//Sergio Costa de Santana
/*Leia a idade, o sexo e o tempo de servi�o de um trabalhador e escreva se ele pode ou
n�o se aposentar.
As condi��es para aposentadoria para quem � do sexo masculino s�o:
Ter pelo menos 65 anos, E ter trabalhado pelo menos 30 anos.
Se for do sexo feminino:
Ter pelo menos 60 anos, E ter trabalhado pelo menos 25 anos
Crie um menu que o usu�rio continue digitando at� que digite S ou s para sair e/ou
N ou n para continuar digitando no algoritmo, caso digite outra op��o informar
�op��o inv�lida, digite novamente at� digitar uma op��o v�lida:*/










int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float id,tp;
	char sexo [1],Continuar [10];
	printf("In�cio\n");
	printf("Informe os dados a seguir para saber se est� apto para aposentadoria\n");
	printf("Informe o sexo (M para masculino e F para feminino)\n");
	scanf(" %c",&sexo);
		if(sexo=='M' || sexo=='F')
		{
	
	printf("Deseja continuar? Digite S para sim ou N para n�o\n");
	scanf(" %c",&Continuar);
		if(Continuar=='S' || Continuar=='s')
		{
		printf("Ok vamos continuar\n");
			
		}
	printf("Informe a idade\n");
	scanf("%f",&id);
					
	
	
	printf("Informe o tempo de servi�o\n");
	scanf("%f",&tp);
		
	
	
	
		}
		
	
		
		
						printf("Programa finalizado\n");
						
				}






