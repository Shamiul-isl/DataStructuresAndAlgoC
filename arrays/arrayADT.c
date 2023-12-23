#include <stdio.h>
#include <stdlib.h>

struct Array
{
    //create in heap
    // int *A;

    //create in stack
    int A[10];
    
    int size;
    int length;
};

void Display(struct Array arr)
{
    int i;
    printf("\nElements are\n");
    for(i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if(arr->length<arr->size)
        arr->A[arr->length++]=x;
}

void Insert(struct Array *arr, int index, int x)
{
    int i;
    if(index>=0 && index<=arr->length)
    {
        for(i=arr->length;i>index;i--)
            arr->A[i]=arr->A[i-1];
        arr->A[index]=x;
        arr->length++;
    }
}

int main()
{
    //if creating in heap
    // struct Array arr;
    
    int n,i;

    // needed if creating in heap
    // printf("Enter size of an array: ");
    // scanf("%d", &arr.size);
    // arr.A = (int *)malloc(arr.size*sizeof(int));
    // arr.length=0;
    // printf("Enter number of numbers: ");
    // scanf("%d", &n);

    // printf("Enter all Elements\n");
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d", &arr.A[i]);
    // }

    // arr.length=n;

    //creating in stack
    struct Array arr={{2,3,4,5,6}, 10, 5};
    
    Append(&arr, 10);
    Insert(&arr, 5, 8);
    Display(arr);
    return 0;
}