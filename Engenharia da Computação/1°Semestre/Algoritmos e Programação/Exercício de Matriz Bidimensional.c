#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int matriz[4][5], i, j;

for(i=0; i<4; i++)

  for(j=0; j<5; j++)
  {
    printf("Digite matriz[%i][%i]= ",i,j);
    scanf("%i",&matriz[i][j]);
    fflush(stdin);
  }
  
for(i=0; i<4; i++)
  {
    for(j=0; j<5; j++)
      printf("%i\t",matriz[i][j]);
      printf("\n");
  }
printf("\n");

system("pause");
return 0;
}

