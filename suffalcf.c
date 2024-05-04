#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int balance;
    int pos;
} Entry;

int compareEntries(const void *a, const void *b) {
    const Entry *e1 = (const Entry *)a;
    const Entry *e2 = (const Entry *)b;
    if (e1->balance == e2->balance) {
        return e2->pos - e1->pos;
    }
    return e1->balance - e2->balance;
}

char *balancedShuffle(char *s) {
    int n = strlen(s);
    Entry *entries = (Entry *)malloc(n * sizeof(Entry));

   
    int balance = 0;
    for (int i = 0; i < n; ++i) {
        entries[i].balance = balance;
        entries[i].pos = i;
         if (s[i] == '(') {
            balance++;
        } else if (s[i] == ')') { 
            balance--;
        }
    }

    
    qsort(entries, n, sizeof(Entry), compareEntries);

    
    char *shuffled = (char *)malloc(n + 1);
    int j = 0;
    for (int i = 0; i < n; ++i) {
        shuffled[j++] = s[entries[i].pos];
    }
    shuffled[j] = '\0';

    free(entries);
    return shuffled;
}

int main() {
    char s[500001];
    scanf("%s", s);

    char *shuffled = balancedShuffle(s);
    printf("%s\n", shuffled);

    free(shuffled);
    return 0;
}