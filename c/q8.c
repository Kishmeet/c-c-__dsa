
#include <stdio.h>
int main()
{
    int n, f = 1;
    printf("Enter a number \t");
    scanf("%d", &n);
    while (n >= 2)
    {
        f *= n;
        n--;
    }
    
    printf("\nFactorial : %d", f);
}
