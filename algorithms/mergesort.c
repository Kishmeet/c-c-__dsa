// Mergesort Time Complexity: O(n log n) Space Complexity: O(n)
// Stable Sorting Algorithm
// Not Adaptive Algorithm
// perror function is used to print the error message to stderr(standard error output)
// exit function is used to terminate the program immediately
#include <stdio.h>
#include <stdlib.h>
void merge(int arr[], int l, int m, int r)
{
    int i=l, j = m + 1, k = 0;

    int *B = (int *)malloc((r - l + 1) * sizeof(int));

    if (!B)
    {
        perror("Memory Allocation failed");
        exit(EXIT_FAILURE); // EXIT_FAILURE macro indicates unsuccessful termination execution of the program (exit(1);)
    }
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
    free(B);
}
void mergesort(int arr[], int l, int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        mergesort(arr, l, mid);
        mergesort(arr, mid + 1, h);
        merge(arr, l, mid, h);
    }
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
    mergesort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}