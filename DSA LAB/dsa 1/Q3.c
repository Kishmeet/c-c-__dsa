#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
 int a[n],se=0,so=0;
 printf("Enter Array elements\n");
 for (int i = 0; i < n; i++)
 {
    scanf("%d",&a[i]);
 }
 printf("ORIGINAL ARRAY: ");
 for (int i = 0; i < n; i++)
 {
    printf("%d ",a[i]);
 }
 
 for (int i = 0; i <n; i++)
 {
    if (a[i]%2==0)
    {
        se+=a[i];
    }
    else{
        so+=a[i];
    }
    
    
 }
 printf("\nSUM OF EVEN VALUES  IN ARRAY IS : %d",se);
 printf("\nSUM OF ODD VALUES IN ARRAY IS : %d",so);
}