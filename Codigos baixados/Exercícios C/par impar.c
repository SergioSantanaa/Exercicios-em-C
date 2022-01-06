#include<stdio.h>

main(){

int A,B,soma;
printf("digite um valor\n");
scanf("%d", &A);
printf("digite um valor\n");
scanf("%d", &B);

soma=(A+B);

if ((soma%2)==0)
{
	printf("%d eh par", soma);
	
}
else{
	
	printf("%d eh impar", soma);
	
}
}
