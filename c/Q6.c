// Rahul Rohilla -590013547
#include <stdio.h>
int main()
{
    int i, a = 0, b = 1, c, n;
    printf("Enter number of terms \t");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)

    {
        printf("%d\t", a);
        c = a + b;
        a = b;
        b = c;
    }
}