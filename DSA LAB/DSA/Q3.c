#include<stdio.h>
struct abc
{
    int rollno;
    float marks;
};
int main(){
struct abc a[5];
for ( int  i = 0; i < 5; i++)
{  
printf("Enter Roll Number and Marks for Student %d\n",i+1);
scanf("%d %f",&a[i].rollno,&a[i].marks);
}
for (int i = 0; i <5; i++)
{
printf("For Student %d  Roll Number : %d Marks : %f\n",i+1,a[i].rollno,a[i].marks);
}
}

