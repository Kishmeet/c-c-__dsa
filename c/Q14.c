// Rahul Rohilla -590013547
#include <stdio.h>
int main()
{
    int n, i, space, j, c = 1;
    printf("Enter value of n \n");
    scanf("%d",&n);
    for (i = 0; i< n; i++)
    {
        for (space = n-i; space >= 0; space--)
        {
            printf(" ");
        }  c=1;
        for (j = 0; j <= i; j++)

        {
            printf("%d ", c);
            c=c*(i-j)/(j+1);
        }
        printf("\n");
    } 
}