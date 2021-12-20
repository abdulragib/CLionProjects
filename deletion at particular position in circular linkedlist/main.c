#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head=NULL;
void createList(int i);
void circular();
void display();
void display_circular();
void delete_end();
int main()
{
    createList(5);
    createList(10);
    createList(15);
    printf("Before Deletion: ");
    display();
    circular();
    printf("\nAfter Deletion: \n");
    delete_end();
    display_circular();

}

void createList(int i) {
    struct node *ptr=malloc(sizeof(struct node));
    if(head==NULL)
    {
        ptr->prev=NULL;
        ptr->data=i;
        ptr->next=NULL;
        head=ptr;

    }
    else{
        struct node *temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
        ptr->next=NULL;
        ptr->data=i;
    }
}

void circular()
{
    struct node *tempOne=head,*tempTwo,*tempThree;
    while(tempOne->next!=NULL)
    {
        tempOne=tempOne->next;
    }
    tempTwo=tempOne;
    tempThree=tempOne;
    tempOne->next=head;

    while(tempThree->prev!=NULL)
    {
        tempThree=tempThree->prev;
    }
    tempThree->prev=tempTwo;
}

void display(){
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}

void display_circular(){
    struct node *temp=head;
    do{
        printf("%d->",temp->data);
        temp=temp->next;
    }
    while(temp!=head);
}

void delete_end()
{
    if(head==NULL)
    {
        printf("list is empty");
    }

    if(head->next==NULL)
    {
        free(head);
        head=NULL;
        printf("Node is deleated");
    }

    int position;
    printf(" Enter position :");
    scanf("%d",&position);

    struct node *temp=head,*tempTwo,*tempThree;
    while(position>1)
    {
        tempTwo=temp;
        temp=temp->next;
        tempThree=temp->next;
        position--;
    }
    tempTwo->next=tempThree;
    tempThree->prev=tempTwo;
    free(temp);
    temp=NULL;
}

