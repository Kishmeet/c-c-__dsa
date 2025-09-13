#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
 int a[n],l,s;
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
 l=s=a[0];
 for (int i = 0; i <n; i++)
 {
    if (a[i]>l)
    {
        l=a[0];
    }
    if (a[i]<s)
    {
     s=a[i];
    }
    
    
 }
 printf("\nLARGEST VALUE IN ARRAY IS : %d",l);
 printf("\nSMALLEST VALUE IN ARRAY IS : %d",s);

}