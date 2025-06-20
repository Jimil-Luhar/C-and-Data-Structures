#include <stdio.h>
void main() {
    char S[100], target;
    printf("Enter a string: ");
    gets(S);
    printf("Enter a character to find: ");
    scanf(" %c", &target);
    int count = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        count += (S[i] == target)?1:0;
    }
    printf("Char '%c' occurs %d times in the string.\n", target, count);
}
