# include <stdio.h>
 int main()
 {  int a;
 printf("enter a number ");
 scanf("%d",&a);
 printf("%d",a&(a-1));
 (a&(a-1))? printf("nO:"): printf("yes");
 
 }
 