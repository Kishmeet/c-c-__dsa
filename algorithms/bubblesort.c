// Bubblesort Time Complexity: O(n^2) Space Complexity: O(1)
//Stable Sorting Algorithm
// Adaptive Algorithm
#include <stdio.h>
#include <stdlib.h>
void bubblesort(int arr[], int n)
{
    int flag;
    for (int i = 0; i < n - 1; i++)
    {
        flag = 0;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag == 0)
            return;
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
    bubblesort(arr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}