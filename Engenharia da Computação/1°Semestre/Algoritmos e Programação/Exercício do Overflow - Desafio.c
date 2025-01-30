#include <stdio.h>
#include <stdlib.h>

int main()

{
char C;
int N, P, Q;

scanf("%d %d %c %d", &N, &P, &C, &Q);

if (C == '+')
{
    if(P+Q <= N)
    printf("OK\n");
    
	else 
	printf("OVERFLOW\n");
}
else 
{
  if(P*Q <= N)
  printf("OK\n");
  
  else
  printf("OVERFLOW\n");
}

  system("Pause");
  return 0;
}
