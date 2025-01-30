#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");
system("color 70");

int i, dificuldade, num, vetor[5], acertos=0;

	srand(time(NULL));

	printf("JOGO DA MEMÓRIA\nADIVINHE OS VALORES:");
	printf("\n\nSE ESTIVER PREPARADO, PRESSIONE UMA TECLA!\n\n");	
	getch();

	system("cls");
	printf("============================\n");
	printf("   NÍVEIS DE DIFICULDADE\n");
	printf("============================");
	printf("\n[1] FÁCIL\n[2] MÉDIO\n[3] DIFÍCIL\n\n");
	scanf("%i", &dificuldade);
	fflush(stdin);
	
if(dificuldade == 1)
{
system("cls");
printf("=======================================================\n");
printf("  PREPARE-SE, OS NÚMEROS IRÃO APARECER EM 5 SEGUNDOS!\n");
printf("=======================================================\n");
Sleep(5000);
}
for(i=0; i<5; i++)
	{
	vetor[i] = 1+(rand()%10);
	printf("  %i\t", vetor[i]);
	Sleep(100);
	}
	Sleep(1000);
	system("cls");

	printf("===================================\n");
	printf("  QUAIS NÚMEROS ESTAVAM NA TELA?\n");
	printf("===================================\n");
for (i=0; i<5; i++)
	{
	scanf("%i", &num);
		if(num == vetor[i])
		acertos++;
	}
	printf("    \nTOTAL DE ACERTOS = %i", acertos);
	getch();
	return 0;	
	}
