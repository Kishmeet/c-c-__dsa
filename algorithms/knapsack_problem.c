// Greedy-Algorithm.
/*Given a set of items, each with a weight and a value, determine which items to include in the collection so that the
total weight is less than or equal to a given limit and the total value is as large as possible.
(can take fractions also)*/
//Time Complexity:O(nlogn)
#include <stdio.h>
#include <stdlib.h>
typedef struct
{
    double profits;
    double weights;
} objects;
void merge(objects arr[], objects B[], int l, int m, int r)
{
    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r)
    {
        double pw_i = arr[i].profits / arr[i].weights;
        double pw_j = arr[j].profits / arr[j].weights;
        B[k++] = pw_i >= pw_j ? arr[i++] : arr[j++];
    }
    while (i <= m)
        B[k++] = arr[i++];
    while (j <= r)
        B[k++] = arr[j++];
    for (i = 0; i < k; i++)
        arr[i + l] = B[i];
}
void mergesort(objects arr[], objects B[], int l,int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        mergesort(arr,B, l, mid);
        mergesort(arr,B, mid + 1, h);
        merge(arr,B, l, mid, h);
    }
}

double greedy(objects *arr, int n, double total)//o(n)
{
    int i = 0;
    double max = 0;
    objects *B = malloc(n * sizeof(objects));
    if (!B)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    mergesort(arr, B, 0,n-1 );
    free(B);
    while (total > 0.0 && i < n)
    {
        if (arr[i].weights <= total)
        {
            max += arr[i].profits;
            total -= arr[i].weights;
        }
        else
        {
            max += arr[i].profits * (total / arr[i].weights);
            break;
        }
        i++;
    }
    return max;
}
int main()
{
    int n;
    printf("Enter the size of objects: ");
    if (scanf("%d", &n) != 1)
    {
        perror("Invalid Input");
        exit(EXIT_FAILURE);
    }

    objects *arr = malloc(n * sizeof(objects));
    if (!arr)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (size_t i = 0; i < n; i++)
    {  
        printf("For object %d\n",i+1);
        printf("Enter the Profit: ");
        if (scanf("%lf", &arr[i].profits)!=1)
        {
            perror("Invalid Input");
            exit(EXIT_FAILURE);
        }
        printf("Enter the Weight: ");

        if (scanf("%lf", &arr[i].weights)!=1)
        {
            perror("Invalid Input");
            exit(EXIT_FAILURE);
        }
        if(arr[i].weights<=0)
        {
        printf("Weight can not be zero or negative");
       return 1;    
    }
    }
    double total;
    printf("\n Enter total size of bag: ");
    if (scanf("%lf", &total)!=1)
    {
        perror("Invalid Input");
        exit(EXIT_FAILURE);
    }
    printf("Maximum Profit: %.2lf", greedy(arr, n, total));
    free (arr);
    return 0;
}