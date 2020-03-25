#include <stdio.h>
#include <stdlib.h>

unsigned int fun(unsigned int n, unsigned int m)
{
	if(m == 0)
		return n;
	else
	{
		int kopia = m;
		m = n;
		n = kopia;
		return n-m+fun(n-1, m)+fun(n, m-1);
	}
}

int main()
{
	unsigned int n, m;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Podaj m: ");
	scanf("%i", &m);
	printf("Wynik: %i", fun(n, m));
}
