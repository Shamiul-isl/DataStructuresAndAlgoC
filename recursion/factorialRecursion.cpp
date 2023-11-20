#include <stdio.h>

int fact(int n)
{
    if (n == 0)
        return 1;
    else if (n > 0)
        return fact(n-1) * n;
    else
        return 0;
}

int Ifact(int n)
{
    int f=1;
    int i;
    for (i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}

int main()
{
    int r;
    r = fact(-10);
    printf("%d\n", r);
    return 0;
}