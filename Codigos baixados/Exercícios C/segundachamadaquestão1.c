#include<stdio.h>
#include<locale.h>
//Sergio Costa de Santana
/*Leia a idade, o sexo e o tempo de serviço de um trabalhador e escreva se ele pode ou
não se aposentar.
As condições para aposentadoria para quem é do sexo masculino são:
Ter pelo menos 65 anos, E ter trabalhado pelo menos 30 anos.
Se for do sexo feminino:
Ter pelo menos 60 anos, E ter trabalhado pelo menos 25 anos
Crie um menu que o usuário continue digitando até que digite S ou s para sair e/ou
N ou n para continuar digitando no algoritmo, caso digite outra opção informar
“opção inválida, digite novamente até digitar uma opção válida:*/










int main(){
	setlocale(LC_ALL,"PORTUGUESE");
	float id,tp;
	char sexo [1],Continuar [10];
	printf("Início\n");
	printf("Informe os dados a seguir para saber se está apto para aposentadoria\n");
	printf("Informe o sexo (M para masculino e F para feminino)\n");
	scanf(" %c",&sexo);
		if(sexo=='M' || sexo=='F')
		{
	
	printf("Deseja continuar? Digite S para sim ou N para não\n");
	scanf(" %c",&Continuar);
		if(Continuar=='S' || Continuar=='s')
		{
		printf("Ok vamos continuar\n");
			
		}
	printf("Informe a idade\n");
	scanf("%f",&id);
					
	
	
	printf("Informe o tempo de serviço\n");
	scanf("%f",&tp);
		
	
	
	
		}
		
	
		
		
						printf("Programa finalizado\n");
						
				}






