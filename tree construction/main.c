#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node * createNode(int);

struct node * createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->left=NULL;
    n->data=data;
    n->right=NULL;
    return n;
}

int main()
{
    struct node *ptr= createNode(1);
    struct node *ptrOne= createNode(2);
    struct node *ptrTwo= createNode(3);
    struct node *ptrThree= createNode(4);

    ptr->left=ptrOne;
    ptr->right=ptrTwo;
    ptrOne->left=ptrThree;
    return 0;
}
