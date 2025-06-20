#include <stdio.h>

int areStringsEqual(const char *str1, const char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0; // Strings are different
        }
        str1++;
        str2++;
    }
    
    // Check if both strings have reached the end (null terminator)
    if (*str1 == '\0' && *str2 == '\0') {
        return 1; // Strings are the same
    } else {
        return 0; // Strings are different (one is longer than the other)
    }
}

int main() {
    char inputString1[100];
    char inputString2[100];

    printf("Enter the first string: ");
    gets(inputString1); // Read the entire line including spaces

    printf("Enter the second string: ");
    gets(inputString2); // Read the entire line including spaces

    if (areStringsEqual(inputString1, inputString2)) {
        printf("The two strings are the same.\n");
    } else {
        printf("The two strings are different.\n");
    }

    return 0;
}
