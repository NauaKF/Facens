#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int i,num,cont=0; //cont=0 ---> Variável contadora inicializada em 0.

for(i=0 ; i<5 ; i++)
{
	printf("\nDigite o %i número: ", i+1);
	scanf("%i", &num);
	fflush(stdin);
	
	if(num%2==0)
		cont++; //somar 1 na variável contadora
}
	printf("\nA quantidade de números pares = %i\n", cont);

system("pause");
return 0;
}
