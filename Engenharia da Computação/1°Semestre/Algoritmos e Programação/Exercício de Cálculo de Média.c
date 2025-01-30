#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	float n1, n2, n3, media_pond;
	
	printf("Este programa consiste em calcular a média de qualquer aluno!\n");
	printf("--------------------------------");
	
	printf("\nDigite o valor da sua primeira nota: ");
	scanf("%f", &n1);
	
	printf("\nDigite o valor da sua segunda nota: ");
	scanf("%f", &n2);
	
	printf("\nDigite o valor da sua terceira nota: ");
	scanf("%f", &n3);
	
	media_pond = (n1*4 + n2*4 + n3*2)/10;
	
	if(media_pond >= 5)
	{
		printf("\nO valor final da sua média é %.2f e você foi aprovado!", media_pond);	
	}
	
	else
	{
	printf("\nO valor final da sua média é %.2f e você deverá fazer a recuperação!", media_pond);
	}
}
