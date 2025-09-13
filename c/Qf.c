#include <stdio.h>
int fact(int);
int main()
{
    int n;
    printf("Enter a number \t");
    scanf("%d", &n);
   
    printf("\nFactorial : %d", fact(n));
} 
int fact(int n)
{
    int f=1;
    while (n>=2)
    {
        f=f*n;
        n--;
    }
    return f;
}