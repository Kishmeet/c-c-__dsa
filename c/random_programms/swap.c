# include <stdio.h>

int main()
{   int a ,b;  
 printf("enter");
 scanf("%d %d",&a,&b);
printf("before swapping A= %d and b = %d \n",a,b);
a=a^b;
b=a^b;
a=a^b;
printf("after swapping A= %d and b = %d",a,b);
}