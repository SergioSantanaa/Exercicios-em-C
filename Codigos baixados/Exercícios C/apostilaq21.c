#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"PORTUGUESE");
	int i,a,b,soma=0,multi=0,g;
	
		printf("Informe o primeiro número\n",i+1);
		scanf("%d",&a);
		printf("Informe o segundo número\n",i+1);
		scanf("%d",&b);
		if(a>b)
			{
			for(i=b; i<=a; i++)
				{
				if(i%2==0)
					{
						soma=soma+i;
						printf("%d\n",i);
					}
						else
							{
								if(i%2==1)
									{
										multi=i*i;
										printf("%d\n",i);
									}
							}
				}
			}
		else
			{
				if(a<b)
					{
					for(i=a; i<=b; i++)
						{
					if(i%2==0)
						{
							soma=soma+i;
							printf("%d\n",i);
						}
								else
									{
										if(i%2==1)
											{
												multi=i*i;
												printf("%d\n",i);
											}
									}					
						}
					}
				}
				printf("Soma dos pares : %d\n",soma);
				printf("A multiplicação dos ímpares : %d\n",multi);
}




	/*printf("Informe o primeiro número\n",i+1);
		scanf("%d",&a);
		printf("Informe o segundo número\n",i+1);
		scanf("%d",&b);
		if(a>b)
			{
			while( i<=a)
				{
				if(i%2==0)
					{
						soma=soma+i;
						printf("%d\n",i);
					}
						else
							{
								if(i%2==1)
									{
										multi=i*i;
										printf("%d\n",i);
									}
							}
							i++;
				}
			}
		else
			{
				if(a<b)
					{
					while( i<=b)
						{
					if(i%2==0)
						{
							soma=soma+i;
							printf("%d\n",i);
						}
								else
									{
										if(i%2==1)
											{
												multi=i*i;
												printf("%d\n",i);
											}
									}
									i++;					
						}
					}
				}
				printf("Soma dos pares : %d\n",soma);
				printf("A multiplicação dos ímpares : %d\n",multi);
}*/








