#include <stdio.h>
#include <stdlib.h>
struct node {
    int data;
    struct node *next;
};

struct node *head=NULL;
void createList();
void display();
void insertion_end();
int main() {

    createList(10);
    createList(20);
    createList(30);
    printf("Before insertion: ");
    display();
    printf("\nAfter insertion: ");
    insertion_end(7);
    display();
    return 0;
}
void createList(int x){
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    if(head==NULL)
    {
        ptr->data=x;
        ptr->next=NULL;
        head=ptr;
    }
    else{
        struct node *temp=head;
        ptr->next=temp;
        ptr->data=x;
        head=ptr;
    }
}

void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
}

void insertion_end(int x){
    struct node *temp=head;
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=ptr;
    ptr->data=x;
    ptr->next=NULL;
}
