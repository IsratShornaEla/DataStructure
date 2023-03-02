#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*start=NULL;

void create()
{
    int num,i;
    struct node *new_node,*current;
    printf("\nEnter the num of nodes:");
    scanf("%d",&num);
    for(i=1; i<=num; i++)
    {
        new_node=(struct node*)malloc(sizeof(struct node));
        printf("\nEnter the value of data:");
        scanf("%d",&new_node->data);
        new_node->next=NULL;
        if(start==NULL)
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
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        printf("%d-->",current->data);
        current=current->next;
    }
    printf("NULL");
}
void f_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of first data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    start=new_node;
    new_node->next=current;

}

void l_insert()
{
    struct node *new_node,*current;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value of last data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    while(current->next!=NULL)
    {
        current=current->next;

    }
    current->next=new_node;

}

int search(int key)
{
    struct node *current;
    int pos=0;
    current= start;
    //printf("\nIN key:%d\n",key);

    while(current!=NULL)
    {
        pos++;

        if(key==current->data)
        {
            break;
        }
        current=current->next;

    }

    return pos;

}

void m_insert()
{
    int key,pos,i;
    struct node *new_node,*current,*temp,*temp1;
    new_node=(struct node*)malloc(sizeof(struct node));
    printf("\nEnter the value for middle data:");
    scanf("%d",&new_node->data);
    new_node->next=NULL;
    current=start;
    printf("\nEnter the data for insert before:");
    scanf("%d",&key);
    pos=search(key);
    //printf("\nin POS=%d",pos);
    for(i=1; i<=(pos-2); i++)
    {
        current=current->next;
    }
    temp1=current;
    temp=current->next;
    temp1->next=new_node;
    new_node->next=temp;
}

void l_delete()
{
    if(start==NULL)
    {
        printf("\nThere is no data to delete \n");
        exit(0);
    }
    struct node *current,*temp,*temp1;
    int i,key,pos;
    printf("\nEnter your data to delete\n");
    scanf("%d",&key);
    pos=search(key);
    current=start;
    for(i=1; i<=(pos-1); i++)
    {
        current=current->next;
    }
    if(start==current)
    {
        start=current->next;
    }
    else if(current->next==NULL)
    {
        current=start;
        for(i=1; i<=(pos-2); i++)
        {
            current=current->next;
        }
        current->next=NULL;
    }
    else
    {
        temp=current;
        current=start;
        for(i=1; i<=(pos-2); i++)
        {
            current=current->next;
        }
        current->next=temp->next;
    }
    printf("\n Delete Successful\n");
}


void count()
{
    int c=0;
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        current=current->next;
        c++;
    }
    printf("\nThere are %d num of nodes in the link list",c);
}

void l_max()
{
    int max=-1000;
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        if(current->data>max)
        {
            max=current->data;

        }
        current=current->next;
    }
    printf("\nThe max num is:%d",max);
}


void l_min()
{
    int min=10000;

    struct node *current;
    current=start;
    while(current!=NULL)
    {
        if(current->data<min)
        {
            min=current->data;


        }
        current=current->next;
    }
    printf("\nThe min num is:%d",min);
}

void sum()
{
    int sum=0;
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        sum+=current->data;
        current=current->next;
    }
    printf("\nThe summation of the link list:%d",sum);
}


void avg()
{
    float sum=0,avg=0,n=0;
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        sum+=current->data;
        current=current->next;
        n++;
    }
    avg=sum/n;

    printf("\nThe average value of the link list:%f",avg);
}

void r_display()
{
    int n=0,i=0,j=0;
    struct node *current;
    current=start;
    while(current!=NULL)
    {
        n++;
        current=current->next;
    }
    printf("\nNULL");

    for(i=n;i>=1;i--)
    {

        current=start;
        for(j=1;j<=i-1;j++)
        {

            current=current->next;


        }
        printf("-->%d",current->data);
    }

}

void swap(struct node *prev,struct node *next)
{
    //printf("\nIn swap prev data=%d and next data=%d",prev->data,next->data);
    int temp;
    temp=prev->data;
    prev->data=next->data;
    next->data=temp;

}

void sort()
{
    int n=0,i=0,j=0;
    struct node *current,*prev,*next;
    current=start;
    while(current!=NULL)
    {
        n++;
        current=current->next;
    }

    for(i=1;i<=n-1;i++)
    {
        current=start;
        for(j=1;j<=n-1;j++)
        {
            prev=current;
            next=current->next;
            if(prev->data>next->data)
            {
                swap(prev,next);
            }
            current=current->next;

        }
    }
    printf("\nAfter swap:");
    display();

}

int main()
{
    char choice,ch;
    int chh,key,pos;
    create();


    do
    {
        printf("C---for create ll.\nT---for display ll.\nI---for insert.\nD---fo delete.\nS---for search.\nM---for finding maximum.\nN---for finding minimum.\nA---for summation.\nG---for average.\nW---for swap.\nR---for reverse display.\nB---for sorting.\nQ---for count.\n");
        printf("\nEnter your choice:");
        choice=getch();
        //printf("\n\nchoice=%c",choice);
        if(choice=='c'||choice=='C')    create();
        else if(choice=='t'||choice=='T')   display();
        else if(choice=='D'||choice=='d')   l_delete();
        else if(choice=='I'||choice=='i')
            {
                printf("\n1--for first insert.\n2--for middle insert.\n3--for last insert.\nEnter your choice:");
                scanf("%d",&chh);
                if(chh==1) f_insert();
                else if(chh==2) m_insert();
                else l_insert();
            }
        else if(choice=='S'||choice=='s')
            {
                printf("\n Enter your key for search:");
                scanf("%d",&key);
                pos=search(key);
                printf("\nThe item is at %d position in the link list.",pos);

            }
        else if(choice=='Q'||choice=='q')   count();
        else if(choice=='M'||choice=='m')   l_max();
        else if(choice=='N'||choice=='n')   l_min();
        else if(choice=='A'||choice=='a')   sum();
        else if(choice=='G'||choice=='g')   avg();
        else if(choice=='R'||choice=='r')   r_display();
        else if(choice=='B'||choice=='b')   sort();
        else if(choice=='W'||choice=='w')
        {
            int n1,n2,pos1,pos2,i;
            struct node *current,*temp1,*temp2;
            printf("\n Enter the 2 num n1 and n2 for swap:");
            scanf("%d %d",&n1,&n2);
            printf("\nBefore swap the Link list:");
            display();
            pos1=search(n1);
            pos2=search(n2);
            current=start;
            for(i=1;i<=pos1-1;i++)
            {
                current=current->next;
            }
            temp1=current;
            //printf("\ntemp1 data:%d",temp1->data);

            current=start;
            for(i=1;i<=pos2-1;i++)
            {
                current=current->next;
            }
            temp2=current;
            //printf("\ntemp2 data:%d",temp2->data);
            swap(temp1,temp2);
            printf("\nAfter swap the Link list:");
            display();

        }
        else
        {
            printf("\nWrong choice!!!\nEnter Rigt choice.\n");
        }

        printf("\n\nY--for again run\nE---for exit.\nEnter your choice:");
        ch=getch();
        printf("\n\n");
    }while(ch=='y'||ch=='Y');
    return 0;
}
