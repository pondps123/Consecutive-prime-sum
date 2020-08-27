#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int sumprime(int b)
{
    int a, c = 0;
    for (a = 1; a <= b; a++)
    {
        if ((a == 1 || a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
            && (a != 2 && a != 3 && a != 5 && a != 7))
        {
            continue;
        }
        c += a;
    }
    return c;
}
int sum(int b)
{
    int a, c = 0;
    for (a = 1; a < b; a++)
    {
        if ((a == 1 || a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0)
            && (a != 2 && a != 3 && a != 5 && a != 7))
        {
            continue;
        }
        c += a;
        printf("%d + ", a);
    }
    c += a;
    printf("%d = %d ", a,c);
    return c;
}
int n(int x) 
{
    int y, z = 0;
    for (y = 1; y <= x; y++)
    {
        if ((y == 1 || y % 2 == 0 || y % 3 == 0 || y % 5 == 0 || y % 7 == 0)
            && (y != 2 && y != 3 && y != 5 && y != 7))
        {
            continue;
        }
        z++;
    }
    return z;
}
int main()
{
    int d, e, f=1,N[100000],i=0,K[100000],g;
    printf("The longest sum of consecutive primes below ");
    scanf("%d", &d);
    for (e = 1; e < d; e++)
    {

        if ((e == 1 || e % 2 == 0 || e % 3 == 0 || e % 5 == 0 || e % 7 == 0)
            && (e != 2 && e != 3 && e != 5 && e != 7))
        {
            continue;

        }
        while (sumprime(f)<e)
        {
            f++;
        }
        if (sumprime(f) == e)
        {
            printf("%d have %d terms\n", e,n(f));
            N[i] = e;
            K[i] = n(f);
            i++;
        }
    }
    i--;
    printf("is %d have %d terms\n", N[i],K[i]);
    for (g = 1; g < N[i]; g++)
    {
        if ((g == 1 || g % 2 == 0 || g % 3 == 0 || g % 5 == 0 || g % 7 == 0)
            && (g != 2 && g != 3 && g != 5 && g != 7))
        {
            continue;
        }
        if (sumprime(g)==N[i])
        {
            sum(g);
        }
    }
    return 0;
}