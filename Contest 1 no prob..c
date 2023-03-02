void Print(Node *head)
{
    int data;
    Node *temp;
    temp=(Node*)malloc(sizeof(Node));


    temp=head;
     temp->data=data;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->data;
    }

}

