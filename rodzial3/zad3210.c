#include <stdio.h>
#include <stdlib.h>

double *rezerwuj()
{
	return malloc(sizeof(double));
}

int main()
{
	double *wsk = rezerwuj();
	printf("adres: %p\n", wsk);
	printf("wartosc: %f\n", *wsk);	
	*wsk = 5;
	printf("adres: %p\n", wsk);
	printf("wartosc: %f\n", *wsk);		
}
