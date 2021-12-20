#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *link;
};

int main() {

    struct node *first=NULL;//creating head node or first node
    first=(struct node*)(malloc(sizeof(struct node)));
    first->data=10;
    first->link=NULL;

    struct node *secondNode;//creating second node
    secondNode=(struct node*)(malloc(sizeof(struct node)));
    secondNode->data=15;
    secondNode->link=NULL;

    first->link=secondNode;//assigning second node address to head node

    struct node *thirdNode;//creating thirdNode
    thirdNode=(struct node*)(malloc(sizeof(struct node)));
    thirdNode->data=20;
    thirdNode->link=NULL;

    secondNode->link=thirdNode;//creating thirdNode address to secondNode

    struct node *head=first,*temp;//creating temp node for traversing the node

    if(head==NULL)
    {
        printf("List is Empty");
    }

   temp=head;

    while(temp->data!=NULL)//travering all the node
    {
        printf("%d->",temp->data);
        temp=temp->link;
    }

    return 0;
}
