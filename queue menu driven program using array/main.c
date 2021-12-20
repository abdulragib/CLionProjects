#include<stdio.h>
#include<stdlib.h>
#define max 5

int arr[max];
int front=-1;
int rear=-1;
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

            default:
                printf("invalid input ");
                break;
        }
    }
}


void enqueue() {
    if(rear==max-1)
    {
        printf("overflow");
    }
    else{
        if(front==-1)
        {
            front=0;
        }
        int data;
        printf("Enter values :");
        scanf("%d",&data);
        rear++;
        arr[rear]=data;
    }
}

void dequeue() {
    if(front==-1 || front>rear)
    {
        printf("underflow");
    }
    else{
        printf("value deleted=%d",arr[front]);
        front++;
    }
}

void display()
{
    if(front==-1)
    {
        printf("Queue is Empty");
    }
    else{
        printf("Elements:");
        for(int i=front;i<=rear;i++)
        {
            printf("%d->",arr[i]);
        }
    }
}

