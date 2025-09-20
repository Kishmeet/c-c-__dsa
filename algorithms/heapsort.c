/*  heap is a complete binary tree 
    max heap:parent>children
    min heap:parent<children
    heapify-O(n)
    heapsort-O(nlogn)
*/
//algorithm is not stable
//algorithm is not adaptive
//also used in priority queue
#include <stdio.h>
#include <stdlib.h>
void heapify(int arr[], int n, int i)//O(logn)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[left] > arr[largest])
    {
        largest = left;
    }
    if (right < n && arr[right] > arr[largest])
    {
        largest = right;
    }
    if (largest != i)
    {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}
void heapsort(int arr[], int n)//O(nlogn)
{
    int temp;
    for (int i = n - 1; i >= 1; i--)
    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}
int main()
{
    int n;
    printf("Enter the number of elements\n");
    scanf("%d", &n);
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Enter the elements\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = n / 2 - 1; i >= 0; i--)//Building Max Heap:O(n)
    {
        heapify(arr, n, i);
    }
    printf("Max Heap array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    heapsort(arr, n);
    printf("Sorted array is \n");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}