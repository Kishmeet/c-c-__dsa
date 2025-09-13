//Kishmeet Singh Khurana -590014410

#include <stdio.h>
int main()
{
    int n, i, j, f ;
    printf("Enter value of N \n");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are : \n",n);
    for (i = 2; i <= n; i++)
    {       f=0;
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                f = 1;
                break;
            }
        }
        if (f == 0)
            printf("%d  ", i);
    }
}