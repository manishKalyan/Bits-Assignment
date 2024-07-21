#include <stdio.h>
#include <stdlib.h>

#define n 5

void main() {
    int queue[n], ch = 1, front = 0, rear = 0, i, j = 1;

    // Displaying the menu options
    printf("Queue using Array");
    printf("\n1. Insertion \n2. Deletion \n3. Display \n4. Exit");

    while (ch) {
        printf("\nEnter the Choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1: // Insertion
                if (rear == n) {
                    printf("\n Queue is Full");
                } else {
                    printf("\n Enter no %d: ", j++);
                    scanf("%d", &queue[rear++]);
                }
                break;

            case 2: // Deletion
                if (front == rear) {
                    printf("\n Queue is Empty");
                } else {
                    printf("\n Deleted Element is %d", queue[front++]);
                    // To handle wrap-around cases and reuse of space
                    if (front == rear) {
                        front = rear = 0;
                        j = 1; // Resetting the insertion count
                    }
                }
                break;

            case 3: // Display
                if (front == rear) {
                    printf("\n Queue is Empty");
                } else {
                    printf("\n Queue Elements are: \n");
                    for (i = front; i < rear; i++) {
                        printf("%d\n", queue[i]);
                    }
                }
                break;

            case 4: // Exit
                printf("\n Exiting...");
                return;

            default:
                printf("\nWrong Choice: please see the options");
                break;
        }
    }
}
