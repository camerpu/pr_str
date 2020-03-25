#include <stdio.h>
#include <stdlib.h>

int alg(int n, int m)
{
	if(m==0)
		return 1;
		
	int i;
	int suma = n;
	for(i=1; i<m; i++)
	{
		suma*=n;
	}
	return suma;
}

void rozklad(unsigned int n, unsigned int m)
{
	int i, j;
	for(i=0; i<=n; i++)
		for(j=0; j<=n; j++)
			if(alg((i+j), m) == n)
				printf("(%i+%i)^%i = %i\n", i, j, m, n);
}

int main()
{
	int n, m;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Podaj m: ");
	scanf("%i", &m);	
	rozklad(n, m);
}

