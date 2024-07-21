#include <stdio.h>
#include <stdlib.h>

#define MAX 20

// Function declarations
void create();
void insert();
void deletion();
void search();
void display();

// Global variables
int b[MAX], n = 0;

// Main function
void main() {
    int ch;
    char g = 'y';

    do {
        printf("\n Main Menu");
        printf("\n 1. Create \n 2. Delete \n 3. Search \n 4. Insert \n 5. Display\n 6. Exit \n");
        printf("\n Enter your Choice: ");
        scanf("%d", &ch);

        // Switch to call the appropriate choice provided by the user
        switch(ch) {
            case 1:
                create();
                break;
            case 2:
                deletion();
                break;
            case 3:
                search();
                break;
            case 4:
                insert();
                break;
            case 5:
                display();
                break;
            case 6:
                exit(0);
            default:
                printf("\n Enter the correct choice:");
        }
        printf("\n Do you want to continue (y/n): ");
        scanf(" %c", &g);
    } while(g == 'y' || g == 'Y');
}

// Function to create the list
void create() {
    printf("\n Enter the number of nodes: ");
    scanf("%d", &n);

    if(n > MAX) {
        printf("Number of elements exceeds maximum limit of %d\n", MAX);
        return;
    }

    for(int i = 0; i < n; i++) {
        printf("\n Enter Element %d: ", i + 1);
        scanf("%d", &b[i]);
    }
}

// Function to delete an element from the list
void deletion() {
    int pos;
    printf("\n Enter the position you want to delete: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n) {
        printf("\n Invalid Location");
        return;
    }

    for(int i = pos; i < n - 1; i++) {
        b[i] = b[i + 1];
    }
    n--;

    printf("\n The Elements after deletion:");
    for(int i = 0; i < n; i++) {
        printf("\t%d", b[i]);
    }
    printf("\n");
}

// Function to search an element in the list
void search() {
    int e;
    printf("\n Enter the Element to be searched: ");
    scanf("%d", &e);

    for(int i = 0; i < n; i++) {
        if(b[i] == e) {
            printf("Value is at Position %d\n", i + 1);
            return;
        }
    }
    printf("Value %d is not in the list\n", e);
}

// Function to insert an element into the list
void insert() {
    int pos, p;
    if(n >= MAX) {
        printf("\n List is full, cannot insert new element.\n");
        return;
    }

    printf("\n Enter the position you need to insert: ");
    scanf("%d", &pos);
    
    if(pos < 0 || pos > n) {
        printf("\n Invalid Location\n");
        return;
    }

    for(int i = n; i > pos; i--) {
        b[i] = b[i - 1];
    }

    printf("\n Enter the element to insert: ");
    scanf("%d", &p);
    b[pos] = p;
    n++;

    printf("\n The list after insertion:\n");
    display();
}

// Function to display the list
void display() {
    printf("\n The Elements of The list ADT are:");
    for(int i = 0; i < n; i++) {
        printf("\n%d", b[i]);
    }
    printf("\n");
}
