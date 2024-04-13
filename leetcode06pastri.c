#include <stdio.h>
#include <stdlib.h>

// Function to calculate the row of Pascal's Triangle
int* getRow(int rowIndex, int* returnSize) {
    int* res = (int*)malloc((rowIndex + 1) * sizeof(int));
    if (res == NULL) {
        *returnSize = 0;
        return NULL;
    }

    // Initialize the first element
    res[0] = 1;
    int prev = 1;

    // Calculate the row
    for (int k = 1; k <= rowIndex; k++) {
        int next_val = prev * (rowIndex - k + 1) / k;
        res[k] = next_val;
        prev = next_val;
    }

    *returnSize = rowIndex + 1;
    return res;
}

int main() {
    int rowIndex = 5; // Example rowIndex
    int returnSize;
    int* row = getRow(rowIndex, &returnSize);

    // Print the row
    printf("Row %d of Pascal's Triangle: ", rowIndex);
    for (int i = 0; i < returnSize; i++) {
        printf("%d ", row[i]);
    }
    printf("\n");

    // Free memory allocated for the row
    free(row);

    return 0;
}
