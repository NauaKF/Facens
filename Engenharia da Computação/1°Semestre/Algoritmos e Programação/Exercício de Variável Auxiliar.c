#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int i;
float num,menor; 	//Menor = Variável Auxiliar e nunca se inicializa com valores.

for(i=0 ; i<5 ; i++)
{
	printf("\nDigite o %i número: ", i+1);
	scanf("%f", &num);
	fflush(stdin);
	if(i==0 || num<menor) 	//i=0 ---> Significa que é a 1ªVez do loop.	
	menor = num;
}
printf("\nO menor valor digitado = %.2f\n\n", menor);

system("pause");
return 0;	
}
