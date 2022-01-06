#include<stdio.h>
#include<locale.h>
int main()
{
	int i,a=20,j=0,b;
	b=a=20;
	setlocale(LC_ALL,"");
	while(j==0)
	{
		j=1;
	
		for(i=2; i<=b; i++)
		{
	
			if(a%i!=0)
			{
				j=0;
				break;
			}
		}
		if(j==1)
		{
			printf("%d",a);
		}
		else
		a=a+2;
	}

}
