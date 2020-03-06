#include <stdio.h>

int main()
{
    int n, m, i, s = 1;
    printf("Podaj liczbe n i m");
    scanf("%d%d", &n, &m);
    for(i=n;i<=m;i++)
    {
        s=s*i;
    }
    printf("\nwynik: %i", s);
}
