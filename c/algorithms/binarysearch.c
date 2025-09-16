#include <stdio.h>
#include <stdlib.h>
// Time Complexity: O(log n)
//iterative implementation of binary search
int binarysearch(int arr[],int size,int key)
{
    int low=0;int high = size-1;
    int mid=low+(high-low)/2;
    while(low<=high)
    {
        if(arr[mid]==key)
            return mid;
        else if(arr[mid]<key)
            low=mid+1;
        else
            high=mid-1;
        mid=low+(high-low)/2;
    }
    return -1;  
}
//recursive implementation of binary search
/*int binarysearch(int arr[],int low,int high,int key)
{
    if(low>high)
        return -1;
    int mid=low+(high-low)/2;
    if(arr[mid]==key)
        return mid;
    else if(arr[mid]<key)
        return binarysearch(arr,mid+1,high,key);
    else
        return binarysearch(arr,low,mid-1,key);
}*/
int main()
{
    int n;
    printf("Enter the size of array:");
    scanf("%d",&n);
    int *arr=(int *)malloc(n*sizeof(int));
    printf("Enter the elements of array in sorted order:");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);
    int key;
    printf("Enter the element to be searched:");
    scanf("%d",&key);
    int result=binarysearch(arr,n,key);
    if(result==-1)
        printf("Element not found in the array\n");
    else
        printf("Element found at index %d\n",result);
    free(arr);
    return 0;
}