#include<stdio.h>
#include<stdlib.h>

struct node {
    struct node *left;
    int data;
    struct node *right;
};

struct node * createNode(int);
struct node *root;
int count=0;
struct node * createNode(int data)
{
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->left=NULL;
    n->data=data;
    n->right=NULL;
    return n;
}

void constructTree();
int  SearchInTree(int);
void insert();
int main()
{
    constructTree();
    int  data=SearchInTree(5);
    printf("%d found at %d level \n",data,count);
    return 0;
}

void constructTree()
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
        count++;
        if(current!=NULL)
        {
            printf("%d\n",current->data);
        }

        if(data<current->data)
        {
            current=current->left;
        }
        else{
            current=current->right;
        }

        if(current->data==data)
        {
           return current->data;

        }

        if(current==NULL)
        {
            return NULL;
        }
    }
    return current->data;
}

