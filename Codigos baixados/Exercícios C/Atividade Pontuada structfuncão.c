//Elabore um programa em C que possua uma estrutura de aluno com (caracteres)nome, (inteiro)idade e
//(caracter)sexo, sendo vetor de 10 posições (Criação de 10 alunos). Utilizando funções resolva as seguintes
//questões:
//a) Crie uma função que mostre a quantidade de alunos existentes no vetor que as idades sejam maiores que
//10(Utilizar return)
//b) Crie uma função de nome MENOR que retorne o Aluno(nome, idade e sexo) com a menor idade existente no
//vetor (Utilizar return)
//c) Crie uma função que mostre os Alunos(nome, idade e sexo) com idades pares e impares existentes no vetor.
//d) Crie uma função que receba um número inteiro vindo do main() e retorne quantos Alunos(nome, idade e sexo)
////existentes no vetor são maiores que esse número (Utilizar return)


#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <math.h>

int maiorque10 (int idade ,int b ){

 int maior=idade>b;
 return maior;
}
int menordetodos (int idade , int b){
	int menor= idade <b;
	return menor;
}
//int parimpar (int Par, int Impar){
//	int Impar= Par/2==1;
//return Impar;
//}
int Cadaluno (int a ,int b){
	int comp= a>b;
	return comp;
}

int main(){
	
	setlocale(LC_ALL,"PORTUGUESE");
	struct cadastroaluno{
		
	char nome [50];
	char sexo[20];
	int idade, m,m3;
		};
		struct cadastroaluno a;
		struct cadastroaluno vetA[3];
		printf("============= CADASTRO DOS ALUNOS ===============\n\n");
		
		int i;
		for(i=0; i<10; i++)
		{
		printf("Informe o nome do %dº aluno\n",i+1);
		fflush(stdin);
		gets(vetA[i].nome);	
		
			
		printf("Informe o sexo do %dº aluno\n",i+1);
		fflush(stdin);
		gets(vetA[i].sexo);
	
		
		printf("Digite a idade do %dº aluno\n",i+1);
		scanf("%d", &vetA[i].idade);
		if (vetA[i].idade >10){
	
		 int maiorque10 (int idade ,int b);
				maiorque10 ( vetA[i].idade ,11);
					
		printf("Aluno maior de 10 anos\n");
			}
				
				
			int menordetodos (int idade ,int b);
				menordetodos ( vetA[i].idade ,0);
				printf("o mais novo : %d anos\n", vetA[i].idade);
		
//

					if(vetA[i].idade%2==1){
				
					int parimpar (int Par ,int Impar);
					parimpar (vetA[i].idade ,0);
					printf("Aluno com idade ÍMPAR\n",vetA[i].idade);
		
		}else if
		
				printf("Aluno com idade PAR\n",vetA[i].idade);
					
			printf("----------------------------------------------\n");
		}
			
		for(i=0; i<10; i++){
	
			
		printf("============= CADASTRO DO ALUNO ===============\n");
		
		printf("O nome do %dºaluno é : %s\n",i+1, vetA[i].nome);
		
		printf("O sexo do %dº aluno é : %s\n",i+1, vetA[i].sexo);
		
		printf("A idade do %dº aluno é : %d\n",i+1, vetA[i].idade);
			
		
		printf("----------------------------------------------\n\n");
		
			printf("============= CADASTRO FINALIZADO ===============\n\n");
			}
		
		

				int Num;
				printf("Informe um número para saber a quantidade de alunos que tenham idade superior a ele\n");
				scanf("%d",&Num);
				if(Num > vetA[i].idade){
					
				int	Cadaluno (int a ,int b);
				Cadaluno ( Num , vetA[i].idade );
				printf ("Esses alunos possuem essas características\n");
				
				
						printf("O nome do %dºaluno é : %s\n",i+1, vetA[i].nome);
		
						printf("O sexo do %dº aluno é : %s\n",i+1, vetA[i].sexo);
		
						printf("A idade do %dº aluno é : %d\n",i+1, vetA[i].idade);
				
				}
				
				
}
