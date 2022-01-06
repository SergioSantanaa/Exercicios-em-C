#include<stdio.h>

main(){

int A,B;
printf("digite um valor\n");
scanf("%d", &A);
printf("digite um valor\n");
scanf("%d", &B);
if (A<B)
{
	printf("%d eh menor",A);
	
}
else{
	if(B<A)
	printf("%d eh o menor",B);
	
}
}

