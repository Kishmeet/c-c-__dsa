#include<stdio.h>
#include<malloc.h>
struct employee
{
    int id;
    char name[50] ;
    float salary;
};
int main()
{
    struct employee *a=(struct employee*)malloc(sizeof(struct employee));
    printf("Enter Employee id ");
    scanf("%d",&a->id);
    getchar();
    printf("\nEnter Name of the Employee ");
    fgets(a->name,50,stdin);
    printf("\nEnter Salary of the Employee ");
    scanf("%f",&a->salary);
    printf("Employee Details:\nId-%d\nName-%sSalary-%f\n",a->id,a->name,a->salary);
}