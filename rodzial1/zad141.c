#include <stdio.h>

/*
Napisz program wczytujący ze standardowego wejścia dwie do-datnie liczby całkowitenim,
i wypisujący w kolejnych wierszachna standardowym wyjściu wszystkie
dodatnie wielokrotności n mniej-sze od m.
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
