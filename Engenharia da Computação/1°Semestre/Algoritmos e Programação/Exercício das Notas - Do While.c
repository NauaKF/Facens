#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

char op;
float n1,n2;

do 
{  
	printf("Este programa, calcula a média de notas dos alunos!\n\n");  
	system("cls");   //limpa a tela
do
{
	printf("Digite a nota 1 (0~10): ");
	scanf("%f", &n1);
	fflush(stdin);
	
	if (n1 < 0 || n1 > 10)
		printf("\nValor inválido!\n");
} while (n1 < 0 || n1 > 10);	

do
{
	printf("Digite a nota 2 (0~10): ");
	scanf("%f", &n2);
	fflush(stdin);
	
	if (n2 < 0 || n2 > 10)
		printf("\nValor inválido!\n\n");
} while (n2 < 0 || n2 > 10);	
	
	printf("Média final = %.2f\n", (n1+n2)/2);
	printf("\nDeseja continuar? [S]im ou [N]ão: ");
	scanf("%c", &op);
	fflush(stdin);
	
} while (op == 's' || op == 'S');

system("pause");
return 0;
}
