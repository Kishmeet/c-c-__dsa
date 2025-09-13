// Q9.Copy one array to another using pointer.
#include <stdio.h>

int main()
{
    int n, *ptr;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n],b[n];
    ptr=b;
    for (int i = 0; i < n; i++)
    {
        printf("Enter array element %d : ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("Original array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    //copying array

    for (int i = 0; i < n; i++)
    {
        *(ptr + i) = *(arr + i);
    }
    printf("\n Copied array: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", ptr[i]);
    }
}