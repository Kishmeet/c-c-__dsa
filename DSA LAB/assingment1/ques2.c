#include<stdio.h>
int dectobin(int n);
int main()
{
 int num;
 scanf("%d",&num);
 printf("%d",dectobin(num));
}
int dectobin(int n)
{
    if(n==0)
    return 0;
    else
    return (n%2 + 10*dectobin(n/2));
}
