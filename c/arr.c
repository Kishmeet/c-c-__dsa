#include<stdio.h>
int abc (int *);
int main()
{
int a[5];
printf("enter elements \n");
for (int  i = 0; i < 5; i++)
{
    scanf("%d",&a[i]);

} 
printf("Sum of elements is  %d",abc(a));

}
int abc(int *ptr){
    int sum=0;
    for (int  i = 0; i < 5; i++)
    {
        sum+=ptr[i];
    }
    return sum;
}