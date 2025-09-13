#include <stdio.h>
#include <malloc.h>
#include<math.h>
#define PI 3.14f
struct circle
{
    float radius;
    float area;
};
int main()
{
    struct circle *a = (struct circle *)malloc(sizeof(struct circle));
    printf("Enter Radius of the Circle ");
    scanf("%f",&a->radius);
    a->area=PI*pow(a->radius,2);
    printf("\n Area of circle with Radius:%f is %f(unit^2)",a->radius,a->area);
}