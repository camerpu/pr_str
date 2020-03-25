#include <stdio.h>

int main()
{
    int n, s = 0, i;
    printf("Podaj liczbe: ");
    scanf("%i", &n);
    if(n < 0)
        return 0;

    for(i=0; i<=n; i++)
    {
        s += i*i;
    }
    printf("Suma wynosi %d", s);
    return 0;
}
