#include <stdio.h>
#include <stdlib.h>

int wartosc_bezwzgledna(int x)
{
	if(x<0)
		return -x;
	else
		return x;
}

float alg(int n, int m)
{
	if(m==0)
		return 1;
		
	int kopia_m = wartosc_bezwzgledna(m);
	
	int i;
	float suma = n;
	for(i=1; i<kopia_m; i++)
	{
		suma*=n;
	}
	return (m<0) ? 1/suma : suma;
}

int main()
{
	int n, m;
	printf("Podaj n: ");
	scanf("%i", &n);
	printf("Podaj m: ");
	scanf("%i", &m);
	if(n==0 && m==0)
		return 2;	
	printf("%i^%i=%f", n, m, alg(n,m));
}

