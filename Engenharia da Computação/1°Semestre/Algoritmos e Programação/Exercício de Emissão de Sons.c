#include <stdio.h>
#include <stdlib.h>

int main()
{
char tecla;

do
{
	tecla = getche(); //getch (não mostra a tecla digitada)
	if (tecla == 'A' || tecla == 'a')
	Beep(261,100);

 	if (tecla == 'S' || tecla == 's')
	Beep(293,100);
	
 	if (tecla == 'D' || tecla == 'd')
	Beep(329,100);
	
 	if (tecla == 'F' || tecla == 'f')
	Beep(349,100);
	
 	if (tecla == 'G' || tecla == 'g')
	Beep(392,100);
		
 	if (tecla == 'H' || tecla == 'h')
	Beep(440,100);
	
 	if (tecla == 'J' || tecla == 'j')
	Beep(493,100);

} while(tecla != 27);
	
	
system("pause");
return 0;	
}
