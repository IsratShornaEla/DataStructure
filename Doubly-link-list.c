#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*start=NULL,*tail=NULL;

void create()
{
    struct node *current,*new_node;
    int i,n;
    printf("Enter the num of nodes:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the value of data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        new_node->prev=NULL;
        if(start==NULL)
        {
            start=new_node;
            tail=new_node;
            current=new_node;
            printf("\nIn if\n");
        }
        else
        {
            current->next=new_node;
            new_node->prev=current;
            tail=new_node;
            current=new_node;
            printf("\nIn else\n ");
        }

    }
}

void display()
{
    char ch;
    struct node *current;
    printf("S for displaying from start \n E for displaying from end.\n Enter your choice:");
    ch=getch();
    printf("The dubbly link list is:\n");
    if(ch=='S'||ch=='s')
    {
        current=start;
        while(current!=NULL)
        {
            printf("%d-->",current->data);
            current=current->next;
        }
        printf("NULL");

    }
    else
    {
        current=tail;
        while(current!=NULL)
        {
            printf("%d-->",current->data);
            current=current->prev;
        }
        printf("NULL");
    }

}


void main()
{
    create();
    display();
}
