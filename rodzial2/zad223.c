#include <stdio.h>
#include <stdlib.h>

int alg(int liczba)
{
	int i;
	int maks;
	for(i = 1; i<liczba; i++)
	{
		if(liczba % i == 0)
			maks = i;
	}
	return maks;
}

int main()
{
	int liczba;
	printf("Podaj liczbe n>2 ");
	scanf("%i", &liczba);
	if(liczba<=2)
	{
		printf("liczba musi byc >2 ");
		return 0;
	}
	printf("Maks liczba przez ktora sie dzieli to: %i", alg(liczba));
	
	return 0;
}
