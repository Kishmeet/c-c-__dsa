#include<stdio.h>
struct abc
{
    int a ;
    float b;

};
int main()
{
    struct abc a1;
    printf("Enter values:");
    scanf("%d %f",&a1.a,&a1.b);
    printf("\nValues are : %d %f",a1.a,a1.b);
}