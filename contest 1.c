void print(Node *head)
{
    head=(Node*)malloc(sizeof(Node));
    while(head!=NULL)
    {

        printf("%d\n",head->data);
        head=head->next;
    }
}
