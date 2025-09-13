#include<stdio.h>
int main()
{
    int n;
    printf("Enter size of an array: ");
    scanf("%d",&n);
 int a[n],b[n],j=0;
 for (int i = 0; i < n; i++)
 {
    scanf("%d",&a[i]);
 }
 printf("ORIGINAL ARRAY: ");
 for (int i = 0; i < n; i++)
 {
    printf("%d ",a[i]);
 }
for (int i = n-1; i >= 0; i--)
 {
    b[j]=a[i];
    j++;
 }
 printf("\nREVERSED ARRAY:");
 for (int i = 0; i < n; i++)
 {
    printf("%d ",b[i]);
 }
}