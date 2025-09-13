
#include <stdio.h>
int power(int, int);
int main()
{
    int n, x, y, s = 0;
    printf("Enter a Number ");
    scanf("%d", &x);
    int a = x;
    printf("Original number is :");
    y = printf("%d", x); // counting digits
    while (x != 0)
    {
        n = x % 10; 
        s += power(n, y);
        x = x / 10;
    }
    printf("\nCalculated number is :%d", s);
    if (a == s)
    {
        printf("\nNumber is Armstrong Number");
    }
    else
        printf("\nNumber is Not a Armstrong Number");
}
int power(int a, int b)
{
    int i, res = 1;
    for (i = 1; i <= b; i++)
    {
        res *= a;
    }
    return res;
}