#include <stdio.h>

int main()
{
    char A[] = "madaam";
    int i, j;
    char t, t1;
    for (j = 0; A[j] != '\0'; j++)
    {}
    j = j - 1;
    for (i=0; i < j; i++,j--)
    {
        t = A[i];
        t1 = A[j];
        if (A[i] >= 65 && A[i] <= 90)
            char t = A[i] + 32;
        if (A[j] >= 65 && A[j] <= 90)
            char t1 = A[j] + 32;
        if (t1 != t)
        {
            printf("Not a palindrome");
            return 1;
        }
    }
    printf("Palindrome");
    return 0;
}