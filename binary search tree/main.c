#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node * createNode(int);
struct node *root;
struct node * createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->left=NULL;
    n->data=data;
    n->right=NULL;
    return n;
}

void insert();
int  SearchInTree(int);
int main()
{
    insert();
    int x=SearchInTree(7);
    printf("%d found",x);
    return 0;
}

void insert()
{
    struct node *ptr= createNode(5);
    struct node *ptrOne= createNode(3);
    struct node *ptrTwo= createNode(8);
    struct node *ptrThree= createNode(2);
    struct node *ptrFour= createNode(4);
    struct node *ptrFive= createNode(7);
    struct node *ptrSix= createNode(9);

    root=ptr;
    ptr->left=ptrOne;
    ptr->right=ptrTwo;
    ptrOne->left=ptrThree;
    ptrOne->right=ptrFour;

    ptrTwo->left=ptrFive;
    ptrTwo->right=ptrSix;
}

int SearchInTree(int data)
{
    struct node *current=root;
    while(current->data != data)
    {
        if(current!=NULL)
        {
            printf("%d\n", current->data);
        }

        if(data<current->data)
        {
            current=current->left;
        }
        else{
            current=current->right;
        }

        if(current==NULL)
        {
            return NULL;
        }
    }
    return current->data;
}


//#include <stdio.h>
//#include <stdlib.h>
//
//struct node{
//    int data;
//    struct node* left;
//    struct node* right; //sir i have tried a different approach
//};
//
//struct node* create(int item)
//{
//    struct node* newNode=(struct node*)malloc(sizeof(struct node));
//    newNode->data=item;
//    newNode->left=NULL;
//    newNode->right=NULL;
//    return newNode;
//}
//struct node* search(struct node* root,int data)
//{
//    int item=data;
//    struct node* current=root;
//    printf("Visiting nodes: \n");
//    if(current==NULL)
//    {
//        return NULL;
//    }
//    while(current!=NULL)
//    {printf("%d->",current->data);
//        if(current->data==item)
//        {
//            printf("\nValue found");
//            break;
//        }
//        else if(current->data>item)
//        {
//            current=current->left;
//        }
//        else{
//            current=current->right;
//        }
//    }
//    if(current==NULL)
//    {
//        printf("Value not found");
//    }
//    return current;
//}
//
//int main()
//{
//    struct node* root=(struct node*)malloc(sizeof(struct node*));
//    root->data=5;
//    root->left=NULL;
//    root->right=NULL;
//    root->left=create(3);
//    root->left->left=create(2);
//    root->left->right=create(4);
//    root->right=create(8);
//    root->right->left=create(7);
//    root->right->right=create(9);
//    search(root,10);
//    return 0;
//}