#include <stdio.h>

int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n-1) * m;
}

int powerLess(int m, int n)
{
    if (n==0)
        return 1;
    if(n%2==0)
        return powerLess(m*m,n/2);
    return m * powerLess(m*m,(n-1)/2);
}

int main()
{
    int r;
    r = powerLess(2, 9);
    printf("%d\n", r);
    return 0;
}