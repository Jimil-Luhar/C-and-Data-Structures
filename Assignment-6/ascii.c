#include <stdio.h>

int main() {
    char inputString[100];
    
    printf("Enter a string: ");
    scanf("%[^\n]", inputString);  // Read the whole line including spaces

    printf("ASCII values of characters in the string:\n");

    for (int i = 0; inputString[i] != '\0'; i++) {
        printf("Character: %c, ASCII value: %d\n", inputString[i], inputString[i]);
    }

    return 0;
}
