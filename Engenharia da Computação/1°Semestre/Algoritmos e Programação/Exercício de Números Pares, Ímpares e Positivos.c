#include <stdio.h>
#include <stdlib.h>

int main()
{
int num;

 printf("\nDigite um numero positivo: ");
 scanf("%i", &num);

if(num>0) //se é positivo
 {
	if(num%2==0)
	 printf("\nO numero %i \x82 par \n", num); //o \x82 condiz a letra é na tabela ask
	 
	 else
	  printf("\nO numero %i \x82 impar \n", num); //o \x82 condiz a letra é na tabela ask
 }
else 
 printf("\nO numero %i nao \x82 positivo \n", num);
	
system("pause");
return 0;
	
}
