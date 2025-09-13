#include<stdio.h>
#include<malloc.h>
struct abc
{
    int a;
    struct abc *node;
};
int main()
{ struct abc *a1,*a2,*a3,*head=NULL,* temp;
head=a1;
a1=(struct abc *)malloc(sizeof(struct abc));
a2=(struct abc *)malloc(sizeof(struct abc));
a3=(struct abc *)malloc(sizeof(struct abc));
printf("Enter three integer values ");
scanf("%d %d %d",&a1->a,&a2->a,&a3->a);
a1->node=a2->node=a3->node=NULL;
head=a1;
a1->node=a2;
a2->node=a3;
a3->node=NULL;
temp=head;
while (temp!=NULL)
{
    printf("%d ",temp->a);
    temp=temp->node;
}

}