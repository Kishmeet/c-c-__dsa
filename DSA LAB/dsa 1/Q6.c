//Q2.3 Swapping using a single pointer:

#include<stdio.h>
int main(){
    int a1,a2;
    int *ptr;
    printf("Enter the 2 numbers: ");
    scanf("%d %d",&a1,&a2);
    printf("Before swapping: a1 = %d, a2 = %d\n", a1, a2);
    // Swapping using single pointer
    ptr = &a1;
    *ptr = *ptr + a2;
    a2 = *ptr - a2;
    a1 = *ptr - a2;
    printf("After swapping: a1 = %d, a2 = %d\n", a1, a2);
    return 0;
}