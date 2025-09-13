#include <stdio.h>
int fact(int);
int main()
{  int (*ptr)(int);
    int n;
    ptr=&fact;
    printf("Enter a number \t");
    scanf("%d", &n);
   
    printf("\nFactorial : %d", ptr(n));
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