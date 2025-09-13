// Rahul Rohilla -590013547
#include <stdio.h>
int main()
{
    int n, i, s = 0;
    printf("Enter  value of n ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            s += i;
    }

    printf("Sum of even numbers up to n = %d", s);
}