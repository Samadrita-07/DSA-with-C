#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int queue[10],rear=-1,front=-1;

int isfull() //checking queue full
{
    if(rear==MAX-1)
        return 1;
    else
        return 0;
}

void enqueue() //insertion
{
    if(isfull()==1)
        printf("Queue is Full");
    else
    {
        rear=rear+1;
        printf("Enter data: ");
        scanf("%d",&queue[rear]);
        if(rear==0)
            front=0;
    }
}

int isempty() //checking queue empty
{
    if(front==-1 && rear==-1)
        return 1;
    else
        return 0;
}

void dequeue() //deletion
{
    int data;
    if(isempty()==1)
        printf("Queue is Empty");
    else
    {
        data=queue[front];
        if(rear==front)
        {
            rear=-1;
            front=-1;
        }
        else
            front=front+1;
        printf("Deleted Element is %d",data);
    }
}

void display() //displaying the elements
{
    int i;
    if(isempty()==1)
        printf("Queue is Empty");
    else
    {
        printf("Queue Elements are...\n");
        for(i=front;i<=rear;i++)
            printf("%d|",queue[i]);
    }
}

void search() //searching any elements
{
    int key,i,flag=0;
    printf("Enter an element to search: ");
    scanf("%d",&key);
    for(i=front;i<=rear;i++)
    {
        if(queue[i]==key)
        {
            flag++;
            break;
        }
    }
    if(flag!=0)
        printf("Element %d found",key);
    else   
        printf("Element %d not found!",key);
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n***QUEUE OPERATION***\n");
        printf("1.Press 1 for ENQUEUE\n2.Press 2 for DEQUEUE\n3.Press 3 for DISPLAY\n4.Press 4 for SEARCH\n5.Press 5 for EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:enqueue();
                    break;
            case 2:dequeue();
                    break;
            case 3:display();
                    break;
            case 4:search();
                    break;
            case 5:printf("Exiting from the program...");
                    exit(0);
            default:printf("Wrong Choice!!");
        }
    }
    return 0;
}
