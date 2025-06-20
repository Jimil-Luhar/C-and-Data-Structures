#include <stdio.h>

void main() {
    char S[100];
    printf("Enter a string: ");
    gets(S);

    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] >= 'a' && S[i] <= 'z') {
            S[i] = S[i] - 32; // Convert to uppercase
        } else if (S[i] >= 'A' && S[i] <= 'Z') {
            S[i] = S[i] + 32; // Convert to lowercase
        }
    }

    printf("Modified string: %s\n", S);
}
