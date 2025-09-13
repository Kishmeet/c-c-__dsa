#include<stdio.h>
struct Date
{
int day ;
char month [10];
int year;
};
struct Student 
{
int roll_number;
int SAP;
struct Date a;
};
int main(){
    struct Student s;
    printf("Enter Student Details\n");
    printf("Enter Roll Number: ");
    scanf("%d",&s.roll_number);
    printf("Enter SAP: ");
    scanf("%d",&s.SAP);
    printf("Enter Date of Birth (in 15 August 1947): ");
    scanf("%d %s %d",&s.a.day,&s.a.month,&s.a.year);
    printf("Student Details:-\n Roll Number: %d\n SAP: %d\n Date Of Birth : %d %s %d\n",s.roll_number,s.SAP,s.a.day,s.a.month,s.a.year);
}

