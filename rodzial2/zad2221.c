#include <stdio.h>
#include <stdlib.h>

unsigned int ciag(unsigned int n)
{
	if(n==0)
		return 1;
	else
		return 2*(n-1)+5;
}

int main()
{
	unsigned int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Wynik ciagu: %i", ciag(n));
}
