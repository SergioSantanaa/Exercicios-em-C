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
	int Al=1,Al1,Con;

setlocale(LC_ALL,"portuguese");
while
(Al<=100){
	
printf("Informe a nota do aluno %d� de 0 a 100 para saber seu conceito\n",Al++);
scanf("%d",&Al);

	if(Al<=49)//{
		printf("Conceito do aluno : Insuficiente\n");
		
		
//	}else{
		if(Al>=50 && Al<65)//{
			printf("Conceito do aluno : Regular\n",Al);
	//	}
	

		if(Al>64 && Al<85)//{
			printf("Conceito do aluno : Bom\n",Al);
		//}else{
			if(Al>=85 && Al<=100)//{
				printf("Conceito �timo\n",Al);
		//	}
			//else (Al>100);//{
		//	printf("Op��o Inv�lida, digite novamente\n");
		//	}
		//	}
	
			printf("Digite S para sair ou C para Continuar\n");
			scanf(" %c",&Con);
				}	while(Con=='C' || Con=='c'){
				
			
				
						printf("Informe a nota do aluno %d� de 0 a 100 para saber seu conceito\n",Al);
					scanf("%d",&Al);
					Al++;
					
	if(Con!='C' || Con!='c'){
			printf("Prograna finalizado com sucesso\n");
		}

}

			
		

//}




