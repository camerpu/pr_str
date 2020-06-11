#include <stdio.h>
#include <stdlib.h>

int* alokuj(unsigned int n)
{
	return malloc(sizeof(int)*n);
}

int main()
{
int rozmiar=4;
int (*wsktab)[rozmiar]=alokuj(rozmiar);
printf("Adres tablicy to %p\n",wsktab);
*wsktab[0]=1; *wsktab[1]=5; *wsktab[2]=8; *wsktab[3]=3;
printf("%p\n",wsktab[0]);
printf("%p\n",wsktab[1]);
printf("%p\n",wsktab[2]);
printf("%p\n",wsktab[3]);
printf("%p\n",&wsktab[0]);
printf("%p\n",&wsktab[1]);
printf("%p\n",&wsktab[2]);
printf("%p\n",&wsktab[3]);
printf("%d\n",*wsktab);
}
