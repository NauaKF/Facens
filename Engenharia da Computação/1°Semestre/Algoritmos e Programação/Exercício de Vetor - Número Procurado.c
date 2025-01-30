#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int numero[10], i, procurado=0, cont=0;	

for(i=0; i<10; i++)
{
printf("Digite o número da posição %i: ", i);
scanf("%i", &numero[i]);
fflush(stdin);
}
do
{
printf("\nDigite o número que deseja procurar: ");
scanf("%i", &procurado);
fflush(stdin);

for(i=0; i<10; i++)
	if(procurado == numero[i])
		cont++;
	if(cont == 0)
		printf("\nO número não foi encontrado...");
		
Sleep(1000);
system("cls");

} while(cont == 0);

printf("\nO número %i foi encontrado %i vez(es)!\n\n", procurado, cont);

system("pause");
return 0;
}
