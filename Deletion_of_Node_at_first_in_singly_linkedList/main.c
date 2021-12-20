#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};

int main() {

    struct node *head=NULL;

    struct node *firstNode;
    firstNode=(struct node *)(malloc(sizeof(struct node)));
    firstNode->data=10;
    firstNode->link=NULL;

    head=firstNode;

    struct node *secondNode;
    secondNode=(struct node *)(malloc(sizeof(struct node)));
    secondNode->data=20;
    secondNode->link=NULL;

    firstNode->link=secondNode;

    struct node *thirdNode;
    thirdNode=(struct node *)(malloc(sizeof(struct node)));
    thirdNode->data=30;
    thirdNode->link=NULL;

    secondNode->link=thirdNode;

    head=firstNode;

    if(head==NULL)
    {
        printf("List is Empty");
    }
    else if(head->link==NULL)
    {
        free(head);
        head=NULL;
    }
    else{
        struct node *temp=head;

        free(temp);
        temp=NULL;
        head=secondNode;
        struct node *ptr=head;

        while(ptr!=NULL){
            printf("%d",ptr->data);
            ptr=ptr->link;
        }
    }

    return 0;
}
