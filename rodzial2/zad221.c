#include <stdio.h>
#include <stdlib.h>

int wartosc_bezwzgledna(int x)
{
	if(x<0)
		return -x;
	else
		return x;
}

int main()
{
	int liczba;
	printf("Podaj liczbe: ");
	scanf("%i", &liczba);
	printf("Wartosc bezwgledna wynosi: %i", wartosc_bezwzgledna(liczba));
	return 0;
}
