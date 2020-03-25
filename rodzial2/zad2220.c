#include <stdio.h>
#include <stdlib.h>

unsigned int silnia(unsigned int n)
{
	if(n<=1)
		return 1;
	else
		return silnia(n-1)*n;
}

int main()
{
	int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Silnia z %i wynosi %i", n, silnia(n));
}
