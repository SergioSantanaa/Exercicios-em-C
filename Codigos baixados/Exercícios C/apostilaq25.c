#include<stdio.h>
#include<locale.h>
int main()
{

int i,a;
for(i=3; i<1000; i++)
{
	if(i%3==0|| i%5==0)
	{
		printf("%d\n",i);
	}
}
}

/*while(i<1000)
{

	if(i%3==0 || i%5==0)
		{
			printf("%d\n",i);
		}	
		i++;
}
}*/

