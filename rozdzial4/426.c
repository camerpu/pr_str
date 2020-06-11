#include <stdio.h>
#include <stdlib.h>

void wypisz(int tab[], unsigned int n)
{
	printf("\n");
	int i;
	for(i = 0; i<n; i++)
		printf("%3i", tab[i]);
	printf("\n");		
}

void zamien_a(int *tab1, int *tab2, unsigned int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		tab2[i] = tab1[i];
	}
}

void zamien_b(int *tab1, int *tab2, unsigned int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		tab2[i] = tab1[n-1-i];
	}
}


int main()
{
	int tab[5] = {5, 3, 8, 12, 10};
	int tab2[5] = {20, 25, 27, 28, 30};
	wypisz(tab, 5);
	wypisz(tab2, 5);
	
	zamien_b(tab, tab2, 5);
	
	wypisz(tab, 5);
	wypisz(tab2, 5);	
}
