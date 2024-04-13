#include<stdio.h>
#include<stdlib.h>

int main() {
    int s, n,j=0;
    scanf("%d %d", &s, &n);

    int a[j];
    for (int i = 0; i < n; i++) {
        a[j++] = s ;
        s=s+2;
    }

    int sum = a[0];
    for (int i = 1; i < n; i++) {
        sum ^= a[i]; 
    }

    printf("%d\n", sum);
    return 0;
}
