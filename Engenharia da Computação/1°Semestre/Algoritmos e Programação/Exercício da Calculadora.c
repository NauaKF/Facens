#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
setlocale(LC_ALL, "Portuguese");

float n1, n2;
char operacao;

printf("Esta é uma calculadora que possui as funções de soma(+), subtração (-), divisão (/), multiplicação (*) e potenciação (^) com até duas casas decimais!\n\n");

printf("Primeiramente, digite a função matemática desejada (+, -, /, *, ^): ");
scanf("%c", &operacao);
fflush(stdin);

printf("\nAgora, digite o primeiro número: ");
scanf("%f", &n1);

printf("\nAgora, digite o segundo número: ");
scanf ("%f", &n2);

switch(operacao)
{
	case '+': printf("\nResultado é igual a: %.2f!\n\n", n1+n2);
	         break;
	case '-': printf("\nResultado é igual a: %.2f!\n\n", n1-n2);
	         break;
	case '*': printf("\nResultado é igual a: %.2f!\n\n", n1*n2);
	         break;  
	case '/': if(n2!=0)
	         printf("\nResultado é igual a: %.2f!\n\n", n1/n2);
	         else
	         printf("\nOpção Inválida, não há número divisível por 0, tente novamente!\n\n");
	         break;
	case '^': printf("\nResultado é igual a: %.2f!\n\n", pow(n1,n2));
	         break;
	         
	default: printf("\nOperação Inválida, tente novamente!\n");
	         break;
}
 
system("pause");
return 0;
} 
