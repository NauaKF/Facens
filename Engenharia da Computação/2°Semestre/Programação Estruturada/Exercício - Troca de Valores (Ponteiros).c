#include <stdio.h>

main()
{
int a, b;

	a = 10, b = 20;
	troca(&a, &b); //Aqui o ponteiro foi inicializado
	printf("A = %i\nB = %i", a, b);
	
return 0;
}

void troca(int *x, int *y)
{
int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}
