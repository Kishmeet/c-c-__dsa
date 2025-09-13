//Q7 Find the sum of array elements using a pointer:
#include<stdio.h>
int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for(int i=0;i<n;i++) {
    printf("Enter array element %d : ",i+1);
        scanf("%d", &arr[i]);
    }
    int *ptr = arr;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += *(ptr+i);
    }
    printf("Sum of array elements is %d\n", sum);
}