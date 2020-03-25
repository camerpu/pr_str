#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int liczby()
{
	static int ile = 0;
	srand(time(NULL));
	static int poprzednia;
	if(ile == 0)
	{
		poprzednia = rand() % 2;	
		ile++;
		return poprzednia;	
	}

	int aktualna = 1-poprzednia*poprzednia;
	poprzednia=aktualna;
	ile++;
	return aktualna;
}

int main()
{
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	printf("%i\n", liczby());
	
}
