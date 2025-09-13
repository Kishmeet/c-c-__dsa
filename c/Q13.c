// Rahul Rohilla -590013547
#include <stdio.h>
int main()
{
    int n, x, res = 1;
    printf("Enter  a number ");
    scanf("%d", &n);
    printf("Enter  power by which number is to be raised \n ");
    scanf("%d", &x);
    int y = x;
    while (x-- > 0)
    {
        res *= n;
    }
    printf("%d raise to power %d = %d ", n, y, res);
}