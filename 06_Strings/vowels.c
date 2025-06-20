#include <stdio.h>
void main() {
    char S[100];
    int v = 0, c = 0;
    printf("Input a String: \n");
    gets(S);
    for (int i = 0; S[i] != '\0'; i++) {
        char ch = S[i];
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
                v++;
            else
                c++;
        }
    }
    printf("Vowels: %d\n", v);
    printf("Consonants: %d\n", c);
}
