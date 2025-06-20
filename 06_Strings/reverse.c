#include <stdio.h>
void reverse(char str[]) {
    int len = 0;
    while (str[len] != '\0')
        len++;
    for (int i = 0, j = len - 1; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
void main() {
    char String[100];
    printf("Enter a string: ");
    gets(String);
    reverse(String);
    printf("Reversed string: %s\n", String);
}
