#include <stdio.h>
#include <stdlib.h>

unsigned int pierwiastek(unsigned int n)
{
	int maks = 0;
	int i;
	for(i=1; i*i<=n; i++)
	{
		maks = i;
	}
	return maks;
}

unsigned int suma(int n)
{
	int i;
	int suma = 0;
	for(i=0; i<=n; i++)
		suma += pierwiastek(i);
	return suma;
}

int main()
{
	int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Wynik sumy: %i", suma(n));	
}
