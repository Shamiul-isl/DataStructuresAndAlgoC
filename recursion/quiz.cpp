#include <stdio.h>

int f(int &x, int c)
{
    c = c - 1;
    if (c==0) return 1;
    x = x+1;
    return f(x,c) * x;
}

int fun(int n)
{
    int x=1, k;
    if(n==1) return x;
    for(k=1;k<n;++k)
    {
        x=x+fun(k)*fun(n-k);
    }
    return x;
}

void count(int n)
{
    static int d = 1;
    printf("%d", n);
    printf("%d", d);
    d++;
    if (n > 1) count(n-1);
    printf("%d", d);
}

int main()
{

    int p = 5;
    // printf("%d \n", f(p, p));
    // printf("%d \n", fun(p));
    count(3);
    return 0;
}