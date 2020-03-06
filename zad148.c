#include <stdio.h>

int main()
{
    int n;
    int i;
    int p = 1, d = 1, t;
    printf("Podaj liczbe n: ");
    scanf("%i", &n);

    for(i = 1; i<n; i++)
    {
       t = d;
       d=d+p;
       p = t;
    }
    printf("%i\n", p);
}
