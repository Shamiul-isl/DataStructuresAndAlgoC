#include <stdio.h>
#include <stdlib.h>

int main()
{
    // you cannot increase the size of an array. If you want a bigger array
    // in c you need to create a new array, copy the values from one array to 
    // the other and then free the first array to avoid memory leak

    int *p, *q;
    int i;

    p=(int *)malloc(5*sizeof(int));
    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    q=(int *)malloc(10*sizeof(int));

    for(i=0;i<5;i++)
    {
        q[i]=p[i];
    }

    //free p. assign p to the bigger array. then assign q to NULL because we dont
    // need q to point to the bigger array.
    free(p);
    p=q;
    q=NULL;

    for(i=0;i<5;i++)
    {
        printf("%d \n", p[i]);
    }
    return 0;
}