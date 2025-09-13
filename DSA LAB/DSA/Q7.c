#include<stdio.h>
struct abc
{
int product_id;
float price;
int quantity;
};
int main(){
    struct abc a;
    struct abc *ptr=&a;
    printf("Enter product_id,price and quantity\n");
    scanf("%d %f %d",&ptr->product_id,&ptr->price,&ptr->quantity);
    printf("product_id: %d,price: %f, quantity: %d",ptr->product_id,ptr->price,ptr->quantity);
}
