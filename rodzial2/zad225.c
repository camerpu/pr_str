#include <stdio.h>
#include <stdlib.h>

int wartosc_bezwzgledna(int x)
{
	if(x<0)
		return -x;
	else
		return x;
}

float kwadrat(int x)
{
	int x_kopia = wartosc_bezwzgledna(x);
	if(x_kopia == 0)
		return 1;
	else
	{
		float suma = 2;
		int i;
		for(i=1; i<x_kopia; i++)
			suma *= 2;
			
		if(x < 0)
			return 1/suma;
		else
			return suma;
	}
}

int main()
{
	int liczba;
	printf("Podaj liczbe: ");
	scanf("%i", &liczba);
	printf("2^%i wynosi %f", liczba, kwadrat(liczba));
	return 0;
}

