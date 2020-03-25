#include <stdio.h>
#include <stdlib.h>

int alg(int n, int m)
{
	if(m==0)
		return 1;
		
	int i;
	int suma = n;
	for(i=1; i<m; i++)
	{
		suma*=n;
	}
	return suma;
}

int main()
{
	int n, m;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Podaj m: ");
	scanf("%i", &m);
	if(n<0 || m<0)
		return 1;
	if(n==0 && m==0)
		return 2;
	printf("%i^%i=%i", n, m, alg(n,m));
	return 0;
}
