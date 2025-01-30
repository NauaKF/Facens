#include <stdio.h>
#include <ctype.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
int num[5], qtd = 0, i, *p_num;
char resposta = 'S';

	p_num = num; //Inicialização
	
while(toupper(resposta) == 'S' && qtd < 5)
{
	printf("%i°Elemento: ", qtd+1);
	scanf("%i", p_num++);
	fflush(stdin);
	qtd++;
	
	printf("\nDeseja continuar [S/N] ?\n");
	scanf("%c", &resposta);
	fflush(stdin);
	
	printf("\n");
}
	p_num = num; //Posiciona o ponteiro para o endereço inicial
	
for(i=0; i<qtd; i++, p_num++)
{
	printf("%i°Elemento = %i\n", i+1, *p_num);
}
return 0;
}
