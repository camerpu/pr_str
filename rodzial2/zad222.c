#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
	if(n == 0)
		return 1;
	int suma = 1;
	int i;
	for(i = 1; i<=n; i++)
		suma *= i;
	return suma;
}

int main()
{
	int liczba;
	printf("Podaj liczbe: ");
	scanf("%i", &liczba);
	printf("Silnia tej liczby wynosi: %i", silnia(liczba));
	return 0;
}
