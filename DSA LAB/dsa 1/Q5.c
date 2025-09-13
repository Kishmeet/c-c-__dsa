//Q6 Pointer Arithmetic:
#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    int j=0;
    while(n>j) {
    printf("Enter array element %d : ", j+1);
        scanf("%d", &arr[j]);
        j++;
    }
    int * ptr = arr;
    for(int i=0; i<n;i++){
        printf("%d ", *ptr++);
    }
}