#include <stdio.h>
#include <stdlib.h>

int pierwiastek(int n)
{
	int maks = 0;
	int i;
	for(i=1; i*i<=n; i++)
	{
		maks = i;
	}
	return maks;
}

int main()
{
	int liczba;
	printf("Podaj liczbe: ");
	scanf("%i", &liczba);
	if(liczba < 0)
		return 1;
	printf("Pierwiastek(zaokraglany w dol)z tej liczby to: %i", pierwiastek(liczba));
	return 0;
}
