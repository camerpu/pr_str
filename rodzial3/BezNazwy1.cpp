#include <stdio.h>
#include <stdbool.h>

void przepisz_a(int tab1[], int tab2[], int n)
{
	int i;
	for(i = 0; i<n; i++)
	{
		tab2[i] = tab1[i];
	}
}

void przepisz_b(int* tab1[], int* tab2[], int n)
{
	int i;
	int j =0;
	for(i = n; i<=0; i--)
	{
		tab2[j] = tab1[i];
		j++;
	}
}


int main()
{
	int *tab1[3] = {1,2,3};
	int *tab2[3];
	przepisz_b(tab1, tab2, 3);
	int i;
	for(i=0; i<3; i++)
		printf("%i", tab2[i]);
}
