#include<stdio.h>
#include<locale.h>
int main()
{
	setlocale(LC_ALL,"portuguese");
	int tam,a,b,maior=0,soma=0;
	printf("Informe quantos n�meros deseja colocar no programa\n");
	scanf("%d",&tam);
	for(a=0; a<tam; a++)
	{
		printf("Informe o %d� valor\n",a+1);
		scanf("%d",&b);
		if(b>maior)
		{
			maior=b;
		}
			
	}
	printf("Maior valor : %d",maior);
	printf("O maior n�mero foi digitado %d vezes\n",soma);
}
