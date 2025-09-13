#include <stdio.h>
struct str 
{
    int a; 
    float b;
};
int main ()
{
    struct str c;
    struct str *d = &c;
    printf("Enter values\n");
    scanf("%d %f",&d->a,&d->b);
    printf("%d %f",d->a,d->b);

}