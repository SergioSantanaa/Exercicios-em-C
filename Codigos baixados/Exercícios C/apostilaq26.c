#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"");

int i,a;
printf("informe um número\n");
scanf("%d",&a);
/*for(i=0; i<=a; i++)
{
	if(i%11==0|| i%13==0 || i%17==0)
	{
		printf("%d\n",i);
	}
}
}*/

while(i<=a)
{
	
	if(i%11==0|| i%13==0 || i%17==0)
		{
			printf("%d\n",i);
		}	
		i++;
}
}

