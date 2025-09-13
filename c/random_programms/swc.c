#include <stdio.h>
int main()
{ int age,marks ;
   printf("enter your age ");
   scanf("%d",&age);
    printf("enter your marks ");
   scanf("%d",&marks);
   switch (age  )
   {
   case 3 :
    printf("thr age is 3");
    switch (marks)
    {
    case 45 :
    printf("ypur marks are 45");
        break;
    
    default:  
    printf("ypur marks are not 45");
        
    
        break;
    }
    break;
    case 13 :
    printf("thr age is 13");
    break;
    case 23 :
    printf("thr age is 23");
    break;
   
   default:
    printf("thr age is not 3,13, 23");
    break;
   } return 0;
}