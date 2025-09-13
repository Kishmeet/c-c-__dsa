#include<stdio.h>
#include<malloc.h>
struct abc
{
    int a;
    float b;
};
void fun(struct abc *);
 int main(){
    printf("Enter Values :");
struct abc *a1=(struct abc*)malloc(sizeof(struct abc));
scanf("%d %f",&a1->a,&a1->b);
fun(a1);
}
void fun (struct abc *a2)
{
printf(" Values are :%d %f",a2->a,a2->b);
}