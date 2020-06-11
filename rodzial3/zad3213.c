#include <stdio.h>
#include <stdlib.h>

double funkcja(double (*fun)(int x), int n)
{
	return fun(n);
}

double testowa(int x)
{
	return x*x;
}

int main()
{
	int x = 5;
	printf("testowa: %f\n", testowa(x));
	double (*wsk_funkcja)(int);
	wsk_funkcja = testowa;
	printf("funkcja(testowa): %f", funkcja(*wsk_funkcja, x));
}
