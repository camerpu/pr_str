#include <stdio.h>
#include <stdlib.h>

void rozklad(unsigned int n)
{
	int i, j;
	for(i=0; i<=n; i++)
		for(j=0;j<=n; j++)
			if((i+j)*(i+j)==n)
				printf("Rozklad na liczby %i^2+%i^2\n", i, j);
}

int main()
{
	int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	rozklad(n);
}

