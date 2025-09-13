
#include <stdio.h>
void printArray(int arr[], int size) {
    printf("Array Elements:");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main(){
    int size ;
printf("Enter size of an array ");
scanf("%d",&size);
    int myArray[size];
    for (int i = 0;i<size; i++) {
    int b;
    printf("Enter an integer : ");
    scanf("%d", &b);
    myArray[i]=b;
    
    }
    printArray(myArray, size);

    return 0;
}
