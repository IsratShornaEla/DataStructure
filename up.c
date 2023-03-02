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

void update(node *list,int data1,int data2)
{
     int data;
    while(list->data!=data1)
    {

        list=list->next;

    }
    list->data=data2;

    printf("%d is updated to %d!!\n",data1,data2);



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
    update(list,7,1);
    display(list->next);


    return 0;
}
