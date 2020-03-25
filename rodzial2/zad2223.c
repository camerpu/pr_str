#include <stdio.h>
#include <stdlib.h>

unsigned int fib(unsigned int n)
{
	if(n<3)
		return 1;
	
	return fib(n-2)+fib(n-1);
}

int main()
{
	unsigned int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Wynik ciagu: %i", fib(n));
}
