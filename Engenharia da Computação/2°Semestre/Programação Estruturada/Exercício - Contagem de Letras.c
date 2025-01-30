#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //funçao strlen()
#include <ctype.h>   //função toupper()

main()
{
char str[80], letra;
int tam, quantidade, i;

printf("Digite a frase: ");
gets(str);
fflush(stdin);

tam = strlen(str);

for(letra='a'; letra<='z'; letra++)
  {	
    quantidade = 0;
    
	  for(i=0; i<tam; i++)
	    if(tolower(str[i]) == letra)
	      quantidade++;
	      
	if(quantidade != 0)
	  printf("\nA letra %c = %i vez(es)\n", letra, quantidade);
  } //for
printf("\n\n");

system("pause");
return 0;
} //main
