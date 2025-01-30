#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>  
#include <ctype.h>  

int main()
{
setlocale(LC_ALL, "portuguese");

char senha1[7], senha2[7];
int i, cont=0, cont1=0;  

printf("Digite sua senha: ");
gets(senha1);
fflush(stdin);
system("cls");

printf("Digite a senha novamente para confirmar: ");
gets(senha2);
fflush(stdin);
system("cls");

for(i=0; i<6; i++)
  if(senha1[i] == senha2[i])
    {
      cont++;  
      
  if(i<3)
      cont1++;
    }
    
if(cont==6)  
{
  printf("Verificando.");
  Sleep(500);
  system("cls");
  printf("Verificando..");
  Sleep(500);
  system("cls");
  printf("Verificando...");
  Sleep(500);
  system("cls");
   printf("Verificando.");
  Sleep(500);
  system("cls");
  printf("Verificando..");
  Sleep(500);
  system("cls");
  printf("Verificando...");
  Sleep(500);
  system("cls");
  printf("Concluído! Sua senha é válida!\n\n");
}

else if(cont1==3) 
{ 
  printf("Verificando.");
  Sleep(500);
  system("cls");
  printf("Verificando..");
  Sleep(500);
  system("cls");
  printf("Verificando...");
  Sleep(500);
  system("cls");
   printf("Verificando.");
  Sleep(500);
  system("cls");
  printf("Verificando..");
  Sleep(500);
  system("cls");
  printf("Verificando...");
  Sleep(500);
  system("cls");
  printf("Senha parcialmente incorreta, tente novamente!\n\n");
}

else
{
  printf("Verificando.");
  Sleep(500);
  system("cls");
  printf("Verificando..");
  Sleep(500);
  system("cls");
  printf("Verificando...");
  Sleep(500);
  system("cls");
   printf("Verificando.");
  Sleep(500);
  system("cls");
  printf("Verificando..");
  Sleep(500);
  system("cls");
  printf("Verificando...");
  Sleep(500);
  system("cls");
  printf("Senha inválida, tente novamente!\n\n");
}

system("pause");
return 0;
}
