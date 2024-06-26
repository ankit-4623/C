#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define max 100

char stack[max];
char infix[100];
char postfix[100];
int top = -1;

void push(char);
char pop();
int isempty();
void intopost();
int precedence(char);

int main() {
    printf("Enter the infix expression: ");
    gets(infix);
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
                while ((next = pop()) != '(') {
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
            return 3;
        case '/':
        case '*':
            return 2;
        case '+':
        case '-':
            return 1;
        default:
            return 0;
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

int isempty() {
    if (top == -1) {
        return 1;
    } else {
        return 0;
    }
}
