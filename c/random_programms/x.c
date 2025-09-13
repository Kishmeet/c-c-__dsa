
#include <stdio.h>
int main()
{
    int i, j, n, c ;
    printf("enter value of n \n");
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
    {     c=1;
        for (j = 2; j <i; j++)
        {
            if (i % j == 0)
            {
                c=0;
            }
            
        }
    }
    if (c )
        printf("%d", i);
}

