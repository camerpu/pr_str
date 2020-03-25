#include <stdio.h>

int pierwsza(int liczba)
{
    int dzielniki = 0;
    for(int i = 1; i<=liczba; i++)
    {
        if(liczba % i == 0)
            dzielniki++;
    }
    if(dzielniki == 2)
        return 1;
    else
        return 0;
}

int main()
{
    int ile = 0, i;
    for(i = 1; ile<=90; i++)
    {
        if(pierwsza(i) == 1 && pierwsza(i+2) == 1)
        {
            printf("para %i oraz %i\n", i, i+2);
            ile++;
        }
    }

}
