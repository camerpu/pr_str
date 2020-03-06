#include <stdio.h>

int main()
{
    int n, m;
    printf("Podaj 2 liczby: ");
    scanf("%i%i", &n, &m);

    //metoda prymitywna;
    int i, nwd;
    int max=(n>m) ? n : m;
    for(i=2;i<=max;i++)
    {
        if((n%i==0) && (m%i==0))
        {
            nwd = i;
        }
    }
    printf("metoda prymitywna: %i\n", nwd);

    //euklides
    int a, b;
    a = n;
    b = m;
    while(a*b != 0)
    {
        if(a>b)
            a=a%b;
        else
            b=b%a;
    }
    printf("Najwiekszy wspolnik dzielnik liczby %i oraz %i wynosi:", a, b);
    if(a == 0)
    {
        printf("%i\n", b);
    }
    else
    {
        printf("%i\n", a);
    }
}
