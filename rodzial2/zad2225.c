#include <stdio.h>
#include <stdlib.h>

unsigned int ciag(unsigned int n)
{
	if(n<2)
		return 1;
	else
		if(n%2==0)
			return ciag(n-1)+n;
		else
			return ciag(n-1)*n;
}

int main()
{
	unsigned int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Wynik ciagu: %i", ciag(n));
}
