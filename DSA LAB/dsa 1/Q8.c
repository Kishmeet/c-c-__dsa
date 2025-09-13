//Q8 Count occurences of a specific element using a pointer:
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
    int element;
    printf("Enter the element to count: ");
    scanf("%d", &element);
    int *ptr = arr;
    int count = 0;
    for(int i=0; i<n; i++){
        if(*ptr++ == element) {count++;}
    }
    printf("Element %d occurs %d times in the array\n", element, count);
}