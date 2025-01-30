#include <stdio.h>
#include <stdlib.h>
#include <string.h> //strlen()

void mostraInvertido(char s[80]); //Protótipo

int main()
{	
char texto[80];
	
	printf("String: ");
	gets(texto);
	printf("Resultado: ");
	
	mostraInvertido(texto); //Chamada
	
return 0;	
}

void mostraInvertido(char s[80]) //Definição
{
int i, tam;
	
	tam = strlen(s); 
	
for(i=tam-1; i>= 0; i--)
{
	printf("%c", s[i]);
}
}
