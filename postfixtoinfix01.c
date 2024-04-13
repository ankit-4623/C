#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_SIZE 100

typedef struct {
    char data[MAX_SIZE];
    int top;
} Stack;

void initialize(Stack *s) {
    s->top = -1;
}

void push(Stack *s, char value) {
    if (s->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        exit(EXIT_FAILURE);
    }
    s->data[++s->top] = value;
}

char pop(Stack *s) {
    if (s->top == -1) {
        printf("Stack Underflow\n");
        exit(EXIT_FAILURE);
    }
    return s->data[s->top--];
}

void postfixToInfix(const char *postfix, char *infix) {
    Stack s;
    initialize(&s);
    int len = strlen(postfix);

    for (int i = 0; i < len; i++) {
        if (isalnum(postfix[i])) {
            char operand[2] = {postfix[i], '\0'};
            push(&s, operand[0]);
        } else if (postfix[i] == '+' || postfix[i] == '-' || postfix[i] == '*' || postfix[i] == '/') {
            char operand2 = pop(&s);
            char operand1 = pop(&s);
            sprintf(infix, "(%c%c%c)", operand1, postfix[i], operand2);
            push(&s, infix[0]);
        }
    }
}

int main() {
    char postfix[MAX_SIZE];
    char infix[MAX_SIZE];

    printf("Enter the postfix expression: ");
    fgets(postfix, MAX_SIZE, stdin);
    postfix[strcspn(postfix, "\n")] = '\0';

    postfixToInfix(postfix, infix);
    printf("Infix expression: %s\n", infix);

    return 0;
}
