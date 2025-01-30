#include <stdio.h>
#include <stdlib.h>

int main()

{
int num_comp, papel_comprado, folhas;

	scanf("%d %d %d", &num_comp, &papel_comprado, &folhas);
	
	if (num_comp*folhas <= papel_comprado)
		printf("S\n");
		
	else 
		printf("N\n");
		
	system("pause");
	return 0;
}

