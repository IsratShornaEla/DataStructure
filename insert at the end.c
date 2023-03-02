
#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
};

typedef struct Node node;

void insert(node *list,int data)
{
    node *temp;
    temp=(node*)malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    while(list->next!=NULL)
    {
        list=list->next;
    }
    list->next=temp;
    printf("%d is inserted!\n",data);
}
void display(node *list)
{
    while(list->next!=NULL)
    {
        printf("%d\t",list->data);
        list=list->next;
    }
    printf("%d\n",list->data);
}

void insert_after(node *list,int data)
{
 if(list==NULL)
 {
 printf("previous node cann't be NULL!");
 }
 node *temp= (node*)malloc(sizeof(node));
 temp->data=data;
 temp->next=list->next;
 list->next=temp;
}

int main()
{
    node *list;
    list=(node*)malloc(sizeof(node));
    list->next=NULL;
    insert(list,3);
    insert(list,4);
    insert(list,78);
    insert(list,123);
    display(list->next);
    insert_after(list,8);
    display(list->next);
    return 0;
}
