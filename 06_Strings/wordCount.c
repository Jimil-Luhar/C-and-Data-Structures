#include <stdio.h>

int main() {
    char S[100];
    int words = 0, spaces = 0, chars = 0;

    printf("Enter a sentence: ");
    gets(S);

    for (int i = 0; S[i] != '\0'; i++) {
        char ch = S[i];
        
        if (ch == ' ') {
            spaces++;
        } else if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
            chars++;
        }
    }

    // Count the last word
    words = spaces + 1;

    printf("Words: %d\n", words);
    printf("Spaces: %d\n", spaces);
    printf("Chars: %d\n", chars);

    return 0;
}