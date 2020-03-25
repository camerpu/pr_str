#include <stdio.h>

int main()
{
    int n, a, b, i, s=0;
    printf("Podaj liczbe n: ");
    scanf("%i", &n);
    for(i=2;i<=n;i++)
    {
        a=n;
        b=i;
        while(a*b!=0)
        {
            if(a<b)
                b=b%a;
            else
                a=a%b;
        }
        if((a==1) || (b==1))
            s=s+i;
    }
    printf("\n%i", s);
}
