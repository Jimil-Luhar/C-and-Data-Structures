    
#include <stdio.h>
#include <string.h>
#define Size 100

int stack[Size];
int top = -1;

void push(int number) {
    if (top >= Size - 1) {
        printf("Stack Overflow!\n", number);
    } else {
        stack[++top] = number;
        printf("%d pushed.\n", number);
    }
}
void pop() {
    if (top < 0) {
        printf("Stack Underflow!\n");
    } else {
        printf("%d popped.\n", stack[top--]);
    }
}
int main() {
    int number;
    char choice[50];
    while (1) {
        printf("Input push/pop/exit: \n");
        scanf("%s", choice);
        if (strcmp(choice, "push") == 0) {
            printf("Input a number: ");
            scanf("%d", &number);
            push(number);
        } else if (strcmp(choice, "pop") == 0) {
            pop();
        } else if (strcmp(choice, "exit") == 0) {
            printf("Exiting the program.\n");
            return 0;
        }
        printf("Current stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\nTop: %d\n", (top >= 0) ? stack[top] : -1);
    }
    return 0;
}

/*#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int stack[MAX_SIZE];
int top = -1;

// Function to push a number onto the stack
void push(int number) {
    if (top >= MAX_SIZE - 1) {
        printf("Stack Overflow! Cannot push %d.\n", number);
    } else {
        stack[++top] = number;
        printf("%d pushed onto the stack.\n", number);
    }
}

// Function to pop a number from the stack
void pop() {
    if (top < 0) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
    } else {
        printf("%d popped from the stack.\n", stack[top--]);
    }
}

int main() {
    int number;
    char choice[50];
    
    while (1) {
        printf("Input 'push', 'pop', or 'exit': ");
        scanf("%s", choice);
        
        if (strcmp(choice, "push") == 0) {
            printf("Input a number to push: ");
            scanf("%d", &number);
            push(number);
        } else if (strcmp(choice, "pop") == 0) {
            pop();
        } else if (strcmp(choice, "exit") == 0) {
            printf("Exiting the program.\n");
            return 0;
        } else {
            printf("Invalid choice! Please try again.\n");
        }
        
        // Print the current stack and top element
        printf("Current stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\nTop element: %d\n", (top >= 0) ? stack[top] : -1); // Assuming -1 represents an empty stack

    }

    return 0;
}
*/
