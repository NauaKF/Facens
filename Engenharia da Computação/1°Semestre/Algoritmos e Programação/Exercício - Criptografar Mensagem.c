#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h> //toupper() transforma em maiúsculo, tolower() transforma em minúsculo
#include <string.h> //strlen()-tamanho da string,strcmp()-compara strings, strcpy-copiar

int main()
{
	char mensagem[30], mensagemCrip[30], mensagemDesc[30];
	        
	printf("Mensagem:");
	gets(mensagem);//finaliza com o enter
	
	printf("Tamanho da senha %i\n",  strlen(mensagem) );
	
	int i;
	for (i=0; i< strlen(mensagem); i++ )
	{
		if (mensagem[i]== 'e')
			mensagemCrip[i]= '@';
		else 
			mensagemCrip[i]= mensagem[i]+ 3;		
		
		//mensagemCrip[i]= toupper(mensagemCrip[i]);	
	}
	
	puts("Mensagem Criptografa:");
	puts(mensagemCrip);
	
	//descriptografar
	for (i=0; i< strlen(mensagemCrip); i++ )
	{
		if (mensagemCrip[i]== '@')
			mensagemDesc[i]= 'e';
		else 
			mensagemDesc[i]= mensagemCrip[i] - 3;		
		
		//mensagemCrip[i]= tolower(mensagemCrip[i]);	
	}
	
	printf("\nMensagem decodificada %s", mensagemDesc);
	if (  strcmp(mensagem, mensagemDesc) == 0   )
		printf("\nMensagem iguais- original e descriptada\n");

	system("pause");
}






