#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};
struct node *rear=NULL;
struct node *front=NULL;
void enqueue();
void dequeue();
void display();
int main()
{

    while(1)
    { int ch;

        printf("\n 1.Enqueue or Insert");
        printf("\n 2.Dequeue or Delete");
        printf("\n 3.Display");
        printf("\n 4.Exit\n");

        printf("Enter choice :");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                enqueue();
                break;

            case 2:
                dequeue();
                break;

            case 3:
                display();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("invalid input ");
                break;
        }
    }
}


void enqueue() {
    struct node *ptr=(struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter value:");
    scanf("%d",&data);
    ptr->data=data;
    ptr->next=NULL;

    if(front==NULL)
    {
        front=ptr;
        rear=ptr;
    }
    else{
        rear->next=ptr;
        rear=ptr;
    }
    printf("\n Insertion is success !!!\n");
}

void dequeue() {
    if(front==NULL)
    {
        printf("\n Queue is Empty !!!");
    }
    else{
        struct node *temp=front;
        front=front->next;
        printf("\n Deleted element: %d \n",temp->data);
        free(temp);
    }
}

void display()
{
    if(front==NULL)
    {
        printf("\n Queue is Empty !!!\n");
    }
    else{
        struct node *temp=front;
        while(temp!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
    }
}


