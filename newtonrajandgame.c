#include <stdio.h>

int main() {
    int n, k;
    long count=0;
  
    scanf("%d %d", &n, &k);
    int multiples = n / k;
    if (k % 2 == 0) {
        count = multiples * multiples * multiples;
        count += (n / (k / 2) -  n / k) * (n / (k / 2) -  n / k) * (n / (k / 2) -  n / k);
    } else {
      
        count = multiples * multiples * multiples;
    }
    printf("%ld\n", count);

    return 0;
}