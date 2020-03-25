#include <stdio.h>

/*
Napisz program wczytuj¹cy ze standardowego wejœcia dwie do-datnie liczby ca³kowitenim,
i wypisuj¹cy w kolejnych wierszachna standardowym wyjœciu wszystkie
dodatnie wielokrotnoœci n mniej-sze od m.
*/
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
    for(i=1; n*i<m; i++)
    {
        printf("Wielokrotnosc %i  -  %i\n", n, n*i);
    }

    return 0;
}
