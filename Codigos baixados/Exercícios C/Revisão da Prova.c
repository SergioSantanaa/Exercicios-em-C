#include<stdio.h>
#include<locale.h>


//Sérgio Costa de Santana
//Questão 2- Suponha que o conceito de um aluno seja determinado em função da sua nota. Suponha,
//também, que esta nota seja um valor inteiro na faixa de 0 a 100, conforme a seguinte faixa:
//• Nota Conceito
//• 0 a 49 Insuficiente
//• 50 a 64 Regular
//• 65 a 84 Bom
//• 85 a 100 Ótimo
//Crie um algoritmo que apresente a ordem dos alunos o conceito e a
//nota do aluno.
//Crie um menu que o usuário continue digitando até que digite S ou s para sair e/ou
//C ou c para continuar digitando no algoritmo, caso digite outra opção informar
//“opção inválida, digite novamente:

int main(){
	setlocale(LC_ALL,"portuguese");
	int Al,Al1=1;
	char Op;
	
	while(Al <=100){
	
	printf("Informe a nota do %dº aluno para saber seu conceito\n",Al1);
	scanf("%d",&Al);
	Al1++;	
									
	if(Al>=0 && Al<=49){
		printf("O aluno está com a nota : %d, e o seu conceito é : Insuficiente\n",Al);
		}else
			{
		if(Al>=50 && Al<=64)
				{
				printf("O aluno está com a nota : %d, e o seu conceito é : Regular\n",Al);
				}	
					}
					if(Al>=65 && Al<=84)
						{
				printf("O aluno está com a nota : %d, e o seu conceito é : Bom\n",Al);
				
						}else
						{
								if(Al>=85 && Al <=100)
								{
						printf("O aluno está com a nota : %d, e o seu conceito é : Ótimo\n",Al);
								}
									}
									
								if(Al<100){
									printf("Deseja continuar? Digite C para prosseguir ou S para sair\n");
								scanf(" %c",&Op);
							}
								while(Op =='C'|| Op=='c')
									
									
									while(Op=='S'|| Op=='s') {
									
								
								
								printf("Programa finalizado\n");
									
									}//else {
										printf("Opção inválida\n");
									}
								}
								
							
							
								

//}

