
#include<stdio.h>
#include<locale.h>

int main()
{
int i=3;
setlocale(LC_ALL,"PORTUGUESE");

	/*	for(i=3; i<19; i++)
		{
		if(i%3==0)
			{
				printf("%d\n",i);
			}
		
	
}
}*/

	while(i<19)
	{
		if(i%3==0)
			{
				printf("%d\n",i);
			}
			
			i++;
	}
}



