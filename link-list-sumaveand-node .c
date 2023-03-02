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
void sum()
{
    int s=0,i=0;
    double ave;
    struct node *current,*newnode;
    printf("\nLinked list sum:");
    current=start;
    while(current!=NULL)
    {
        i++;
        s+=current->data;
        current=current->next;
    }
    printf("%d",s);
     ave=s/(i*1.00);
    printf("\nLinked List average is: %0.2lf",ave);
    printf("\nNumber of node is: %d",i);
}
int main()
{
    create();
    display();
    sum();
    return 0;
}
