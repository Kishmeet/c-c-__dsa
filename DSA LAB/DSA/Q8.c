#include<stdio.h>
#include<malloc.h>
struct car
{
int model_number;
float price;
};
int main()
{
    struct car *a=(struct car *)malloc(sizeof(struct car));
    printf("Enter model_number :");
    scanf("%d",&a->model_number);
    printf("\n Enter price :");
    scanf("%f",&a->price);
   printf("\nModel number :%d , Price : %f",a->model_number,a->price);
}