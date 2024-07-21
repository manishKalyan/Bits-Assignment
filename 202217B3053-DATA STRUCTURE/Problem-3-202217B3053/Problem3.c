#include <stdio.h>

// Global variables
int stack[100], choice, n, top, x, i;

// Function prototypes
void push(void);
void pop(void);
void display(void);

int main() {
    // Initialize the stack's top
    top = -1;

    // Get the size of the stack from the user
    printf("\n Enter the size of STACK[MAX=100]: ");
    scanf("%d", &n);

    // Display menu options
    printf("\n\t STACK OPERATIONS USING ARRAY");
    printf("\n\t--------------------------------");
    printf("\n\t 1. PUSH\n\t 2. POP\n\t 3. DISPLAY\n\t 4. EXIT");

    // Loop to accept and process user choices
    do {
        printf("\n Enter your Choice: ");
        scanf("%d", &choice);

        switch (choice) {
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
                printf("\n\t EXIT POINT ");
                break;
            default:
                printf("\n\t Please Enter a Valid Choice(1/2/3/4)");
        }
    } while (choice != 4);

    return 0;
}

// Function to push an element onto the stack
void push() {
    if (top >= n - 1) {
        printf("\n\tSTACK Overflow");
    } else {
        printf(" Enter a value to be pushed: ");
        scanf("%d", &x);
        stack[++top] = x;
    }
}

// Function to pop an element from the stack
void pop() {
    if (top <= -1) {
        printf("\n\t Stack Underflow");
    } else {
        printf("\n\t The popped element is %d", stack[top--]);
    }
}

// Function to display elements of the stack
void display() {
    if (top >= 0) {
        printf("\n The elements in STACK \n");
        for (i = top; i >= 0; i--) {
            printf("\n%d", stack[i]);
        }
        printf("\n Press Next Choice");
    } else {
        printf("\n The STACK is empty");
    }
}
