#include <stdio.h>
#include <string.h> 

void minuscula_s(char s[80]);
void inverteString(char s[80], char aux[80]);
char maiuscula(char letra); //Simula toupper

int main()
{
char texto[80], auxiliar[80];

	printf("String: ");
	gets(texto);
	
	minuscula_s(texto);
	inverteString(texto, auxiliar);
	
	printf("Resultado: %s", auxiliar);
	
return 0;
}

void minuscula_s(char s[80])
{
int i, tam;

	tam = strlen(s);
	
for(i=0; i<tam; i++)
	{
	if(s[i] >= 'A' && s[i] <= 'Z')
		{
			s[i]+=32; //+32 --> transformar para minusculo
		}
	}
}

void inverteString(char s[80], char aux[80])
{
int i, j, tam;

	tam = strlen(s);
	
for(i=tam-1, j=0; i>=0; i--, j++)
	{
		if(s[i+1] == ' ' || j == 0)
		{
			aux[j] = maiuscula(s[i]); //maiuscula
		}
		else 
		{
			aux[j] = s[i];
		}
	}	
	aux[j] = '\0';
}

char maiuscula(char letra)
{
if(letra >= 'a' && letra <= 'z')
	{
		return (letra -= 32);
	}
}
