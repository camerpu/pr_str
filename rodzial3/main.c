#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float srednia(int tab[], int n)
{
	float suma = 0.0;
	int i;
	for(i = 0; i<n; i++)
	{
		suma += 1.0/tab[i];
	}
	return n/suma;
}

int main(int argc, char *argv[]) {
	int tab[6] = {1,2,3,4,5,6};
	printf("%f", srednia(tab, 6));
}
