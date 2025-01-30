#include <stdio.h>
#include <string.h> 

void inverteString(char s[80], char aux[80]);

int main()
{
char texto[80], auxiliar [80];

	printf("String: ");
	gets(texto);
	
	inverteString(texto, auxiliar);
	
	printf("Resultado: %s", auxiliar);
	
return 0;
}

void inverteString(char s[80], char aux[80])
{
int i, j, tam;

	tam = strlen(s);

for(i=tam-1, j=0; i>=0; i--, j++)	
	{
		aux[j] = s[i];
	}
	aux[j] = '\0';
}
