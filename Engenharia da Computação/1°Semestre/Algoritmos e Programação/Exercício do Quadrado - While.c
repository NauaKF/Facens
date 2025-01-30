#include <stdio.h>
#include <stdlib.h>
#include <ctype.h> //biblioteca do Toupper
#include <math.h> //biblioteca do Pow
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
	
char op = 's';
float lado, p, a;

while(toupper(op) == 'S')
{
	system("cls"); //limpeza de tela
	printf("Digite qualquer lado de um quadrado: ");
	scanf("%f", &lado);
	fflush(stdin);
	a = pow(lado,2);
	p = 4*lado;
	printf("\nÁrea = %.2f\nPerímetro = %.2f", a, p);
	printf("\n\nDeseja continuar? [S]im ou [N]ão: ");
	scanf("%c", &op);
	fflush(stdin);
}
system("pause");
return 0;	
}
