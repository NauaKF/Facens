#include <stdio.h>
#include <stdlib.h>

int main()
{
	unsigned char c; //números de 0 até 255
	//signed = números de -128 até +127
	
	for (c= 0; c<2; ++c)
	{
	  printf("%c\n\n\n\n", c, c); 	
	}
	
  system("pause");
  return 0;	
}

