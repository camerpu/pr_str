#include <stdio.h>
#include <stdlib.h>

int *mniejsza(int *liczba1, int *liczba2)
{
	if(*liczba1 < *liczba2)
		return liczba1;
	else
		return liczba2;
}

int main()
{
	int a, b;
	a = 5;
	b = 8;
	int *liczba1 = &a;
	int *liczba2 = &b;
	printf("Mniejsza z tych liczb to: %d, adres: %p", *(mniejsza(liczba1, liczba2)), mniejsza(liczba1, liczba2));
}
