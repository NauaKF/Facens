#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> //toupper() transforma em maiúsculo, tolower() transforma em minúsculo
#include <string.h> //strlen()-tamanho da string,strcmp()-compara strings, strcpy-copiar

int main()
{
	char senha[8], senhaCrip[8];
	int tam;
	/* senha  0  1  2  3  4  5 
	        'p''e' 'i''x''e''\0' */
	        
	puts("Senha:");
	scanf("%s", senha );  //finaliza com o espaço ou o enter
	
	//tam = strlen(senha);
	printf("Tamanho da senha %i\n",  strlen(senha) );
	
	int i;
	for (i=0; i< strlen(senha); i++ )
	{
		if (senha[i] == 'a' || senha[i]== 'A' )
		{
			senhaCrip[i]= 'z';
		}
		else
		{
			senhaCrip[i]= senha[i] + 2;
		 	//           'p'+1  === 112+1--> 'q'  senhaCrip[0]= 'q';
		}
	}
	/*senhaCrip[0]= senha[0]+1;
	senhaCrip[1]= senha[1]+1;
	senhaCrip[2]= senha[2]+1;*/
	
	puts("Senha Criptografa:");
	puts(senhaCrip);
	
	system("pause");
}






