#include <stdio.h>
#include <string.h>

int is_vowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

void correct_word(char *s) {
    int len = strlen(s);
    int i, j;

    for (i = 0; i < len - 1; ++i) {
        if (is_vowel(s[i]) && is_vowel(s[i + 1])) {
            // Shift characters to the left to remove the first vowel of the pair
            for (j = i; j < len - 1; ++j) {
                s[j] = s[j + 1];
            }
            s[len - 1] = '\0'; // Null-terminate the string
            --len; // Update the length of the string
            --i; // Check the current position again in case there's another consecutive vowel
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    char s[101];
    scanf("%s", s);

    correct_word(s);

    printf("%s\n", s);
    return 0;
}
