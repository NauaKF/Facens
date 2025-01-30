#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
int ano_atual, mes_atual, dia_atual, ano_nasc, mes_nasc, dia_nasc, meses, anos, calculo;

setlocale(LC_ALL, "portuguese");

	printf("\nEste é um programa que te ajuda a calcular a sua idade e os seus meses de vida!");
	printf("\n---------------------------------------");
	
	printf("\nDigite o dia de seu nascimento: ");
	scanf("%d", &dia_nasc);
	printf("\nDigite o mês de seu nascimento: ");
	scanf("%d", &mes_nasc);
	printf("\nDigite o ano de seu nascimento: ");
	scanf("%d", &ano_nasc);
	printf("---------------------------------------");
	
	printf("\nDigite o dia de hoje: ");
	scanf("%d", &dia_atual);
	printf("\nDigite o mês atual: ");
	scanf("%d", &mes_atual);
	printf("\nDigite o ano atual: ");
	scanf("%d", &ano_atual);
	
	calculo = ano_atual*365 + mes_atual*30 + dia_atual - 365*ano_nasc - mes_nasc*30 - dia_nasc;
	
	anos = calculo/365;
	calculo = calculo%365;
	meses = calculo/30;
	calculo = calculo%30;
	
	printf("---------------------------------------");
	printf ("\nVocê tem %d anos e %d meses de idade!", anos, meses);
	
	return 0;
}
