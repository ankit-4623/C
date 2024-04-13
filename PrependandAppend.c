#include<stdio.h>
#include<string.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n;
        scanf("%d ", &n);
        char a[n];
        gets(a);
       
        int count = n;

        for(int i = 0, j = strlen(a) - 1; i < j; i++, j--) {
            if (a[i] == a[j]) {
               break;
                
            }
            else
            count-=2;
        }
        printf("%d\n", count);
    }
    return 0;
}