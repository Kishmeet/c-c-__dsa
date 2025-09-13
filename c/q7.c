// Rahul Rohilla -590013547
#include<stdio.h>
int main ()
{
    int i,n;
    float s=0.0;
    printf("Enter Number of terms \t");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        s+=1.0/i;
    }
    printf("\nthe sum of series is %f",s);
}
