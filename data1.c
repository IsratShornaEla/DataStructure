#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int a;
    struct Node* head;
};
void Node{
}
typedef struct Node node;
int main()
{
    node *pt;
    pt=(node*)malloc(sizeof(node));
    pt->a=1;
    printf("%d\n",pt->a=1);
    pt->head=(node*)malloc(sizeof(node));
    pt->head->a=2;
    printf("%d\n", pt->head->a=2);
    pt->head->head=(node*)malloc(sizeof(node));
    pt->head->head->a=3;
    printf("%d\n", pt->head->head->a=3);
    pt->head->head->head=NULL;
    return 0;



}
