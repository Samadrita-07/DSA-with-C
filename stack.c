#include<stdio.h>
#include<stdlib.h>

#define MAX 3

int stack[10],top=-1;

int isfull() //checking stack full
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
} 

void push() //insertion
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

int isempty() //checking stack empty
{
    if(top==-1)
        return 1;
    else
        return 0;
}

void pop() //deletion
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

void display() //displaying the elements
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

void search() //searching any of the element
{
    int key,i,flag=0;
    printf("Enter an element to search: ");
    scanf("%d",&key);
    for(i=top;i>=0;i--)
    {
        if(stack[i]==key)
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
        printf("\n***STACK OPERATION***\n");
        printf("1.Press 1 for PUSH\n2.Press 2 for POP\n3.Press 3 for DISPLAY\n4.Press 4 for SEARCH\n5.Press 5 for EXIT\n");
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
            case 4:search();
            		break;
			case 5:printf("Exiting from the program...");
                    exit(0);
            default:printf("Wrong Choice!!");
        }
    }
    return 0;
}
