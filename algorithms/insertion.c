// Insertion Sort Time Complexity: O(n^2) Space Complexity: O(1)
// Stable Sorting Algorithm
// Adaptive Algorithm
#include<stdio.h>
#include<stdlib.h>
void insertionsort(int arr[],int n)
{ 
    int i,j,x;
    for(i=1;i<n;i++)
    {   x=arr[i];
        j=i-1;
        while(j>-1&& arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}

int main()
{
    int n;
    printf("Enter Number of Elements \n");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        perror("Invalid Input");
        exit(EXIT_FAILURE);
    }
    int *arr = malloc(n * sizeof(int));
    if (!arr)
    {
        perror("Memory Allocation failed");
        exit(EXIT_FAILURE);
    }
    printf("Enter  %d Elements \n", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            perror("Invalid Input");
            free(arr);
            exit(EXIT_FAILURE);
        }
    }
    printf("Sorted Elements\t");
    insertionsort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}