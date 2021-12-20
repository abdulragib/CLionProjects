#include <stdio.h>
#include <stdlib.h>
void createList(int);
void display();
void pop();
void linearsearch();
struct node{
    struct node *link;
    int data;
};
struct node *head=NULL;

int main() {
    int choice;
    while(choice!=5) {
        printf("\n1 for push \n 2 for display\n 3 for pop \n 4 for linearSearch \n 5 for exit\n");
        printf("\nEnter choice :\n");
        scanf("%d", &choice);
        switch (choice) {
            case 1: {
                int value;
                printf("Enter value: ");
                scanf("%d", &value);
                createList(value);
                break;
            }

            case 2:
                display();
                break;

            case 3:
                pop();
                break;

            case 4:
                linearsearch();
                break;

            case 5:
                exit(0);

            default:
                printf("\n<---invalid input--->\n");
        }
    }

    return 0;
}

void createList(int x)
{
    struct node *ptr=malloc(sizeof(struct node));
    if(head==NULL)
    {
        ptr->link=NULL;
        ptr->data=x;
        head=ptr;
        printf("\nvalue inserted %d\n",x);
    }
    else{
        struct node *temp=head;
        ptr->link=temp;
        ptr->data=x;
        head=ptr;
        printf("\nvalue inserted %d",x);
    }
}

void pop()
{
    if(head==NULL)
    {
        printf("underflow");
    }

    else{
        struct node *temp=head;
        head=head->link;
        free(temp);
    }
}

void display()
{
    struct node *temp=head;
    while(temp!=NULL)
    {

        printf(" %d\n",temp->data);
        temp=temp->link;
    }

}

void linearsearch(){
    struct node *temp=head;
    int find;
    printf("Enter element u want to find in stack :");
    scanf("%d",&find);
    while(temp!=NULL)
    {

        if(find==temp->data)
        {
            printf("%d found",find);
            break;
        }

        temp=temp->link;
    }
    if(temp==NULL)
    {
        printf("\nElement not found");
    }
}

