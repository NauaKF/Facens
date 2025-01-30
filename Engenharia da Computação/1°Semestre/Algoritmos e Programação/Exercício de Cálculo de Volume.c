#include <stdio.h>
#include <stdlib.h> 
#include <locale.h>
#include <math.h> //função pow (base, expoente) ---- potência
#define PI 3.14159

int main()
{
	setlocale(LC_ALL, "portuguese");
	
	//const float PI= 3.14159;
	float altura, raio, volume;
	
	printf("Qual a altura do cilindro em questão? ");
	scanf("%f", &altura);
	printf("\nQual o raio do cilindro em questão? ");
	scanf("%f", &raio);
	
	volume = altura * pow(raio, 2) * PI;
	
	printf("\nVolume = %.2f m³\n", volume);
	printf("-------------------------------\n");
	system("pause");
	return 0;	
}


