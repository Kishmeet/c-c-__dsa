#include<stdio.h>
struct Address
{
char city [50];
char state [50];
int pin_code;
};
struct Employee
{
struct Address a;
};
int main(){
    struct Employee e;
    printf("Enter city state pin_code \n");
    scanf("%s %s %d",&e.a.city,&e.a.state,&e.a.pin_code);
printf("Employee details:\nCity: %s\nState: %s\nPin_Code: %d",e.a.city,e.a.state,e.a.pin_code);
}
