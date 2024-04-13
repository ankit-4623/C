#include <stdio.h>

int main() {
    int N;
   
    scanf("%d", &N);

    
    int last_digit = N % 10;
    int second_last_digit = (N / 10) % 10;

    
    int sum = last_digit + second_last_digit;

   
    printf("%d", sum);

    return 0;
}