#include <stdio.h>
#include <stdlib.h>

unsigned int alg(unsigned int n, unsigned int m)
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


unsigned int pierwiastek(unsigned int n, unsigned int m)
{
	int maks = 0;
	int i;
	for(i=1; alg(i, m) <=n; i++)
	{
		maks = i;
	}
	return maks;
}

unsigned int suma(unsigned int n, unsigned int m)
{
	int i;
	int suma = 0;
	for(i=0; i<=n; i++)
		suma += pierwiastek(i, m);
	return suma;
}

int main()
{
	int n, m;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Podaj m: ");
	scanf("%i", &m);	
	printf("Wynik sumy: %i", suma(n, m));	
}
