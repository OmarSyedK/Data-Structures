#include <stdio.h>
#include <stdlib.h>

#define MAX 5
int stack[MAX], top = -1, ele;

void push() {
    if (top == MAX - 1) {
        printf("\nStack Overflow");
    } else {
        printf("\nEnter element to insert in the stack: ");
        scanf("%d", &ele);
        top++;
        stack[top] = ele;
    }
}

void pop() {
    if (top == -1) {
        printf("\nStack Underflow");
    } else {
        ele = stack[top];
        top--;
        printf("\nPopped element: %d", ele);
    }
}

void display() {
    if (top == -1) {
        printf("\nStack is empty");
    } else {
        printf("\nCurrent Stack: ");
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
    }
}

int main() {
    int ch;
    while (1) {
        printf("\nMain Menu");
        printf("\n1. Push");
        printf("\n2. Pop");
        printf("\n3. Display");
        printf("\n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                exit(0);
            default:
                printf("\nInvalid choice");
        }
    }
    return 0;
}
