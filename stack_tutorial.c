#include<stdio.h>
#include<stdbool.h>
#define N 4
int stack[N],choice,top=-1;
void push();//inserts element at top
int pop();//pops last element
void peek();//last element
bool isEmpty();
bool isFull();
void show();

int main()
{
    while(1)
    {
        printf("\nEnter option 1)push 2)pop 3)peek 4)Is the stack empty 5)Is the stack full 6)Display stack 7)Exit\n");
        scanf("%d",&choice);
        if(choice==1)
        {
            push();
        }
        else if(choice==2)
        {
            pop();
        }
        else if(choice==3)
        {
            peek();
        }
        else if(choice==4)
        {
            (isEmpty()) ? printf("Stack is empty"):printf("Stack is not empty");
        }
        else if(choice==5)
        {
            (isFull()) ? printf("Stack is full"):printf("Stack is not full");

        }
        else if(choice==6)
        {
            show();
        }
        else
        {
            return 0;
        }      
    }    
}
void push()
{
    int val;
    if(top==(N-1))//checking if stack is full/overflow
    {
        printf("Overflow");
    }
    else
    {
        int val;
        printf("Enter value:");
        scanf("%d",&val);
        top+=1;
        stack[top]=val;
        printf("Value inserted!\n");    
    }
}
int pop()
{
    if(top==-1)//checking if stack is empty
    {
        printf("Underflow");    
    }
    int x=stack[top];
    printf("Popped element:%d\n",x);
    top-=1;
    return x;
}
void peek()
{
    int x=stack[top];
    printf("Last element:%d\n",x);
}
bool isEmpty()
{
    if(top==-1)
    {
        return true;
    }
    else
    {
        return false;    
    }
}
bool isFull()
{
    if(top==(N-1))
    {
        return true;
    }
    else
    {
        return false;    
    }
}
void show()
{
    while(!isEmpty())
    {
        int data=pop();
        printf("%d\n",data);
    }
}
