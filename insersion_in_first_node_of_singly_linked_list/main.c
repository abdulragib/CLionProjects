#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main() {

    struct node *firstNode=NULL;//creating head node or first node
    firstNode=(struct node*)(malloc(sizeof(struct node)));
    firstNode->data=10;
    firstNode->link=NULL;

    struct node *secondNode;//creating second node
    secondNode=(struct node*)(malloc(sizeof(struct node)));
    secondNode->data=15;
    secondNode->link=NULL;

    firstNode->link=secondNode;//assigning second node address to head node

    struct node *thirdNode=NULL;//creating thirdNode
    thirdNode=(struct node*)(malloc(sizeof(struct node)));
    thirdNode->data=20;
    thirdNode->link=NULL;

    secondNode->link=thirdNode;//creating thirdNode address to secondNode

    struct node *head=firstNode;//assigning head node address;

    struct node *ptrone=head;

    printf("Before deletion :\n");
    while(ptrone!=NULL){
        printf("%d->",ptrone->data);
        ptrone=ptrone->link;
    }

    if(head==NULL){
        printf("List is alrady empty!");
    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else{
        struct node *temp=head;
        struct node *temp2=head;

        while(temp->link!=NULL){
            temp2=temp;
            temp=temp->link;
        }
        temp2->link=NULL;
        free(temp);
        temp=NULL;
    }
    struct node *ptr=head;

    printf("\nAfter deletion :\n");
    while(ptr!=NULL){
        printf("%d->",ptr->data);
        ptr=ptr->link;
    }

    return 0;
}
