#include <stdio.h>

int main() {
    int N;
    double sum,result;
    scanf("%d", &N); 

    int a[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &a[i]);
        sum += 1.0 / a[i]; 
    }
    
     result = 1.0 / sum; 

    printf("%.8lf\n", result);

    return 0;
}
