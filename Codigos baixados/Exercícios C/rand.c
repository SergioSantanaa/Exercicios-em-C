#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
int i,vet[5];

srand(time(NULL));
for(i=0; i<5;i++)
{
	printf("\n%d\n\n", rand() % 9999);	
}
getch ();
 system("pause");
 return 0;
}

