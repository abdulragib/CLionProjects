#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

void createList();
void display();
void insertion_beg();
void circular_list();
void display_circular_list();
struct node *head=NULL;
int main()
{
    createList(10);
    createList(20);
    createList(30);
    printf("before insertion : ");
    display();
    circular_list();
    insertion_beg(5);
    printf("\nAfter insertion : ");
    display_circular_list();
}

void createList(int x) {
    struct node *ptr=malloc(sizeof(struct node));
    if(head==NULL)
    {
        ptr->prev=NULL;
        ptr->next=NULL;
        ptr->data=x;
        head=ptr;
    }
    else{
        struct node *ptrOne=head;
        while(ptrOne->next!=NULL)
        {
            ptrOne=ptrOne->next;
        }
        ptr->next=NULL;
        ptr->data=x;
        ptr->prev=ptrOne;
        ptrOne->next=ptr;
        ptrOne->prev=NULL;
    }
}

void circular_list()
{
    struct node *ptrThree=head,*ptrFour,*ptrFive;
    while(ptrThree->next!=NULL)
    {
        ptrThree=ptrThree->next;
    }
    ptrFour=ptrThree;
    ptrFive=ptrThree;
    ptrThree->next=head;

    while(ptrFive->prev!=NULL)
    {
        ptrFive=ptrFive->prev;
    }
    ptrFive->prev=ptrFour;

}

void display()
{
    struct node *ptrTwo;
    ptrTwo=head;
    while(ptrTwo!=NULL)
    {
        printf("%d->",ptrTwo->data);
        ptrTwo=ptrTwo->next;
    }
}

void display_circular_list()
{
    struct node *ptrSix;
    ptrSix=head;
    do{
        printf("%d->",ptrSix->data);
        ptrSix=ptrSix->next;
    }
    while(ptrSix!=head);
}

void insertion_beg(int x){
    struct node *ptrAdd=malloc(sizeof(struct node));
    struct node *ptr=head,*temp=head;
    struct node *ptrOne=head->prev;

    ptrAdd->data=x;
    ptrAdd->prev=ptrOne;
    ptrAdd->next=ptr;
    head->prev=ptrAdd;

    while(temp->next!=head)
    {
        temp=temp->next;
    };
    head=ptrAdd;
    temp->next=head;

}

