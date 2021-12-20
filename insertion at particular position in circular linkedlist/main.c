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
void insertion_position(int x);
int main()
{
    createList(5);
    createList(10);
    createList(15);
    printf("Before Insertion: ");
    display();
    circular();
    printf("\nAfter Insertion: \n");
    insertion_position(50);
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

void insertion_position(int x){
    int position;
    struct node *temp=head,*tempOne,*tempTwo;
    printf("Enter the Position : ");
    scanf("%d",&position);
    while(position>1)
    {
        tempOne=temp;//previous position node address
        temp=temp->next;
        tempTwo=temp;//current position node address
        position--;
    }

    struct node *ptr=malloc(sizeof(struct node));
    ptr->prev=tempOne;
    ptr->next=temp;
    ptr->data=x;
    tempOne->next=ptr;
    tempTwo->prev=ptr;

}
