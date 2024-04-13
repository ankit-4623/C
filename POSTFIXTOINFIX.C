#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
#include<ctype.h> 
#define MAX_SIZE 100 
typedef struct StackNode 
{ 
    char * data; 
    struct StackNode*next; 
}StackNode; 
StackNode*creatNode(char*data){ 
    StackNode*newNode = (StackNode*)malloc(sizeof(StackNode)); 
    if(newNode==NULL){ 
        printf("Memory allocation failed!\n"); 
        exit(EXIT_FAILURE); 
    } 
    newNode->data=data; 
    newNode->next=NULL; 
    return newNode; 
} 
int isOperator(char ch) 
{ 
    return(ch=='+'||ch=='-'||ch=='*'||ch=='/'); 
} 
char*postfixToInfix(char postfix[]) 
{ 
    StackNode*stack = NULL; 
    int i; 
    for ( i = 0; postfix[i]!='\0'; i++) 
    { 
        if(isalnum(postfix[i])){ 
            char*operand=(char*)malloc(2*sizeof(char)); 
            operand[0]=postfix[i]; 
            operand[1]='\0'; 
            StackNode*node = creatNode(operand); 
            node->next=stack; 
            stack=node; 
        } 
        else if (isOperator(postfix[i])) 
        { 
            char*operand2=stack->data; 
            stack=stack->next; 
            char*operand1= stack->data; 
            stack= stack->next; 
            char*infix = (char*)malloc((strlen(operand1)+strlen(operand2)+4)*sizeof(char)); 
            sprintf(infix,"(%s%c%s)",operand1,postfix[i],operand2); 
            StackNode*node = creatNode(infix); 
            node->next=stack; 
            stack=node; 
        } 
    } 
    return stack->data; 
} 
int main() 
{ 
    char postfix[MAX_SIZE]; 
    char*infix; 
    printf("enter the postfix expression :"); 
    fgets(postfix,MAX_SIZE,stdin); 
    postfix[strcspn(postfix,"\n")]='\0'; 
    infix=postfixToInfix(postfix); 
    printf("Infix expression : %s\n",infix); 
    free(infix); 
    return 0; 
}