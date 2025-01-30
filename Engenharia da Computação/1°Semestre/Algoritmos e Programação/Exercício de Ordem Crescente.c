#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale(LC_ALL,"portuguese");

float num1,num2;	

printf("Digite o primeiro número: ");
scanf("%f", &num1);
printf("Digite o segundo número: ");
scanf("%f", &num2);
	
if(num1>num2)
	printf("A ordem crescente = %.2f e %.2f\n\n", num1, num2);
		
	if(num1<num2)
		printf("A ordem crescente = %.2f e %.2f\n\n", num2, num1);

system("pause");
return 0;
}
