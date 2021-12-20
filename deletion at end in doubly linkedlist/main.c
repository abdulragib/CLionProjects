#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    struct node *next;
    int data;
};

struct node *head=NULL;
void createList(int);
void display();
void deletion_end();

void main()
{
    createList(10);
    createList(20);
    createList(30);
    printf("Before Deletion ...");
    display();
    printf("\nAfter Deletion ...\n");
    deletion_end();
    display();

}

void createList(int value) {
    struct node *ptr,*temp;
    ptr=(struct node *)malloc(sizeof(struct node));

    if(head==NULL)
    {

        ptr->data=value;
        ptr->prev=NULL;
        ptr->next=NULL;
        head=ptr;
    }
    else{
        temp=head;
        ptr->data=value;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
        ptr->next=NULL;

    }
}

void display() {
    struct node *ptr;
    ptr=head;
    printf("\nprinting values ...\n");
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr=ptr->next;
    }
}

void deletion_end(){
    struct node *ptr,*ptrOne;
    ptr=head;
    if(head==NULL)
    {
        printf("list is empty");
    }
    if(head->next==NULL)
    {
        free(head);
        printf("Node Deleted");
    }

    while(ptr->next!=NULL)
    {
        ptrOne=ptr;
        ptr=ptr->next;
    }
    free(ptr);
    ptrOne->next=NULL;
    printf("\nLast Node Deleted");
}



