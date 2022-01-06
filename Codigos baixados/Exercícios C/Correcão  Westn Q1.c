#include<stdio.h>

main()
{
int op;
float n1,n2;

printf("Escolha a opcao desejada:\n\n 1- SOMA\n 2- MULTIPLICACAO\n 3- SUBTRACAO\n 4- DIVISAO\n");
scanf("%d", &op);

printf("Digite o primeiro eo segundo valor\n");
scanf("%f %f",&n1,&n2);

switch (op){
    
    case 1: 
		printf("O resultado da soma eh igual a : %.2f", n1+n2);
    	break;
    
    case 2: 
		printf("O resultado da multiplicacao eh igual a : %.2f", n1*n2);
    	break;
    
    case 3:
		printf("O resultado da subtracao eh igual a : %.2f", n1-n2);
   	 break;
    
    case 4:
		printf("O resultado da da divisao eh igual a : %.2f", n1/n2);
    	break;
    
    default:
    	
    	printf("Opcao invalida");
    	
}
}



