#include <stdio.h>

int main()
{
    int n, i;
    printf("Podaj n: ");
    scanf("%i", &n);
    int p = 0;
    for(i = 1; i<=n; i++)
    {
        if(i*i <= n)
            p=i;
    }

    printf("zaokraglany pierwiastek: %i", p);

}
