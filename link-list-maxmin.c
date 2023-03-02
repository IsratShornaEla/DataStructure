#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
}*start=NULL;
void create()
{
    int i,n;
    printf("\nEnter the number of node: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        struct node *newnode,*current;
        newnode=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the data:");
        scanf("%d",&newnode->data);
        newnode->next=NULL;
        if(start==NULL)
        {
            start=newnode;
            current=newnode;
        }
        else
        {
            current->next=newnode;
            current=newnode;
        }
    }
}
void display()
{
    struct node *newnode;
    printf("\nLinked list: ");
    newnode=start;
    while(newnode!=NULL)
    {
        printf("%d--->",newnode->data);
        newnode=newnode->next;
    }
    printf("NULL");
}
void max()
{
    struct node *current;
    int n=-1;
    int max=n;
    current=start;
    while(current!=NULL)
    {
        if(max<current->data)
        {
            max=current->data;
        }
        current=current->next;
    }
     printf("\nLinked list's max: %d",max);
}
void min()
{
    struct node *current;
    int m=100000;
    int min=m;
    current=start;
    while(current!=NULL)
    {
        if(min>current->data)
        {
            min=current->data;
        }
        current=current->next;
    }
    printf("\nLinked list's min: %d",min);
}
int main()
{
    create();
    display();
    max();
    min();
    return 0;
}
