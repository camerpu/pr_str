#include <stdio.h>
#include <stdlib.h>

void wypisz(double *tab, unsigned int n)
{
	printf("\n");
	int i;
	for(i = 0; i<n; i++)
		printf("  %5lf  ", tab[i]);
	printf("\n");		
}

void przepisz_a(unsigned int n, int *tab1, int *tab2, double *tab3)
{
	int i;
	for(i=0; i<n; i++)
	{
		tab3[i] = (double)tab1[i];	
	}	
	for(i=n; i<n*2; i++)
	{
		tab3[i] = (double)tab2[i-n];	
	}	
}

void przepisz_b(unsigned int n, int *tab1, int *tab2, double *tab3)
{
	int i;
	int j = 0;
	int k = 0;
	for(i=0; i<n*2; i++)
	{
		if(i % 2 == 0)
		{
			tab3[i] = (double)tab2[j];
			j++;
		}
		else
		{
			tab3[i] = (double)tab1[k];
			k++;			
		}
	}	
}

int main()
{
	int tab1[5] = {1,2,3,4,5};
	int tab2[5] = {6,7,8,9,10};
	double tab3[10];
	przepisz_b(5, tab1, tab2, tab3);
	wypisz(tab3, 10);
}
