#include<stdio.h>
int main()
{
    int a=100; 
    int *b=&a;
    int **c=&b;
    printf("%d ",a);//100
 printf("\n %d", *(&a));//100
    printf("\n %d", *b);//100
     printf("\n %p %p", b,&a);//same
      printf("\n %d", **(&b));//100
       printf("\n %p %p", &b,c);//same
          printf("\n %d", **c);//100
             printf("\n %d", ***(&c));//100
                printf("\n %d", **c+*b);//200

}