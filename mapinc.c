#include <stdio.h>
#include <limits.h>

int getSingleElement(int arr[], int n) {
    int maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxi) {
            maxi = arr[i];
        }
    }

    int hash[maxi + 1];
    for (int i = 0; i <= maxi; i++) {
        hash[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++) {
        if (hash[arr[i]] == 1) {
            return arr[i];
        }
    }

    return -1;
}

int main() {
    int arr[] = {4, 1, 2, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = getSingleElement(arr, n);
    printf("The single element is: %d\n", ans);
    return 0;
}
