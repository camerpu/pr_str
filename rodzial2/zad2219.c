#include <stdio.h>
#include <stdlib.h>

int suma()
{
	int liczba;
	printf("Podaj liczbe: ");
	scanf("%i", &liczba);
	static int wszystko = 0;
	wszystko += liczba;
	printf("\nSuma wszystkich elementów: %i\n", wszystko);
	return liczba;
}

int main()
{
	printf("%i\n", suma());
	printf("%i\n", suma());
	printf("%i\n", suma());
	printf("%i\n", suma());
	
}
