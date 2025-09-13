#include<stdio.h>
int main() {
int a = 4;
int *p;
p=&a;
while(*p > 0)
{
printf("%d ", *p);
(*p)-- ;
return 0;
}
}
