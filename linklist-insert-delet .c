#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL;

void ll_create()
{
    int num,i;
    struct node *new_node,*current;
    printf("Enter the num of nodes:");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
        {
            start=new_node;
            current=new_node;
        }
        else
        {
            current->next=new_node;
            current=new_node;
        }
    }
}

void display()
{
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        printf("%d-->",current->data);
        current=current->next;
    }
    printf("NULL");
}
void f_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of first data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    start=new_node;
    new_node->next=current;

}

void l_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of last data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    while(current->next!=NULL)
    {
        current=current->next;

    }
    current->next=new_node;

}

int search(int key)
{
    struct node *current;
    int pos=0;
    current= start;
    printf("\nIN key:%d\n",key);

    while(current!=NULL)
    {
        pos++;

        if(key==current->data)
        {
            break;
        }
        current=current->next;

    }

    return pos;

}

void m_insert()
{
    int key,pos;
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of last data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    printf("\nEnter the data for insert before:");
    scanf("%d",&key);
    pos=search(key);
    printf("\nin POS=%d",pos);



}


int main()
{
    ll_create();
    display();
    f_insert();
    display();
    l_insert();
    display();
    m_insert();

}
