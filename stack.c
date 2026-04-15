#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int stack[10],top=-1;

int isfull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
} 

void push()
{
    int data;
    if(isfull()==1)
        printf("Stack Overflow");
    else
    {
        printf("Enter data: ");
        scanf("%d",&data);
        stack[++top]=data;
    }
}

int isempty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void pop()
{
    int data;
    if(isempty()==1)
        printf("Stack Underflow");
    else
    {
        data=stack[top--];
        printf("Popped Element is %d",data);
    }
}

void display()
{   
    int i;
    if(isempty()==1)
        printf("Stack Underflow");
    else
    {
        printf("Stack Elements...\n");
        for(i=top;i>=0;i--)
            printf("|_%d_|\n",stack[i]);
    }
}

int main()
{
    int choice;
    while(1)
    {
        printf("\n***STACK OPERATION***\n");
        printf("1.Press 1 for PUSH\n2.Press 2 for POP\n3.Press 3 for DISPLAY\n4.Press 4 for EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:push();
                    break;
            case 2:pop();
                    break;
            case 3:display();
                    break;
            case 4:printf("Exiting from the program...");
                    exit(0);
            default:printf("Wrong Choice!!");
        }
    }
    return 0;
}