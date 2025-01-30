#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL, "portuguese");

int A[100], B[100], C[100], i, quantidade;

do
{
printf("Digite a quantidade de elementos do vetor (max.100): ");
scanf("%i", &quantidade);
fflush(stdin);
} while(quantidade < 1 || quantidade > 100);

for(i=0; i<quantidade; i++)
{
printf("Digite o valor de A[%i]: ", i);
scanf("%i", &A[i]);
fflush(stdin);	
}
printf("\n");

for(i=0; i<quantidade; i++)
{
printf("Digite o valor de B[%i]: ", i);
scanf("%i", &B[i]);
fflush(stdin);	
}
printf("\nO vetor resultante C:\n");

for(i=0; i<quantidade; i++)
{
C[i] = A[i] + B[1];
printf("O valor de C[%i] = %i\n", i, C[i]);
}
printf("\n");

system("pause");
return 0;
}
