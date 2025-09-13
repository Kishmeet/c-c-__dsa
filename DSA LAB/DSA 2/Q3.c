#include<stdio.h>
/* a)
void sum();
int main()
{
    sum();
}
void sum()
{ int a,b;
    scanf("%d %d",&a,&b);
    printf("Sum is %d",a+b);
}*/
/* b)
void sum(int,int);
int main()
{ int a,b;
    scanf("%d %d",&a,&b);
    sum(a,b);
}
void sum(int a,int b)
{
    printf("Sum is %d",a+b);
}
*/
/*
c)
int sum();
int main()
{
  printf("%d",sum());
}
int sum()
{
    int a,b;
    scanf("%d %d",&a,&b);
    return a+b;
}*/
int sum(int,int);
int main()
{int a,b;
    scanf("%d %d",&a,&b);
    printf("%d",sum(a,b));
} int sum (int a,int b)
{
     return a+b;
}