#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node*next;
}
*start=NULl;
void ll_create()
{
    int num,i;
    struct node *new_node,*current;
    printf("Enter the num of nodes:");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("Enter the valu of data: ");
        scanf("%d",new_node->data);
        if (start=NULL)
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
struct node*new_node;
curret=start }



int main()
{
    ll_create()
}
