#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");	
	srand(time(NULL));
	
unsigned char matriz[10][10];  //Tabela ASCII.
int l, c;                        
int px, py, controle = 1;                  //Posição em X e Y
int pl, pc;                 //Posição Escolhida

do
{
for (l = 0; l < 10; l++)
{
for (c = 0; c < 10; c++)	
	{
	matriz[l][c] = 1;
	printf("  %c", matriz[l][c]);
	}
	printf("\n");         //Ao final da linha, pula para a próxima.
}
	px = rand() % 10;    //0 a 9 ---> Por causa do Índice.
	py = rand() % 10;
	
	printf("\nDIGITE A COORDENADA (0~9) QUE ESTÁ WOLLY! EX: 1 2\n");
	scanf("%i %i", &pl, &pc);
	fflush(stdin);
	
if (px == pl && py == pc)
	{
	system("cls");
	matriz[px][py] = 2;
	printf("VOCÊ ACERTOU, PARABÉNS!\n\n");	
	for (l = 0; l < 10; l++)
	{
	for (c = 0; c < 10; c++)	
	{
	printf("  %c", matriz[l][c]);
		}	
	printf("\n");         //Ao final da linha, pula para a próxima.
	}
	getch();
	controle = 0;
	}
else 
{
printf("\nERROU, TENTE NOVAMENTE!\n\n");
getch();
system("cls");
}

} while (controle == 1);

getch();		
return 0;	
	}
