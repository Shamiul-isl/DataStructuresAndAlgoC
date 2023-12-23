#include <stdio.h>
#include <stdlib.h>

int main()
{
    // this creates static array in stack
    int A[10]={2,4,6,8,10};

    // this creates array in heap memory
    int *p;
    p=(int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    int i;
    for(i=0;i<5;i++)
    {
        printf("%d ",A[i]);
    }

    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("%d ",p[i]);
    }

    return 0;
}