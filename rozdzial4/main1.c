#include <stdio.h>
#include <stdlib.h>

void funkcja_a(int tab[], unsigned int n)
{
	int i;
	for(i = 0; i<n; i++)
		tab[i] = 0;
}

void funkcja_b(int *tab, unsigned int n)
{
	int i;
	for(i = 0; i<n; i++)
		tab[i] = i;
}

void funkcja_c(int tab[], unsigned int n)
{
	int i;
	for(i = 0; i<n; i++)
		tab[i] *= 2;
}

float funkcja_d(const int tab[], unsigned int n)
{
	int i, s=0;
	for(i = 0; i<n; i++)
		s += tab[i];
	return s/n;
}

void wypisz(int tab[], unsigned int n)
{
	printf("\n");
	int i;
	for(i = 0; i<n; i++)
		printf("%3i", tab[i]);
	printf("\n");		
}


int main()
{
	int tab[10];
	int *tab2 = malloc(20*sizeof(int));
	wypisz(tab, 10);
	
	funkcja_a(tab, 10);
	wypisz(tab, 10);
	
	funkcja_b(tab, 10);
	wypisz(tab, 10);	
	
	funkcja_c(tab, 10);
	wypisz(tab, 10);	
	
		
}
