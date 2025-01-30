#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
setlocale(LC_ALL, "portuguese");
char letra, maiuscula;

printf("\nDigite uma letra qualquer: ");
scanf("%c", &letra);
fflush(stdin);

maiuscula = toupper(letra); //transformar a letra digitada

switch(letra) 
{
 case 'a': printf("\nA letra %c é uma vogal!\n\n", maiuscula);          
           break;
 case 'e': printf("\nA letra %c é uma vogal!\n\n", maiuscula);          
           break;          
 case 'i': printf("\nA letra %c é uma vogal!\n\n", maiuscula);          
           break;
 case 'o': printf("\nA letra %c é uma vogal!\n\n", maiuscula);          
           break;
 case 'u': printf("\nA letra %c é uma vogal!\n\n", maiuscula);      
           break;
		   
 default:  printf("\nA letra %c é uma consoante!\n\n", maiuscula);          
           break;  
} //switch

system("pause");
return 0;

} //main
