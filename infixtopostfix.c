#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define MAX_SIZE 100
int inOperator(char ch)
{
    return (ch=='+'||ch=='-'||ch=='*'||ch=='/');
}
int getPrecedence(char op)
{
    if(op=='+'||op=='-')
    return 1;
    if(op=='*'||op=='/')
    return 2;
    return 0;
}
void infixToPostfix(char infix[],char postfix[]){
    int i,j;
    char stack[MAX_SIZE];
    int top=-1;
    for (int i = 0,j=0; infix[i]!='\0'; i++)
    {
       if(infix[i]==' '){
        continue;
       }
       else if (isalnum(infix[i]))
       {
        postfix[j++]=infix[i];

       }
       else if (infix[i]=='(')
       {
        stack[++top]=infix[i];
       }
       else if (infix==')')
       {
        while (top!=-1&& stack[top]!='(')
        {
            postfix[j++]=stack[top--];
        }
        top--;
        
       }
       else if (inOperator(infix[i]))
       {
        while (top !=-1&&getPrecedence(stack[top])>=getPrecedence(infix[i]))
        {
           postfix[j++]=stack[top--];
        }
        stack[++top]=infix[i];
       }
     }
     while (top!=-1)
     {
        postfix[j++]=stack[top--];
     }
     postfix[j]='\0';
     
    
}
int main()
{
    char infix[MAX_SIZE];
    char postfix[MAX_SIZE];
    printf("Enter the infix expression :");
    fgets(infix,MAX_SIZE,stdin);
    infixToPostfix(infix,postfix);
    printf("Postfix expression : %s\n",postfix);
    return 0;
}  