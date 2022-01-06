#include<stdio.h>
main(){

float A ,B,C,media;
printf("Digite a primeira nota\n");
scanf("%f", &A);
printf("Digite a segunda nota\n");
scanf("%f",&B);
printf("Digite a terceira nota\n");
scanf("%f", &C);
media= (A+B+C)/3;

if (media<7)

printf("%.2f: O aluno esta reprovado", media);

else
{
if 
(media>=7)
printf("%.2f: O aluno esta aprovado", media);
}
}
