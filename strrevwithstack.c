#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define maxsize 1000

char stack[maxsize];
char s[100];
char r[100];
int top = -1;

void push(char);
char pop();
void rev() 
{
    int i, j = 0;
    char symbol;
    for (i = 0; i < strlen(s); i++) {
        symbol = s[i];
        while (symbol != ' '&& symbol != '\0') {
            push(symbol);
            i++;
              symbol = s[i]; 
        }
        while (top!=-1) {
            r[j++] = pop();
        }
        r[j++] = ' '; 
    }
    r[j] = '\0'; 
}

void push(char c) {
    if(top == maxsize - 1)
        printf("Stack is overflow\n");
    else
    {
        top++;
        stack[top] = c;
    }
}

char pop() {
    char c;
    if (top == -1) {
        printf("Stack is underflow\n");
        return '\0'; 
    } else {
        c = stack[top];
        top--;
        return c;
    }
}

int main() {
    printf("Enter the string: ");
    gets(s);
    rev();
    printf("Reversed string is: %s\n", r);
    return 0;
}
