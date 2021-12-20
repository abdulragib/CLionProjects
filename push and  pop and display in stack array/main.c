
#include<stdio.h>
#include<stdlib.h>
void push();
void display();
void pop();
int top=-1;
int arr[5];
int main()
{
    printf("How many element u want to put in array : \n");

    int choice;
    printf("Which operation Your want to select : \n");
    printf("1 for push-> \n 2 for display->\n 3 for pop-> \n 4 for exit->");
    while(choice!=4) {

        printf("\nEnter choice:");
        scanf("%d",&choice);

        switch (choice) {

            case 1:
                push();
                break;


            case 2:
                display();
                break;

            case 3:
                pop();
                break;

            case 4:
                exit(0);
                break;

            default:
                printf("Not valid input: ");
                break;
        }
    }
}

void push(){

    if(top==arr-1)//last node
    {
        printf("overflow");
    }
    else
    {
        int value;
        printf("Enter value :");
        scanf("%d",&value);
        top++;
        arr[top]=value;

    }
}

void pop()
{
    int value;
    if(top == -1)
        printf("Underflow");
    else
    { value=arr[top];
        printf("item deleted=%d\n",value);
        top = top -1;
    }
}

void display()
{
    if(top==-1)
    {
        printf("underFlow");
    }
    else{
        for(int i=top;i>=0;i--)
        {
            printf("%d->",arr[i]);
        }
    }

}
