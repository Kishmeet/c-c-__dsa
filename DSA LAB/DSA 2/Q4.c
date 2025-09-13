#include<stdio.h>
void pass(int *);
int main()
{
    int a;
    int *ptr=&a;
    printf("Enter Value of a:");
    scanf("%d",&a);
    pass(ptr);
printf("Updated Value is %d",a);
}
void pass(int * ptr)
{   int b;
    printf("Enter new Value of a:");
    scanf("%d",&b);
    *ptr=b;
 
}