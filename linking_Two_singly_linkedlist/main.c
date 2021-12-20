#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* link;
};

int main() {
    struct node *head= NULL; //creating head node which is very first node
    head=(struct node*)(malloc(sizeof(struct node)));
    head->data=45;
    head->link=NULL;

    struct node *nodeOne=NULL;//creating second node which is very second node
    nodeOne=(struct node*)(malloc(sizeof(struct node)));
    nodeOne->data=50;
    nodeOne->link=NULL;

    head->link=nodeOne;// linking second node with first node

    printf("%d",head->link->data);
    return 0;
}
