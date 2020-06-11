#include <stdio.h>
#include <stdlib.h>

int porownaj(char *napis1, char *napis2)
{
	int i;
	for(i =0; (napis1[i] !=0) && (napis2[i] !=0); i++)
	{
		if(napis1[i]<napis2[i])
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

int main()
{
	printf("%i", porownaj("arbiter", "arbuz"));
	printf("%i", porownaj("arbuz", "arbiter"));
	
}
