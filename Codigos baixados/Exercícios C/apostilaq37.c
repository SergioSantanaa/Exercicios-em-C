#include<stdio.h>
#include<locale.h>
#include <assert.h>
int main()
{
	setlocale(LC_ALL,"");
	int i,a,soma,quadrado;
	i=1;
	while(i!=0)
	{
		soma   += i % 10;
        i = i / 10;
        printf("%d",soma);
        i++;
	}
	
}
