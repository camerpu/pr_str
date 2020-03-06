#include <stdio.h>

int main()
{
    int n, m, i;
    printf("Podaj 2 liczby: ");
    scanf("%i%i", &n, &m);
    if(n <= 0 || m <= 0)
    {
        printf("N i M musi byc dodatnie");
        return 0;
    }
    for(i = 1; i<=m; i++)
    {
        printf("Wielokrotnosc %i - %i\n", n, n*i);
    }
}
