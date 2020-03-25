#include <stdio.h>
#include <stdlib.h>

unsigned int ciag(unsigned int n)
{
	if(n<2)
		return 1;
	else
		return ciag(n-1)+ciag(n-1);
}

int main()
{
	unsigned int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Wynik ciagu: %i", ciag(n));
}
