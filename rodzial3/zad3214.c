#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool sprawdz(int (*funkcja1)(int x), int (*funkcja2)(int x), unsigned int n)
{
	int i;
	for(i = 0; i<=n; i++)
	{
		if(funkcja1(i) != funkcja2(i))
			return false;
	}
	return true;
}

int funkcja1(int x)
{
	return x;
}

int funkcja2(int x)
{
	return x*x;
}

int main()
{
	int (*fun1)(int);
	int (*fun2)(int);
	
	fun1 = funkcja1;
	fun2 = funkcja2;
	
	printf("wynik: %i", sprawdz(*fun1, *fun2, 1));
	
}
