#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
#include <math.h>

int main()
{
	int m;
	
	setlocale(LC_ALL, "portuguese");
	
	printf("Escreva o código da doença diagnosticada: \n");
	scanf("%i", &m);
	
	switch(m)
	{
		case 1: case 2: printf("Você possui virose e necessita de descanso!\n");
			break;
			
		case 3: case 5: printf("Você possui dores de cabeça e necessita de analgésico!\n");
			break;
			
		case 4: printf("Você possui uma gripe e necessita de vitamina C!\n");
			break;
		
		case 6: printf("A descrição não foi definida, é necessário se fazer exames!\n");
			break;
		
		default: printf("O código é inválido!\n");
    }

system("pause");
return 0;
}
	
