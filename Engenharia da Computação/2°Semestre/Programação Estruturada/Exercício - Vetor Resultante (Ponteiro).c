#include <stdio.h>
#include <locale.h>

int main()
{
	setlocale(LC_ALL, "portuguese");
	
float A[100], B[100], C[100], *p_a, *p_b, *p_c;
int i, qtd;

	p_a = A;
	p_b = B;

do
{
	printf("Digite a quantidade de elementos: ");
	scanf("%i", &qtd);
	fflush(stdin);
} while(qtd <= 0 || qtd > 100);

	printf("\nLendo os elementos do vetor A: ");
	printf("\n");
	
for(i=0; i<qtd; i++, p_a++)
{
	printf("%i°Elemento: ", i+1);
	scanf("%f", p_a);
	fflush(stdin);
}
	printf("\nLendo os elementos do vetor B: ");
	printf("\n");
	
for(i=0; i<qtd; i++, p_b++)
{
	printf("%i°Elemento: ", i+1);
	scanf("%f", p_b);
	fflush(stdin);
}	
	p_a = A;
	p_b = B;
	p_c = C;

for(i=0; i<qtd; i++)
{
	*p_c++ = *(p_a++) + *(p_b++);
}
	p_c = C;
	
for(i=0; i<qtd; i++, p_c++)
{
	printf("\n%i°Elemento = %.2f", i+1, *p_c);
}
return 0;
}
