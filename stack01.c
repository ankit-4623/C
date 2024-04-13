#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#define MAXSIZE 10
int stack[MAXSIZE],top=-1,choice;
void push()
{
    int n;
    if (top==MAXSIZE-1)
    {
       printf("\nStack is overflow");
    }
    else
    {
        printf("\npush the element in stack : ");
        scanf("%d",&n);
        top++;
        stack[top]=n;
    }
    
    
}
void display()
{
    int i;
    if (top==-1)
    {
        printf("stack is empty");

    }
    else
    {
        printf("Element of stack :");
        for ( i = top; i >=0; i--)
        {
            printf("\n%d",stack[i]);
        }
        
    }
    
    
}
void pop()
{
    int n;
    if (top==-1)
    {
        printf("stack is empty");

    }
    else
    {
        
        n=stack[top];
        top--;
        printf("poped element is %d",n);
    }
    
}
void main()
{
    
    do
    {
        printf("\n..............stack...............");
        printf("\n1.Push\n2.Pop\n3.Display\n4.Exit");
        printf("\n");
     printf("\nenter your choice :");
     scanf("\n%d",&choice);
     switch (choice)
     {
     case 1:
        push();
        break;

        case 2:
        pop();
        break;

        case 3:
        display();
        break;

        default:
        printf("\nInvalid");
        break;
     }
    } while (choice!=4);
    
   
   
} 