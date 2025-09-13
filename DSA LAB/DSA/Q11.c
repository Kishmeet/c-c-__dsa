#include <stdio.h>
#include <malloc.h>
int main()
{
    int *ptr = (int *)calloc(5,sizeof(int));
    printf("Enter Array elements\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", (ptr + i));
    }
    printf("Array elements are:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", ptr[i]);
    }
}