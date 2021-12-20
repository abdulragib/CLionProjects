#include <stdio.h>
#include<stdlib.h>

struct node {
    struct node *prev;
    int data;
    struct node *next;
};


void deletion_last();

int main() {
    deletion_last();
    return 0;
}

void deletion_last()
{
    struct node *first;
    first=(struct node *)(malloc(sizeof(struct node)));
    first->prev=NULL;
    first->data=10;
    first->next=NULL;

    struct node *second;
    second=(struct node *)(malloc(sizeof(struct node)));
    second->prev=first;
    second->data=20;
    second->next=NULL;

    first->next=second;


    struct node *third;
    third=(struct node *)(malloc(sizeof(struct node)));
    third->prev=second;
    third->data=30;
    third->next=NULL;

    second->next=third;


    struct node *head=first;
    struct node *ptr,*ptrone,*ptrtwo=head;

    printf("Before Deletion: \n");
    while(ptrtwo!=NULL){
        printf("%d->",ptrtwo->data);
        ptrtwo=ptrtwo->next;
    }

    if(head == NULL)
    {
        printf("\n UNDERFLOW");
    }
    else if(head->next == NULL)
    {
        head = NULL;
        free(head);
        printf("\nnode deleted\n");
    }
    else
    {
        ptr = head;
        while(ptr->next != NULL)
        {
            ptr = ptr -> next;
        }
        ptr->prev->next=NULL;
        second->next=NULL;
        free(ptr);
         ptrone=head;
         printf("\nAfter Deletion:\n");

         while(ptrone!=NULL){
             printf("%d->",ptrone->data);
             ptrone=ptrone->next;
         }

    }

}