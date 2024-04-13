#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define max 100
char stack[max];
char infix[100];
char postfix[100];
void posttoin();
int top = -1;

void push(char);
char pop();

void posttoin()
{
    char symbol;
    for (int i = 0; i < strlen(postfix); i++)
    {
        symbol=postfix[i];
        if (symbol == '+' || symbol == '-' || symbol == '*' || symbol == '/')
        {
            char operand2 = pop();
            char operand1 = pop();
             sprintf(infix, "(%c%c%c)", operand1, postfix[i], operand2);
            push(infix);
        }
        else
        {
            push(symbol);
        }
        
        
    }
    
}

void push(char c) {
    if (top == max - 1) {
        printf("Stack is overflow\n");
    } else {
        top++;
        stack[top] = c;
    }
}

char pop() {
    char c;
    if (top == -1) {
        printf("Stack is underflow\n");
    } else {
        c = stack[top];
        top--;
    }
    return c;
}
int main()
{
    printf("enter your postfix expression :");
    gets(postfix);
    posttoin();
    printf("Infix expression: %s\n", infix);
}
