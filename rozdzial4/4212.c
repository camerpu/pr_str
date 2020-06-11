#include <stdio.h>
#include <stdlib.h>

void wypisz(int *tab, int n)
{
	printf("\n");
	int i;
	for(int i = 0; i<n; i++)
	{
		printf("%3i", tab[i]);
	}
	printf("\n");	
}

void odwroc(int *tab, int n)
{
	int i;
	for(i=0; i<n/2; i++)
	{
		int pom = tab[i];
		printf("\npom: %i", pom);
		tab[i] = tab[n-i-1];
		tab[n-i-1] = pom;
	}
}

void przesun_w_lewo(int *tab, int n)
{
	int i;
	int pom = tab[0];
	for(i=1; i<n; i++)
	{
		tab[i-1] = tab[i];
	}
	tab[n-1] = pom;
}

void przesun_w_prawo(int *tab, int n)
{
    int pom=tab[n-1];
	int i;
	for(i=n-1;i>0;i--)
	{
		tab[i]=tab[i-1];
	}
	tab[0]=pom;
}

///cw 4_2_10c
int maksymalnejindeks(unsigned int n, int *tab)
{
	int j=0;
	int i;
	for(i=1;i<n;i++)
	{
		if(tab[j]<=tab[i]) ///ostra, a nieostra nierownosc -> spisuje pierwsze albo ostatnie z wystapien
		{
			j=i;
		}
	}
	return j;   ///4 9 3 9
}

///cw 4_2_12d Algorytmy sortujace
void sortuj(unsigned int n, int *tab)
{
    ///maksymalny element tablicy zamieniamy miejscami z ostatnim
    int i,j,pom;
    for(i=0;i<n-1;i++)
    {
        j=maksymalnejindeks(n-i,tab);
        pom=tab[n-i-1];
        tab[n-i-1]=tab[j];
        tab[j]=pom;
    }
}


int main()
{
	int tab[5] = {5,2,3,1,4};
	wypisz(tab, 5);
	
	sortuj(5, tab);
	
	wypisz(tab, 5);
}
