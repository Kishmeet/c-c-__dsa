// Rahul Rohilla -590013547
#include<stdio.h>
int main()
{
    int a,b,gcd=0,div=1;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);
    while(a>=div && b>=div)
    {
        if(a%div==0 && b%div ==0)
        {
            gcd=div;
        } div++;
    }
    printf("\t Gcd of %d and %d is %d",a,b,gcd);
}