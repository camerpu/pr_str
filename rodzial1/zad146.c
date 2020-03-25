#include <stdio.h>

int main()
{
    int n, s = 1, i;
    printf("Podaj liczbe: ", n);
    scanf("%i", &n);
    if(n <= 2)
        return 0;

    for(i=2; i<=n; i += 2)
        s=s*i;
    printf("Iloczyn wynosi %d", s);

    return 0;
}
