#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
typedef struct Node node;
void insert(node *list, int data)
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
    printf("%d inserted!\n", data);

}
void display(node *list)
{
    while(list->next!=NULL)
    {
        printf("%d ", list->data);
        list=list->next;
    }
    printf("%d\n ", list->data);
}
void insert_after(int value, node *list, int data) {
	node *temp = (node *)malloc(sizeof(node));
	temp->data = value;
	while (list!= NULL) {
		if (list->data == data) {
			temp->next = list->next;
			list = list->next;
	}
			printf("%d Inserted succesfully after %d!\n",value,data);
			return;
		}list->next = temp;

	printf("%d not found!\n", data);
}
int main()
{
    node *list;
    list=(node*)malloc(sizeof(node));
    list->next=NULL;
    insert(list, 3);insert(list, 7);
    insert (list, 9); insert (list, 11);
    display(list->next);
    insert_after(5,list,7);
    display(list->next);
    return 0;
}
