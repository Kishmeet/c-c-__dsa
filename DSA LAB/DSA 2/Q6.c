
#include <stdio.h>
#include <malloc.h>
void printArray(int *array, int size) {
    printf("ARRAY ELEMNENTS ARE :");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(array+i));
    }
    printf("\n");
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int *array=NULL;
    array = (int *) malloc(size * sizeof(int));
    
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }
    printArray(array, size);
    free(array);
}