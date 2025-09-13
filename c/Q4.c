// Rahul Rohilla -590013547
#include <stdio.h>
int main()
{
    int n, d,num, rev = 0;
    printf("Enter a number ");
    scanf("%d", &n);
    num=n;
    printf("\nOriginal number is %d \n", n);
    while (n != 0)
    {
        d = n % 10;
        rev = rev * 10 + d;
        n = n / 10;
    }
    printf("Reversed number is %d", rev);
    if (num== rev)
    {
        printf("\nNumber entered is palindrome");
    }
    else
        printf("\nNumber entered is not palindrome");
}