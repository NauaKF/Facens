#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	float f, c;
	int x;
	
	for (x = 1; x<=5; x++)
	{
	printf("Digite a temperatura local em graus Fahrenheit: \n");
	scanf("%f", &f);
	
	c = (f-32) / 1.8;
	
	if (c < 15)
	{
		printf("\nO dia está com %.2f graus Celsius e está frio!\n",c);
    	printf("---------------------------------------------------------\n");
    }
	else if (c >= 15 && c <=30)
	{
		printf("\nO dia está com %.2f graus Celsius e está normal!\n",c);
		printf("---------------------------------------------------------\n");	
	}
	else
	{
		printf("\nO dia está com %.2f graus Celsius e está quente!\n",c);
		printf("---------------------------------------------------------\n");
	}
	}
	system("pause");
	return 0;
}
