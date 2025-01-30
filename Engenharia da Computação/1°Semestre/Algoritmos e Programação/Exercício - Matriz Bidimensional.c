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
	*/		            
	float salario[3] [4]; //linha é funcionário e a coluna cada mês de salário
			/*   		     	meses
			 salario         0     1      2    3
              Fun   0      3200   4000  2300  30000
			    	1      4000   3200  5000  12000
				    2      3000    500  7000  50000
			*/
	int contSalarioMin=0;	
	int i, j;
	
	for (i=0; i<3; i++) //i funcionário
	{
		printf("\nCadastro do funcionario: %d", i+1);
		printf("\nNome:"); fflush(stdin); gets(nomes[i]);
		
		for (j=0; j<4; j++) //j coluna de salário - mês
		{
				printf("\nSalario:"); scanf("%f", &salario[i][j]);
				if (salario[i][j] > 3 * MIN)
					contSalarioMin++;
		}
	}

	printf("\nCadastrados");
	for (i=0; i<3; i++)
	{
		printf("\n%s- %.2f- %.2f - %.2f %.2f", nomes[i], salario[i][0], salario[i][1], salario[i][2], salario[i][3]);
	}	
	printf("\nQuantos ganham acima de 3 salarios %i\n",contSalarioMin );
	system("pause");
}






