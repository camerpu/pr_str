#include <stdio.h>
#include <stdlib.h>

unsigned int ciag(unsigned int n)
{
	if(n==0 || n==1)
		return 1;
	else
		return ciag(n-1)+2*ciag(n-2)+3;
}

int main()
{
	unsigned int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Wynik ciagu: %i", ciag(n));
}
