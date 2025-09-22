//GREEDY ALGORITHM
/* Given 'n' jobs, each with a deadline (di) and a profit (pi),
where each job takes 1 unit of time and only one job can be scheduled at a time.
the objective is to schedule jobs before their deadlines to maximize total profit.
*/  
//d_max is maximum deadline among all jobs.
// Time complexity-O(n * log(n) + n * d_max) if d_max is not very large then O(n * log(n))
// Space Complexity: O(n + d_max) if d_max is not very large then O(n)

#include<stdio.h>
#include<stdlib.h>
 typedef struct 
 {
    int profit;
    int deadline;
 }jobs;
 void merge(jobs arr[], jobs B[], int l, int m, int r)
{
    int i = l, j = m + 1, k = 0;

    while (i <= m && j <= r)
    {
        B[k++] = arr[i].profit> arr[j].profit ? arr[i++] : arr[j++];
    }
    while (i <= m)
        B[k++] = arr[i++];
    while (j <= r)
        B[k++] = arr[j++];
    for (i = 0; i < k; i++)
        arr[i + l] = B[i];
}
void mergesort( jobs arr[],jobs B[], int l,int h)
{
    if (l < h)
    {
        int mid = l + (h - l) / 2;
        mergesort(arr,B, l, mid);
        mergesort(arr,B, mid + 1, h);
        merge(arr,B, l, mid, h);
    }
}
int  max_sequencing(jobs job[],int slots[],int n)
{
jobs *B = malloc(n * sizeof(jobs));
mergesort(job,B,0,n-1);
free(B);
int totalProfit=0;
 for (int i = 0; i < n; i++) {
        // Find the latest available slot for the current job
        for (int t = job[i].deadline; t > 0; t--) {
            if (slots[t] == 0) { 
                slots[t] = 1;                   
                totalProfit += job[i].profit;   
                break;
            }
        }
    }
return totalProfit;
}
int main()
{
    int n;
     printf("Enter the number of Jobs to Schedule: ");
    if (scanf("%d", &n) != 1 || n<0)
    {
        perror("Invalid Input");
        exit(EXIT_FAILURE);
    }

    jobs *arr = malloc(n * sizeof(jobs));
    if (!arr)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    for (size_t i = 0; i < n; i++)
    {  
        printf("For Job %d\n",i+1);
        printf("Enter the Profit: ");
        if (scanf("%d", &arr[i].profit)!=1)
        {
            perror("Invalid Input");
            exit(EXIT_FAILURE);
        }
        printf("Enter the Deadline: ");

        if (scanf("%d", &arr[i].deadline)!=1)
        {
            perror("Invalid Input");
            exit(EXIT_FAILURE);
        }
        if(arr[i].deadline<=0)
        {
        printf("Deadline can not be zero or negative");
        return 1;
        }
           
    }
    int max=0;
    for (size_t i = 0; i < n; i++)
    {
        if(arr[i].deadline>max)
          max=arr[i].deadline;
    }
    int *slots = calloc(max + 1, sizeof(int));
    if (!slots)
    {
        perror("Memory allocation failed");
        exit(EXIT_FAILURE);
    }
    int profit=max_sequencing(arr,slots,n);;
    printf("Maximum Profit:%d",profit);
    free(slots);
    free(arr);
}