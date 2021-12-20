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
void deletion_at_Particular_position();
void main()
{
    createList(10);
    createList(20);
    createList(30);
    createList(40);
    printf("Before Deletion ...");
    display();
    deletion_at_Particular_position();
    printf("\nAfter Deletion ...\n");
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

void deletion_at_Particular_position(){
    struct node *ptr,*ptrOne,*ptrTwo;
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
    int position;
    printf("\nEnter the position U want to delete: ");
    scanf("%d",&position);

    while(position>1)
    {

        ptrOne=ptr;
        ptr=ptr->next;
        ptrTwo=ptr->next;
        position--;
    }
    free(ptr);
    ptr=NULL;
    ptrOne->next=ptrTwo;
    ptrTwo->prev=ptrOne;
}


