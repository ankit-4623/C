#include <stdio.h>

#define MAX_DIGITS 10

int main() {
    int n;
    int digits[MAX_DIGITS] = {0};

    // Step 1: Read the input
    scanf("%d", &n);
    
    // Step 2: Count the frequency of each digit
    for (int i = 0; i < n; i++) {
        int digit;
        scanf("%d", &digit);
        digits[digit]++;
    }

    // Step 3: Check divisibility by 2 and 5
    if (digits[0] == 0) {
        // If the number doesn't contain any zero, proceed
        int sum = 0;
        for (int i = 0; i < MAX_DIGITS; i++) {
            sum += i * digits[i];
        }

        if (sum % 3 == 0 && digits[2] + digits[4] + digits[6] + digits[8] > 0 && digits[5] > 0) {
            // If the sum is divisible by 3 and there's at least one even digit and one 5
            // Construct the maximum number
            for (int i = 9; i >= 0; i--) {
                for (int j = 0; j < digits[i]; j++) {
                    printf("%d", i);
                }
            }
            printf("\n");
        } else {
            printf("-1\n");
        }
    } else {
        printf("-1\n");
    }

    return 0;
}
