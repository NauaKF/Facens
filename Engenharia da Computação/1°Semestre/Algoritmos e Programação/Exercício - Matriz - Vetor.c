#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define MIN 1045

int main()
{ 
   //const float MIN= 1045;
           //l--i   c--j
	char nomes[3]    [30];
	/*nomes  012345.....29 
	      0  Diogo\0
	      1  Gabriel Santos\0
	      2	 Andressa
	*/		           // 0      1       2
	float salario[3]; //120000  32000    4200 
	int contSalarioMin=0;	
	int i;
	
	for (i=0; i<3; i++)
	{
		printf("\nNome:"); fflush(stdin); gets(nomes[i]);
		printf("\nSalario:"); scanf("%f", &salario[i]);
		if (salario[i] > 3 * MIN)
			contSalarioMin++;
	}

	printf("\nCadastrados");
	for (i=0; i<3; i++)
	{
		printf("\n%s- %.2f", nomes[i], salario[i]);
	}	
	printf("\nQuantos ganham acima de 3 salarios %i\n",contSalarioMin );
	system("pause");
}






