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
void rev()
{
    struct node *current,*p,*q,*temp;
    int len,i,j,l=0;
    printf("\n Linked list reverse: ");
    p=q=start;
    current=start;
    while(current!=NULL)
    {
       l++;
        current=current->next;
    }
    len=l;
    i=0;
    j=l-1;
    while(i<j)
    {
        int k=0;
        while(k<j)
        {
            q=q->next;
            k++;
        }
        temp=p->data;
        p->data=q->data;
        q->data=temp;
        i++;
        j--;
        p=p->next;
        q=start;
    }
}
int main()
{
    create();
    display();
    rev();
    display();
    return 0;
}
