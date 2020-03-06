#include <stdio.h>
#include <math.h>

int jest_kwadratem(int i, int j)
{
    if(sqrt( i*j ) * sqrt( i*j )  == i*j)
        return 1;
    else
        return 0;
}
int main()
{
    int i, j;
    for(i = 1; i<1000; i++)
    {
        for(j = 1; j<1000; j++)
        {
            if(i != j)
            {
                if(jest_kwadratem(i, j) == 1 && jest_kwadratem(i+1, j+1) == 1)
                {
                       printf("para %i oraz %i\n", i, j);
                }
            }
        }
    }
}
