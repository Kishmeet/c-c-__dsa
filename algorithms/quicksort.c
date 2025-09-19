// Quick Sort Algorithm Implementation in C
// Time Complexity: O(n log n) on average, O(n^2) in the worst case
// Space Complexity: O(log n) due to recursion stack
// Not a Stable Sorting Algorithm
// Not an Adaptive Algorithm
//pivot is chosen as the middle element
#include <stdio.h>
#include <stdlib.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int partition(int arr[], int l, int h)
{
    int mid = l + (h - l) / 2;
    int pivot = arr[mid];
    int i = l - 1;
    int j = h + 1;

    while (1)
    {
        do { i++; } while (arr[i] < pivot);
        do { j--; } while (arr[j] > pivot);

        if (i >= j)
            return j;

        swap(&arr[i], &arr[j]);
    }
}
void quicksort(int arr[],int l,int h)
{
    if(l<h)
    {
        int j=partition(arr,l,h);
        quicksort(arr,l,j);
        quicksort(arr,j+1,h);

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
    quicksort(arr, 0,n-1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}