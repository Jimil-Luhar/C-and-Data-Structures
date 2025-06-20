#include <stdio.h>
int strlen(char *str) {
    int l = 0;
    while (str[l] != '\0')
        l++;
    return l;
}
void delete(char str[],char word[]) {
    int slen = strlen(str), wLen = strlen(word);
    int i, j;
    for (i = 0; i < slen; i++) {
        int found = 1;
        for (j = 0; j < wLen; j++) {
            if (str[i + j] != word[j])
                found = 0;
                break;
        }if (found) {
            for (j = i; j < slen - wLen; j++) {
                str[j] = str[j + wLen];
            }
            slen -= wLen, i--;
        }
    }
    str[slen] = '\0';
}
void main() {
    char S[100], word[20];
    printf("Enter a string: ");
    gets(S);
    printf("Enter the word to delete: ");
    scanf("%s", word);
    delete(S, word);
    printf("Modified string: %s\n", S);
}
