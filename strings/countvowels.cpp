#include <stdio.h>

int main()
{
    char A[] = "How are you";
    char v[] = "aeiou";
    int i, vcount=0, ccount=0;
    for (i = 0; A[i]!='\0';i++)
    {
        char temp = '\0';
        if (A[i] >= 65 && A[i] <= 90)
            temp = A[i] + 32;
        else if (A[i] >= 97 && A[i] <= 122)
            temp = A[i];
        
        if (temp != '\0')
        {
            bool changed = false;
            for (int j=0; v[j]!='\0';j++)
            {
                if (temp == v[j])
                {
                    vcount++;
                    changed = true;
                    break;
                }
            }
            if (!changed)
                ccount++;
        }
    }
    printf("%i %i", vcount, ccount);
}