#include<stdio.h>
#include<malloc.h>
struct link
{
    int data;
    struct link *next;
};
struct link *head=NULL;
struct link *temp=NULL;
struct link *ptr=NULL;
void accept()
{
    ptr=(struct link *)malloc(sizeof(struct link));
    printf("Enter data ");
    scanf("%d",&ptr->data);
    ptr->next=NULL;
    if (head==NULL)
    {
        head=ptr;
    }
    else{
        ptr->next=head;
        head=ptr;
    }
    
}
void dispaly()
{
    if (head==NULL)
    {
        printf("Empty linked list");

    }
    else{
        temp=head;
        while (temp!=NULL)
        {
            printf("%d ",temp->data);
        temp=temp->next;
        }
        
    }
    
}
int main( )
{     int choice=0;
while (1)
{ printf("Enter choice 1/2/3 ");
scanf("%d",&choice);
if (choice==1)
{
    accept();
}
else if(choice==2)
{
    dispaly();
}

else{
    break;
}
}

}
