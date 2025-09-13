#include<stdio.h>
struct abc
{
    float l ;
    float b;
};
int main()
{
    struct abc a;
 printf("Enter Length and Breadth\n");
 scanf("%f%f",&a.l,&a.b);
 printf("Area of a reactangle is %f square units",a.l*a.b);
}