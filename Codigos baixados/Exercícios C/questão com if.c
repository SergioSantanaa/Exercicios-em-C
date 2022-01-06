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
	int Al=1,Al1,Con;

setlocale(LC_ALL,"portuguese");
while
(Al<=100){
	
printf("Informe a nota do aluno %dº de 0 a 100 para saber seu conceito\n",Al++);
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
				printf("Conceito Ótimo\n",Al);
		//	}
			//else (Al>100);//{
		//	printf("Opção Inválida, digite novamente\n");
		//	}
		//	}
	
			printf("Digite S para sair ou C para Continuar\n");
			scanf(" %c",&Con);
				}	while(Con=='C' || Con=='c'){
				
			
				
						printf("Informe a nota do aluno %dº de 0 a 100 para saber seu conceito\n",Al);
					scanf("%d",&Al);
					Al++;
					
	if(Con!='C' || Con!='c'){
			printf("Prograna finalizado com sucesso\n");
		}

}

			
		

//}




