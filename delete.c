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
    printf("%d inserted\n",data);
}

void display(node *list)
{
    while(list->next!=NULL)
    {
        printf("%d  ",list->data);
        list=list->next;
    }
    printf("%d\n",list->data);
}

void delete(node *list,int data)
{
    node *temp;
    while(list->next->data!=data)
    {
        list=list->next;
    }
    temp=list->next;
    list->next=temp->next;
    free(temp);
    printf("%d deleted!!\n",data);

}

int main()
{
    node *list;
    list=(node*)malloc(sizeof(node));
    list->next=NULL;
    insert(list,3);
    insert(list,5);
    insert(list,7);
    insert(list,9);
    display(list->next);
    delete(list,9);
    display(list->next);
    return 0;
}
