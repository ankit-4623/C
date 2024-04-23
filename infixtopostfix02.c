// Infix to postfix using stack


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define MAX 100

char stack[MAX];
char infix[MAX];
char postfix[MAX];
int top = -1;

void push(char);
char pop();
int isempty();
void intopost();
int precedence(char);

int main() {
    printf("Enter the infix expression: ");
    fgets(infix, sizeof(infix), stdin);
    intopost();
    printf("Postfix expression: %s\n", postfix);
    return 0;
}

void intopost() {
    int i, j = 0;
    char symbol, next;
    for (i = 0; i < strlen(infix); i++) {
        symbol = infix[i];
        switch (symbol) {
            case '(':
                push(symbol);
                break;
            case ')':
                while ((next = pop()) != '(' && !isempty()) {
                    postfix[j++] = next;
                }
                break;
            case '/':
            case '*':
            case '+':
            case '-':
            case '^': 
                while (!isempty() && precedence(stack[top]) >= precedence(symbol)) {
                    postfix[j++] = pop();
                }
                push(symbol);
                break;
            default:
                postfix[j++] = symbol;
                break;
        }
    }
    while (!isempty()) {
        postfix[j++] = pop();
    }
    postfix[j] = '\0';
}

int precedence(char symbol) {
    switch (symbol) {
        case '^':
            return 4; 
        case '/':
        case '*':
            return 3;
        case '+':
        case '-':
            return 2;
        case '(':
            return 1;
        default:
            return 0; 
    }
}

void push(char c) {
    if (top == MAX - 1) {
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
        return '\0'; // Return null character on underflow
    } else {
        c = stack[top];
        top--;
        return c;
    }
}

int isempty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}
