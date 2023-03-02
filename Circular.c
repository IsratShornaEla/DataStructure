#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL;

int n_node=0;


 void create()
 {
     int n,i;
     struct node *current,*new_node;
     printf("Enter the node number: ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         new_node=(struct node*)malloc(sizeof(struct node));
         printf("Enter the data:");
         scanf("%d",&new_node->data);
         new_node->next=NULL;
         if(start==NULL)
         {
             start=new_node;
             current=new_node;
             new_node->next=start;
         }
         else
         {
             current->next=new_node;
             current=new_node;
             new_node->next=start;
         }
         n_node++;

     }


 }

 void display()
 {
     struct node *current;
     current=start;
     int i;
     printf("The link list is:\n");
     for(i=1;i<=n_node;i++)
         {
         printf("%d-->",current->data);
         current=current->next;

     }
     printf("START");

 }

int main()
{
    create();
    display();
    return 0;
}
