// Kishmeet Singh Khurana-590014410
#include <stdio.h>
int main()
{
    int n, i, j, k,c;
    printf("Enter value of n \n");
    scanf("%d", n);
    for (i = 0; i < n; i++)
    {
        for (j = n-i; j >= 0; j--)
        {
            printf(" ");
        } 
         c=1;
        for (k = 0; k <= i; k++)

        {
            printf("%2d ", c);
            c=c*(i-k)/(k+1);
        }
        printf("\n");
    } 
}