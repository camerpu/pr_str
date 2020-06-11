#include <stdio.h>
#include <stdlib.h>

int *rezerwuj(int n)
{
	return malloc(n * sizeof(int));
}

int main()
{
	printf("Rozmiar bloku zmiennych to: %d\n", 10*sizeof(int));
}
