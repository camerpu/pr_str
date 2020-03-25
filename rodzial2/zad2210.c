#include <stdio.h>
#include <stdlib.h>

unsigned int NWD(unsigned int p, unsigned int d)
{
	while(p != d)
	{
		if(p>d)
			p=p-d;
		else
			d=d-p;
	}
	return p;
}

unsigned int suma(unsigned int n)
{
	int i, sum=0;
	for(i=1; i<n; i++)
		if(NWD(i, n) == 1)
			sum += i;
	return sum;
}

int main()
{
	int n;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Wynik sumy: %i", suma(n));
}
