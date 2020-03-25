#include <stdio.h>
#include <stdlib.h>

unsigned int NWD(unsigned int n, unsigned int m)
{
	if(n == m)
		return m;
	if(n > m)
		return NWD(n%m, m);
	else
		return NWD(m%n, n);
}

int main()
{
	int n, m;
	printf("Podaj 2 liczby: ");
	scanf("%i%i", &n, &m);
	printf("Ich NWD wynosi: %i", NWD(n, m));
}
