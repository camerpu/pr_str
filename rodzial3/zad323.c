#include <stdio.h>
#include <stdlib.h>

void zmien(int *liczba1, int *liczba2)
{
	int x = *liczba1;
	*liczba1 = *liczba2;
	*liczba2 = x;
}

int main()
{
	int a, b;
	a = 5;
	b = 8;
	int *wsk1 = &a;
	int *wsk2 = &b;
	printf("Wartosc a: %i\n", a);
	printf("Wartosc b: %i\n", b);
	zmien(wsk1, wsk2);
	printf("Wartosc a po zmianie: %i\n", a);
	printf("Wartosc b po zmianie: %i\n", b);
}
