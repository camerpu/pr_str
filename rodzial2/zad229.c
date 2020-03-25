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


int pierwiastek(int n, int m)
{
	int maks = 0;
	int i;
	for(i=1; alg(i, m) <=n; i++)
	{
		maks = i;
	}
	return maks;
}

int main()
{
	int n, m;
	printf("Podaj n: ");
	scanf("%i", &n);
	if(n < 0)
		return 1;
	printf("Podaj m: ");
	scanf("%i", &m);
	if(m<2)
		return 2;
	
	printf("Pierwiastek(zaokraglany w dol) stopnia %i z liczby %i to: %i", m, n, pierwiastek(n, m));
	return 0;
}
