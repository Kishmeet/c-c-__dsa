// Iterative Mergesort Time Complexity: O(n log n) Space Complexity: O(n)
// Stable Sorting Algorithm
// Not Adaptive Algorithm

#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int B[],int l, int m, int r)
{
    int i=l, j = m + 1, k = 0;

    while (i <= m && j <= r)
    {
        B[k++] = arr[i] <= arr[j] ? arr[i++] : arr[j++];
    }
    while (i <= m)
        B[k++] = arr[i++];
    while (j <= r)
        B[k++] = arr[j++];
    for (i = 0; i < k; i++)
        arr[i + l] = B[i];
}
void mergesort(int arr[], int B[], int n)
{
    size_t p;
    int l, mid, h;

    for(p = 2; p <= n; p *= 2)
    {
        for(size_t i = 0; i < n; i += p)
        {
            l = i;
            h = i + p - 1;
            if(h >= n)
                h = n - 1;
            mid = l + (h - l)/2;
            merge(arr, B, l, mid, h);
        }
    }

    // Final merge if last subarray size < p
    if(p/2 < n)
        merge(arr, B, 0, p/2 - 1, n - 1);
}

int main()
{
    int n;
    printf("Enter Number of Elements \n");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
     fprintf(stderr, "Invalid input\n");
        exit(EXIT_FAILURE);
    }
    int *arr = (int *)malloc(n * sizeof(int));
    if (!arr)
    {
        perror("Memory Allocation failed");
        exit(EXIT_FAILURE);
    }
    
    int *B = (int *)malloc((n) * sizeof(int));

    if (!B)
    {
        perror("Memory Allocation failed");
        exit(EXIT_FAILURE);
    }
    printf("Enter  %d Elements \n", n);
    for (int i = 0; i < n; i++)
    {
        if (scanf("%d", &arr[i]) != 1)
        {
            fprintf(stderr, "Invalid input\n");
            free(arr);
            exit(EXIT_FAILURE);
        }
    }
    printf("Sorted Elements\t");
    mergesort(arr,B, n );
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    free(B);
    return 0;
}