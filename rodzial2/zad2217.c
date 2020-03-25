#include <stdio.h>
#include <stdlib.h>

void ile()
{
	static int ilosc = 0;
	ilosc++;
	printf("%i\n", ilosc);
}

int main()
{
	ile();
	ile();
}
