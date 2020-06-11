#include <stdio.h>
#include <stdlib.h>

int *rezerwuj()
{
	return malloc(sizeof(int));
}

int main()
{
	int *wsk = rezerwuj();
	printf("adres: %p\n", wsk);
	printf("wartosc: %i\n", *wsk);	
	*wsk = 5;
	printf("adres: %p\n", wsk);
	printf("wartosc: %i\n", *wsk);		
}
