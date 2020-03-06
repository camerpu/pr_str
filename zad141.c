#include <stdio.h>

/*
Napisz program wczytuj�cy ze standardowego wej�cia dwie do-datnie liczby ca�kowitenim,
i wypisuj�cy w kolejnych wierszachna standardowym wyj�ciu wszystkie
dodatnie wielokrotno�ci n mniej-sze od m.
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
