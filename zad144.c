#include <stdio.h>

int main()
{
    int n, i, s = 1;
    printf("Podaj liczbe n");
    scanf("%d", &n);
    for(i=2;i<=n;i++)
    {
        s=s*i;
    }
    printf("Silnia z %i wynosi %i", n, s);
}
