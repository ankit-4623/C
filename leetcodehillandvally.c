#include<stdio.h>
#include<stdlib.h>

int main() {
    int n, count = 0;
    scanf("%d", &n);
    int a[n];
    int m=n;
    for (int i = 0; i < m; i++) {
        scanf("%d", &a[i]);
    }

    
    for (int i = 0; i < m - 1; i++) {
        if (a[i] == a[i + 1]) {
            for (int j = i; j < m - 1; j++) {
                a[j] = a[j + 1];
            }
            i--; 
            m--;
        }
    }

    
    for (int i = 1; i < m - 1; i++) {
        if ((a[i] > a[i - 1] && a[i] > a[i + 1]) || (a[i] < a[i - 1] && a[i] < a[i + 1])) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
