#include <stdio.h>
#include <stdlib.h>

int kwadrat(int x)
{
	if(x == 0)
		return 1;
	else
	{
		int suma = 2;
		int i;
		for(i=1; i<x; i++)
			suma *= 2;
		return suma;
	}
}

int main()
{
	int liczba;
	printf("Podaj nieujemna liczbe: ");
	scanf("%i", &liczba);
	if(liczba < 0)
	{
		printf("liczba nie moze byc ujemna");
		return 0;
	}
	printf("2^%i wynosi %i", liczba, kwadrat(liczba));
	return 0;
}
