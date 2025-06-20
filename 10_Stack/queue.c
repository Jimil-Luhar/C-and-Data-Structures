#include <stdio.h>
#include <string.h>

#define Size 100
int queue[Size];
int front = -1, rear = -1;
void insert(int item) {
    if (rear >= Size - 1) {
        printf ("Queue Overflow!\n");
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = item;
        printf("%d inserted.\n", item);
    }
}
void delete() {
    if (front == -1) {
        printf("Queue Underflow!\n");
    } else {
        printf("%d deleted.\n", queue[front]);
        if (front == rear) {
            front = rear = -1; // Reset the queue
        } else {
            front++;
        }
    }
}
int main() {
    int item;
    char choice[50];
    while (1) {
        printf("Input insert/delete/exit:\n");
        scanf("%s", choice);
        if (strcmp(choice, "insert") == 0) {
            printf("Input element: ");
            scanf("%d", &item);
            insert(item);
        } else if (strcmp(choice, "delete") == 0) {
            delete();
        } else if (strcmp(choice, "exit") == 0) {
            printf("Exiting the program.\n");
            return 0;
        }
        printf("Current queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\nTop: %d\n", (front != -1) ? queue[front] : -1);
    }
    return 0;
}







/*#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1, rear = -1;

// Function to insert an element into the queue
void insert(int item) {
    if (rear >= MAX_SIZE - 1) {
        printf("Queue Overflow! Cannot insert %d.\n", item);
    } else {
        if (front == -1) {
            front = 0;
        }
        queue[++rear] = item;
        printf("%d inserted into the queue.\n", item);
    }
}

// Function to delete an element from the queue
void delete() {
    if (front == -1) {
        printf("Queue Underflow! Cannot delete from an empty queue.\n");
    } else {
        printf("%d deleted from the queue.\n", queue[front]);
        if (front == rear) {
            front = rear = -1; // Reset the queue
        } else {
            front++;
        }
    }
}

int main() {
    int item;
    char choice[50];

    while (1) {
        printf("Input 'insert', 'delete', or 'exit': ");
        scanf("%s", choice);

        if (strcmp(choice, "insert") == 0) {
            printf("Enter the element to insert: ");
            scanf("%d", &item);
            insert(item);
        } else if (strcmp(choice, "delete") == 0) {
            delete();
        } else if (strcmp(choice, "exit") == 0) {
            printf("Exiting the program.\n");
            return 0;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
        
        // Print the current queue and top element
        printf("Current queue: ");
        for (int i = front; i <= rear; i++) {
            printf("%d ", queue[i]);
        }
        printf("\nTop element: %d\n", (front != -1) ? queue[front] : -1);
    }

    return 0;
}
*/