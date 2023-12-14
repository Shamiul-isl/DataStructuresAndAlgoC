#include <stdio.h>

int main()
{
    char A[] = "finding";

    //using bits shifting, masking, and merging
    long int H=0, x = 0;

    for (int i=0;A[i]!='\0';i++)
    {
        x=1;
        x = x << (A[i]-97);
        if ((x & H) > 0)
            printf("%c is duplicated\n", A[i]);
        else
            H = x | H;
    }
    
    // using array as hashtable
    // int H[26] = {0}; 
    // int i;

    // for (i=0;A[i]!='\0';i++)
    // {
    //     H[A[i]-97]+=1;
    // }
    // for (i = 0; i < 26;i++)
    // {
    //     if(H[i] > 1)
    //     {
    //         printf("%c ", i+97);
    //         printf("%d\n", H[i]);
    //     }
    // }
}