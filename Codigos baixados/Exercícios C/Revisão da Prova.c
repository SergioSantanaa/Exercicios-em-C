#include<stdio.h>
#include<locale.h>


//S�rgio Costa de Santana
//Quest�o 2- Suponha que o conceito de um aluno seja determinado em fun��o da sua nota. Suponha,
//tamb�m, que esta nota seja um valor inteiro na faixa de 0 a 100, conforme a seguinte faixa:
//� Nota Conceito
//� 0 a 49 Insuficiente
//� 50 a 64 Regular
//� 65 a 84 Bom
//� 85 a 100 �timo
//Crie um algoritmo que apresente a ordem dos alunos o conceito e a
//nota do aluno.
//Crie um menu que o usu�rio continue digitando at� que digite S ou s para sair e/ou
//C ou c para continuar digitando no algoritmo, caso digite outra op��o informar
//�op��o inv�lida, digite novamente:

int main(){
	setlocale(LC_ALL,"portuguese");
	int Al,Al1=1;
	char Op;
	
	while(Al <=100){
	
	printf("Informe a nota do %d� aluno para saber seu conceito\n",Al1);
	scanf("%d",&Al);
	Al1++;	
									
	if(Al>=0 && Al<=49){
		printf("O aluno est� com a nota : %d, e o seu conceito � : Insuficiente\n",Al);
		}else
			{
		if(Al>=50 && Al<=64)
				{
				printf("O aluno est� com a nota : %d, e o seu conceito � : Regular\n",Al);
				}	
					}
					if(Al>=65 && Al<=84)
						{
				printf("O aluno est� com a nota : %d, e o seu conceito � : Bom\n",Al);
				
						}else
						{
								if(Al>=85 && Al <=100)
								{
						printf("O aluno est� com a nota : %d, e o seu conceito � : �timo\n",Al);
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
										printf("Op��o inv�lida\n");
									}
								}
								
							
							
								

//}

