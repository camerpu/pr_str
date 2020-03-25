#include <stdio.h>

int main()
{
    int n, m, k, i;
    printf("Podaj 3 liczby: ");
    scanf("%i%i%i", &n, &m, &k);
    if(n <= 0 || m <= 0)
    {
        printf("N i M musi byc dodatnie");
        return 0;
    }
    for(i=m/n*n+n; i<k; i=i+n)
    {
        printf("%i", i);
    }

    return 0;
}
