#include <stdio.h>
#include <stdbool.h>

bool isP(char *str) {
    int l = 0;
    while (str[l] != '\0') {
        l++;
    }
    for (int i = 0; i < l / 2; i++) {
        if (str[i] != str[l - 1 - i]) {
            return false; // Characters don't match, not a palindrome
        }
    }
    return true; // All characters matched, it's a palindrome
}
void main() {
    char S[100];
    printf("Enter a string: ");
    gets(S); // Read the entire line including spaces
    if (isP(S)) {
        printf("The given string is a palindrome.\n");
    } else {
        printf("The given string is not a palindrome.\n");
    }
}



